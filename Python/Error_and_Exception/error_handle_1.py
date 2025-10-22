# Try : This block of code may be attempted (May lead to an error)
# Accept : This Block of code will be executed if there is an error in the try block
# Finally : A final block of code to be executed regardless of any error.

def add(n1,n2):
    print(n1+n2)
    
# add(10,20)

num1 = 10
num2 = input("Input a number")

#add(num1,num2) # this generates a type error , as python takes input as string
#TypeError: unsupported operand type(s) for +: 'int' and 'str'
#nothing else beyong this executes 

try:
    #want to attempt this code , may have an error 
    add(num1,num2)  # This triggers the except block , as this will throwe an error
    add(num1,20) # this triggers the else block as this does not have any error
    #Only one run will execiute , if the first jhave any error 
    result = 10+10
except:
    print("Hey addition not adding")
else:
    print("addition is additioning")

