def calculate(operation):
    operation = list(operation.split())
    a = int(operation[0])
    b = int(operation[2])
    operator = operation[1]
    answer = "wrong input";
    if(operator == '+'):
        answer = a + b
    elif (operator == '-'):
        answer = a - b
    elif (operator == '*'):
        answer = a * b
    elif (operator == '/'):
        answer = a / b
    return answer

