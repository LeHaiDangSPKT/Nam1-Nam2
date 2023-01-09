using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class T_DienVien
    {
        public string MaDienVien { get; set; } // primary key
        public string TenDienVien { get; set; }
        public string QuocTich { get; set; }
        

        public T_DienVien() { }
        public T_DienVien(T_DienVien dv)
        {
            this.MaDienVien = dv.MaDienVien;
            this.TenDienVien = dv.TenDienVien;
            this.QuocTich = dv.QuocTich;
        }

        public T_DienVien(string MaDienVien, string TenDienVien, string QuocTich)
        {
            this.MaDienVien = MaDienVien;
            this.TenDienVien = TenDienVien;
            this.QuocTich = QuocTich;
        }

    }
}
