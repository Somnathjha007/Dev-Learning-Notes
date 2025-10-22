def hello(name='Jose'):
    print('The Hello() Function has been executed')
    def greet():
        return '\t This is the greet() func inside hello'
    def welcome():
        return '\t This is inside Welcome() inside hello'
    print("i am going to return a function")
    if name == 'Jose':
        return greet
    return welcome
my_new_fucn = hello('Jose')
print(my_new_fucn())

def cool():
    def supercool():
        return "I am superCool"
    return supercool

some_func = cool()
print(some_func())

