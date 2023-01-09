using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class HinhThucThanhToan
    {
        public string maHinhThucThanhToan { get; set; } // primary key
        public string tenHinhThucThanhToan { get; set; }

        // constructor
        public HinhThucThanhToan() { }
        public HinhThucThanhToan(HinhThucThanhToan hinhThuc)
        {
            this.maHinhThucThanhToan = hinhThuc.maHinhThucThanhToan;
            this.tenHinhThucThanhToan = hinhThuc.tenHinhThucThanhToan;
        }
        public HinhThucThanhToan(string maHinhThucThanhToan, string tenHinhThucThanhToan)
        {
            this.maHinhThucThanhToan = maHinhThucThanhToan;
            this.tenHinhThucThanhToan = tenHinhThucThanhToan;
        }
    }
}
