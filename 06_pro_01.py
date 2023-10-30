mydict={
    "pankha": "fan",
    "dabba": "box",
    "vastu": "item"
}

print("options are", mydict.keys())

a=input("enter the hindi word\n")
print("the meaning of the word is:",mydict.get(a))