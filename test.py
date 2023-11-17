import os

os.system('./user_input.o < test.txt')

with open('user_input.txt', 'r') as f:
    student_file_output = f.read()

with open('test.txt', 'r') as f:
    test_file_output = f.read()

assert student_file_output == test_file_output, "Wrong output"