from pathlib import Path
import json
from tkinter import *
from tkinter import messagebox
import sys
from to_do import open_todo

OUTPUT_PATH = Path(__file__).parent
ASSETS_PATH = OUTPUT_PATH / Path(r"C:\Users\Unknown\Desktop\Time-Management-App\build\assets\frame0")

def relative_to_assets(path: str) -> Path:
    return ASSETS_PATH / Path(path)


def update_task_numbers(listbox_tasks, tasks, task_colors=None):
    if task_colors is None:
        # Get the colors of all tasks before updating
        task_colors = [listbox_tasks.itemcget(i, "fg") for i in range(listbox_tasks.size())]
        
    
    listbox_tasks.delete(0, END)
    for i, (task, color) in enumerate(zip(tasks, task_colors), start=1):
        listbox_tasks.insert(END, f"{i}. {task}")
        listbox_tasks.itemconfig(i-1, fg=color)  # Set the color for each task
        

def remove_task(listbox_tasks, tasks, update_task_numbers, save_tasks, task_colors):
    selected_index = listbox_tasks.curselection()
    if selected_index:
        index = selected_index[0]
        if index < len(tasks):
            listbox_tasks.delete(index)
            del tasks[index]
            del task_colors[index]  # Always remove the color associated with the task
            update_task_numbers(listbox_tasks, tasks)  # Update task numbers
            save_tasks(tasks)  # Save tasks after removal


def toggle_color(listbox_tasks):
    selected_index = listbox_tasks.curselection()
    if selected_index:
        index = selected_index[0]
        if listbox_tasks.itemcget(index, "fg") == "green":
            listbox_tasks.itemconfig(index, fg="black")
        else:
            listbox_tasks.itemconfig(index, fg="green")

def open_todo():
    # Define the filename to store the tasks
    tasks_file = "tasks.txt"

    def save_tasks(tasks):
        # Save tasks to a text file
        with open(tasks_file, "w") as file:
            for task in tasks:
                file.write(task + "\n")

    def load_tasks():
        # Load tasks from the text file
        try:
            with open(tasks_file, "r") as file:
                return [line.strip() for line in file.readlines()]
        except FileNotFoundError:
            return []

    def clear_all_tasks():
        # Clear all tasks from the listbox and labels
        listbox_tasks.delete(0, END)
        tasks.clear()
        save_tasks(tasks)  # Save tasks after clearing

    def add_task():
        task = entry_task.get()
        if task:
            tasks.append(task)

            # Add task to the listbox
            listbox_tasks.insert(END, f"{len(tasks)}. {task}")

            # Clear the entry field
            entry_task.delete(0, "end")

            # Update task numbers
            update_task_numbers(listbox_tasks, tasks)  # Remove task_colors from here
            save_tasks(tasks)  # Save tasks after addition
            

    def update_task_numbers(listbox_tasks, tasks):
        listbox_tasks.delete(0, END)
        for i, task in enumerate(tasks, start=1):
            listbox_tasks.insert(END, f"{i}. {task}")


    tasks = load_tasks()  # Load tasks from file
    task_colors = ["black"] * len(tasks)  # Initialize all colors as black

    todo_window = Toplevel()
    todo_window.title("To-Do List")

    # Button to clear all tasks
    button_clear_all = Button(todo_window, text="Clear All", command=clear_all_tasks)
    button_clear_all.grid(row=0, column=3, padx=5, pady=5)

    entry_task = Entry(todo_window, width=50, font=("Arial", 12))
    entry_task.grid(row=0, column=0, padx=5, pady=5)

    button_add_task = Button(todo_window, text="Add Task", command=add_task)
    button_add_task.grid(row=0, column=1, padx=5, pady=5)

    button_remove_task = Button(todo_window, text="Remove Task", command=lambda: remove_task(listbox_tasks, tasks, update_task_numbers, save_tasks, task_colors))
    button_remove_task.grid(row=0, column=2, padx=5, pady=5)

    button_done = Button(todo_window, text="Done", command=lambda: toggle_color(listbox_tasks))
    button_done.grid(row=0, column=5, padx=5, pady=5)

    listbox_tasks = Listbox(todo_window, height=15, width=50, font=("Helvetica", 14))  # Change font and size
    listbox_tasks.grid(row=1, column=0, columnspan=6, padx=5, pady=5)

    scrollbar = Scrollbar(todo_window, orient="vertical", command=listbox_tasks.yview)
    scrollbar.grid(row=1, column=6, sticky="ns")
    listbox_tasks.config(yscrollcommand=scrollbar.set)

    # Initialize the todo window size based on content
    todo_window.update()
    todo_window.geometry(f"{todo_window.winfo_reqwidth()}x{todo_window.winfo_reqheight()}")

    # Update task numbers immediately after loading tasks
    update_task_numbers(listbox_tasks, tasks)


window = Tk()

window.geometry("292x700")
window.configure(bg="#D4D8FF")

canvas = Canvas(
    window,
    bg="#D4D8FF",
    height=700,
    width=292,
    bd=0,
    highlightthickness=0,
    relief="ridge"
)

canvas.place(x=0, y=0)
image_image = PhotoImage(
    file=relative_to_assets("image_1.png"))
image_1 = canvas.create_image(
    146.0,
    350.0,
    image=image_image
)

canvas.create_rectangle(
    -1.0,
    170.0,
    292.0,
    358.0,
    fill="#FFFFFF",
    outline="")

todo_button_image = PhotoImage(
    file=relative_to_assets("button_1.png"))
todo_button = Button(
    image=todo_button_image,
    borderwidth=0,
    highlightthickness=0,
    command=open_todo,
    relief="flat"
)
todo_button.place(
    x=0.0,
    y=264.0,
    width=292.0,
    height=44.0
)

budget_tracker_button_image = PhotoImage(
    file=relative_to_assets("button_2.png"))
budget_tracker_button = Button(
    image=budget_tracker_button_image,
    borderwidth=0,
    highlightthickness=0,
    command=lambda: print("button_2 clicked"),
    relief="flat"
)
budget_tracker_button.place(
    x=0.0,
    y=217.0,
    width=292.0,
    height=44.0
)

notes_button_image = PhotoImage(
    file=relative_to_assets("button_3.png"))
notes_button = Button(
    image=notes_button_image,
    borderwidth=0,
    highlightthickness=0,
    command=lambda: print("button_3 clicked"),
    relief="flat"
)
notes_button.place(
    x=0.0,
    y=311.0,
    width=292.0,
    height=44.0
)

calendar_button_image = PhotoImage(
    file=relative_to_assets("button_4.png"))
calendar_button = Button(
    image=calendar_button_image,
    borderwidth=0,
    highlightthickness=0,
    command=lambda: print("button_4 clicked"),
    relief="flat"
)
calendar_button.place(
    x=0.0,
    y=170.0,
    width=292.0,
    height=44.0
)
window.resizable(False, False)
window.mainloop()
