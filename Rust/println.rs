// Printing is handled by a series of macros defined in std::fmt
/*
format! : write formated text to string
print! : similar but text is printed to the console (io::stdout)
println! : with newline
eprint! : printed in standard error (io::stderr)
eprintln : with newline
*/
fn main(){
   // println!("{} days",31); // {}is replaced with any arguments

   // println!("{0}, this is {1} and  {1}, This is {0}","allice","bob");
    //Possitional arguments also works 

   /* println!(" {subject} {verb} {object}",
        object = "the lazy dog",
        subject = "the quick brown fox",
        verb = "jumps over"); */
        // Named arguments can also be used 

    println!("Base 10         :    {}",  69420);
    println!("Base 2 (Binary) :    {:b}",  69420);
    println!("Base 8 (Octal)  :    {:o}",  69420);
    println!("Base 16 (Hexa)  :    {:x}",  69420);
    
}