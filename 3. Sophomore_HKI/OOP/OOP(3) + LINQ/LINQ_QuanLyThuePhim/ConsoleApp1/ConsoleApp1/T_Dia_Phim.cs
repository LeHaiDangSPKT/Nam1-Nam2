using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class T_Dia_Phim
    {
        public string MaDia { get; set; }
        public string MaPhim { get; set; }

        public T_Dia_Phim() { }
        public T_Dia_Phim (T_Dia d, T_Phim p, string MaDia, string MaPhim)
        {
            this.dia = d;
            this.phim = p;
            this.MaDia = MaDia;
            this.MaPhim = MaPhim;
        }

        public T_Dia dia { get; set; }
        public T_Phim phim { get; set; }

    }
}
