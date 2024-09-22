using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Enter the name: ");
        string userName = Console.ReadLine();  // Fixed ReadLine capitalization
        Console.WriteLine("User name is: " + userName);
        
        Console.WriteLine("Enter the age: ");
        int age = Convert.ToInt32(Console.ReadLine());  // Reading and converting age input
        Console.WriteLine("Your age is: " + age);
    }
}
