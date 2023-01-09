using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class T_Phim
    {
        public string MaPhim { get; set; } // primary key
        public string TenPhim { get; set; }

        // constructor
        public T_Phim() { }
        public T_Phim(T_Phim p)
        {
            this.MaPhim = p.MaPhim;
            this.TenPhim = p.TenPhim;
        }

        public T_Phim(string MaPhim, string TenPhim)
        {
            this.MaPhim = MaPhim;
            this.TenPhim = TenPhim;
        }
        
    }
}
