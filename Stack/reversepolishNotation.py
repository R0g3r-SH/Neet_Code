def operation (a,b ,key):
    if (key == '+'):
        return int(a)+int(b)
    elif (key == '-'):
        return int(a)-int(b)
    elif (key == "*"):
        return int(a)*int(b)
    else :
        return int(a)/int(b)


def evalRPN(tokens):
    stack = []
    operation_set = {'+','-','*','/'}

    for i in range(len(tokens)):
        curr_value = tokens[i]
        if curr_value not in operation_set:
            stack.append(int(curr_value))
        else:
            value1 = stack.pop()
            value2 = stack.pop()
            total = operation(value2,value1 , curr_value)
            stack.append(total)

    return stack[0]


tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]

print (12/7)
print (12//7)
print (int(12/7))

print (evalRPN(tokens))
