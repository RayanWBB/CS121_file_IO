# CS121_file_IO
Input Output Stream

The program should read a csv file and print messages based on its content.
For each line in the csv file, it will read two integers and a word (a string).
It will then add the values of the integers, and print the word a number of times equal to the sum.

```
import iostream
import string stream
import file stream

begin main
    define string stream lineString
    define string stream converter
    define string currentLine
    define int valueA
    define int valueB
    define int valueSum
    define string dupeWord
    define ofstream outFile
    
    clear lineString
    clear converter

    open outFile
    if outFile is open
        for each line in the file, called currentLine
            feed currentLine into lineString
            if lineString isn't empty
                get lineString until the next "," and assign to converter
                feed converter to valueA
                clear converter

                get lineString until the next "," and assign to valueB
                feed converter to valueB
                clear converter

                get lineString until the line break and assign to dupeWord
                assign the sum of valueA and valueB to valueSum
                for valueSum
                    print dupeWord and a space
                print a line break
end main
