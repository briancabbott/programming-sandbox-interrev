Go Readme - Notes, Thoughts, Questions, Project ideas, Interview-questions, etc.




Interview Style Questions for Golang: 

- (from: https://www.toptal.com/go/interview-questions)
   - Why would you prefer to use an empty struct{}? Provide some examples of the good use of the empty struct{}.
   - How do you swap two values? Provide a few examples.
   - How do you copy a slice, a map, and an interface?
   - How do you compare two structs? What about two interfaces? Provide examples.
   - How would you implement a stack and a queue in Go? Explain and provide code examples.
   - What might be wrong with the following small program? (The program numbers the lines in 
     a buffer and uses the text/scanner to read the input line-by-line. What might be wrong with it?):

       func main() {
	      scanner := bufio.NewScanner(strings.NewReader(`one
             two
             three
             four
          `))
	      var (
		     text string
		     n    int
	      )
	      for scanner.Scan() {
		     n++
		     text += fmt.Sprintf("%d. %s\n", n, scanner.Text())
	      }
	      fmt.Print(text)

	      // Output:
	      // 1. One
	      // 2. Two
	      // 3. Three
	      // 4. Four
       }

   - What would you do if you need a hash displayed in a fixed order?
   - What is the difference, if any, in the following two slice declarations, and which one is more preferable?
      var a []int
      and
      a := []int{}
   - Do you need both GOPATH and GOROOT variables, and why?

- (from: https://career.guru99.com/top-20-go-programming-interview-questions/) 
   --These are pretty novice and probably a waste of time. I will capture them however for completeness.
   - Explain what is GO?
   - What is syntax like in GO?
   - Explain what is string literals?
   - Explain packages in Go program?
   - Explain workspace in GO?
   - Explain how to use custom packages in GO language?
   - Explain what is GOPATH environment variable?
   - Explain how you can do testing in GO?
   - Explain what is string types?
   - What are the advantages of GO?
   - List out the built in support in GO?
   - Explain what is go routine in GO? How you can stop go routine?
   - Explain how you can write multiline strings in GO?
   - Explain how you to access command line arguments passed to a GO program?
   - Explain how pointer is represented in GO?
   - How you can format a string without printing?
   - Explain how arrays in GO works differently then C ?
   - Explain GO Interfaces ?
   - Explain what Type assertion is used for and how it does it?
   - In GO language how you can check variable type at runtime?

- (from: http://www.golangpro.com/2015/08/golang-interview-questions-answers.html)
   - 1. Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”.
   - 2. How many Looping constructs are present in Go programming language?
   - 3. What is the default value of type bool in Go?
   - 4. In case of Constants which type of expressions are evaluated at compile time and which are evaluated at run time?
   - 5. Which one of the following is correct?
   - 6. Short  variable declaration := can be used only inside a function. True or False?
   - 7. Short declaration := can be used for defining global variables. True or False?
   - 8. What's wrong with the following code?
   - 9. How can you rectify the above code?
   - 10. What's the output of following code?
      package main
      import "fmt"
      const ( 
          i = iota
          j 
          k 
      )
      func main() {
         fmt.Println(i, j, k)
      }
   - 11. What's the output of following code?
      package main
      import "fmt"
      const ( 
          i = 7
          j 
          k 
      )
      func main() {
         fmt.Println(i, j, k)
      }
   - 12. Refer code snippet Ref12A and Ref12B. They have the same output. True or False?


## Interesting Golang Projects:

### UpSpin 

https://github.com/upspin


