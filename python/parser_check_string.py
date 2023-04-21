STRING_CHECK = 10

get_string_user: str = input("")

if get_string_user.__len__() >= STRING_CHECK:
    print("palavrao")
else:
    print("palavrinha")
