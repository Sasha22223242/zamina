using System;

class Програма
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("Введіть рядок з пробілами:");
        string рядок = Console.ReadLine();

        string результат = рядок.Replace(" ", "\t");

        Console.WriteLine("Рядок після заміни пробілів на табуляції:");
        Console.WriteLine(результат);
    }
}
