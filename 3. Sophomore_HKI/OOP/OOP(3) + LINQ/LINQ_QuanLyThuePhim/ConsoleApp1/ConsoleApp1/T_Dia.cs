using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class T_Dia
    {
        public string MaDia { get; set; } // primary key
        public string TenDia { get; set; }

        // constructor
        public T_Dia() { }
        public T_Dia(T_Dia d)
        {
            this.MaDia = d.MaDia;
            this.TenDia = d.TenDia;
        }

        public T_Dia(string MaDia, string TenDia)
        {
            this.MaDia = MaDia;
            this.TenDia = TenDia;
        }
    }
}
