using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class T_Phim_DienVien
    {
        public string MaPhim { get; set; }
        public string MaDienVien { get; set; }
        public bool vaiChinh { get; set; }
        public T_Phim_DienVien () { }
        public T_Phim_DienVien(T_Phim p, T_DienVien dv, string MaPhim, string MaDienVien, bool vaiChinh)
        {
            this.phim = p;
            this.dienvien = dv;
            this.MaPhim = MaPhim;
            this.MaDienVien = MaDienVien;
            this.vaiChinh = vaiChinh;
        }
        public T_Phim phim { get; set; }
        public T_DienVien dienvien { get; set; }

        /*public T_Phim_DienVien(T_Phim_DienVien pdv)
        {
            this.MaPhim = pdv.MaPhim;
            this.MaDienVien = pdv.MaDienVien;
            this.vaiChinh = pdv.vaiChinh;
        }*/

    }
}
