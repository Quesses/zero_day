#!/usr/bin/python3
from models import storage
from models.base_model import BaseModel

print(BaseModel)
print()
ui = BaseModel()
print(type(ui).__name__)
print(ui.__class__)
print(ui.created_at)
print(ui.id)
print(ui.updated_at)
print(ui)
print()
ui.name = "Papa"
ui.num = "99"
ui_json = ui.to_dict()
print(ui_json)
print("JSON of ui")
for key in ui_json.keys():
    print(f"\t{key}: ({type(ui_json[key])}), {ui_json[key]}")
print(ui)
print('\n')
new_mod = BaseModel(**ui_json)
print(new_mod)
print(new_mod.id)
print(type(new_mod.created_at))
print(new_mod is ui)

all_objs = storage.all()
print("-- Reloaded objects --")
for obj_id in all_objs.keys():
    obj = all_objs[obj_id]
    print(obj)

print("-- Create a new object --")
my_model = BaseModel()
my_model.name = "My_First_Model"
my_model.my_number = 89
my_model.save()
print(my_model)
