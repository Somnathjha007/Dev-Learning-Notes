'''
Use of error handling 
'''
def ask():
    while True:
        try:
            abc=int(input("Enter an integer"))
        except TypeError:
            print("That is not an Intgeger")
            continue
        else:
            print(abc**2)
            break
        finally:
            print("Done")
'''
Function calling for the above Code
'''
ask()
