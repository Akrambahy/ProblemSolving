
int num=int.Parse(Console.ReadLine);

for (int i = 1; i <= num; i++)
{
for (int k = i; k <=num-1; k++)
    {
        Console.Write(" ");  // Print MultiTable for 1 to 10
    }
        for (int j = 1; j <= i*2-1; j++)
    {
        Console.Write($"*");  // Print MultiTable for 1 to 10
    }
    Console.WriteLine();
}
