using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class PhieuBaoHanh
    {
        public string maPhieuBaoHanh { get; set; }     // primary key
        public int thoiGianBaoHanh { get; set; }    // đơn vị theo tháng

        // constructor
        public PhieuBaoHanh() { }
        public PhieuBaoHanh(PhieuBaoHanh phieuBaoHanh)
        {
            this.maPhieuBaoHanh = phieuBaoHanh.maPhieuBaoHanh;
            this.thoiGianBaoHanh = phieuBaoHanh.thoiGianBaoHanh;
        }
        public PhieuBaoHanh(string maPhieuBaoHanh, int thoiGianBaoHanh)
        {
            this.maPhieuBaoHanh = maPhieuBaoHanh;
            this.thoiGianBaoHanh = thoiGianBaoHanh;
        }
    }
}
