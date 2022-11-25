#!/usr/bin/python3
"""Definies a class FileStorage"""

import os.path
import json
from models.base_model import BaseModel

class FileStorage:
    """Class FileStorage for serialization and deserialization if JSON file
        Attr:
            __file_path: string - path to the JSON file
            __objects: dictionary - empty but will store all objects by <class name>.id
        methods:
            all(self): returns the dictionary __objects
            new(self, obj): sets in __objects the obj with key <obj class name>.id
            save(self): serializes __objects to the JSON file (path: __file_path)
            reload(self): deserializes the JSON file to __objects (only if the JSON file (__file_path) exists, otherwise does nothing
    """

    __file_path = "file.json"
    __objects = {}

    def all(self):
        """ returns the dictionary __objects """
        return FileStorage.__objects

    def new(self, obj):
        """sets in __objects the obj with key <obj class name>.id
        Args:
            obj:object to set into __object
        """
        if obj:
            key = type(obj).__name__ + '.' + obj.id
            FileStorage.__objects[key] = obj

    def save(self):
        """ serializes __objects to the JSON file (path: __file_path) """

        dic = {}
        for key, obj in FileStorage.__objects.items():
            dic[key] = obj.to_dict()
        with open(FileStorage__file_path, 'w', encode='utf-8') as json_file:
            json.dump(dic, json_file)

    def reload(self):
        """ deserializes the JSON file to __objects if it exists"""
        if os.path.isfile(FileStorage__file_path):
            with open(FileStorage__file_path, 'r', encode='utf-8') as json_file:
                for key, dic in json.loads(json_file.read()).items():
                    dic = eval(obj['__class__'])(**obj)
                    FileStorage__object[key] = dic

