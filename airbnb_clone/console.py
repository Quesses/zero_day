#!/usr/bin/python3
""" Personal practice of the airbnb clonbe project """

import cmd

class HBNBCommand(cmd.Cmd):
    """Command line interface/console fo airbnb users"""

    prompt  = "(hbnb)"
    
    def do_quit(self, arg):
        """Quit command to exit the program"""
        return True

    def do_EOF(self, arg):
        """EOF command to exit the program"""
        return True

    def emptyline(self):
        """Does nothing when empty line is entered into the console"""
        pass

    def do_create(self, arg):
        """Creates a new instance of a specified Class, saves and prints the id
        USAGE: $ create <class name>
        """
        if arg == "":
            print("** class name missing **")
        if arg != "BaseModel":
            print("** class doesn't exist **")
        ins = BaseModel()
        storage.save()
        ins.id

    def do_show(self, arg):
        """Prints the string representation of an instance based on the class name and id"""
        pass

    def do_destroy(self, arg):
        """Deletes an instance based on the class name and id, and save the changes"""
        pass

    def do_all(self, arg):
        """Prints all string representation of all instances based or not on the class name"""
        pass

    def do_update(self, arg):
        """Updates an instance based on the class name and id by adding or updating attribute, and save the change"""
        pass



if __name__ == "__main__":
    HBNBCommand().cmdloop()
