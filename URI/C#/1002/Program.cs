using System;

namespace _1002
{
    class Program
    {
        static void Main(string[] args)
        {
            double raio = Convert.ToDouble(Console.ReadLine());
            double n = 3.14159;
            double area = n * (raio * raio);

            Console.WriteLine("A={0}", area.ToString("F4"));
        }
    }
}
