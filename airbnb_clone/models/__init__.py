#!/usr/bin/python3
""" this module executes each time the model package is imported, creating a unique FileStorage instance """

from models.engine.file_storage import FileStorage

storage = FileStorage()
storage.reload()
