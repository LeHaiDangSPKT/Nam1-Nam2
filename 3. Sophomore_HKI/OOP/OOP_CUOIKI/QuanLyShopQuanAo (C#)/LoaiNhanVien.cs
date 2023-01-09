using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class LoaiNhanVien
    {
        public string maLoaiNhanVien { get; set; }  // primary key
        public string tenLoaiNhanVien { get; set; }

        // constructor
        public LoaiNhanVien() { }
        public LoaiNhanVien(LoaiNhanVien loaiNhanVien)
        {
            this.maLoaiNhanVien = loaiNhanVien.maLoaiNhanVien;
            this.tenLoaiNhanVien = loaiNhanVien.tenLoaiNhanVien;
        }
        public LoaiNhanVien(string maLoaiNhanVien, string tenLoaiNhanVien)
        {
            this.maLoaiNhanVien = maLoaiNhanVien;
            this.tenLoaiNhanVien = tenLoaiNhanVien;
        }
    }
}
