# 1. Hướng dẫn bắt đầu sử dụng GitHub

Nếu bạn là người mới học lập trình hoặc chuẩn bị làm việc nhóm với Git, GitHub sẽ là công cụ không thể thiếu. Bài viết này sẽ hướng dẫn bạn từng bước từ đăng ký tài khoản đến đẩy mã nguồn đầu tiên lên GitHub.

## Bước 1: Tạo tài khoản GitHub

Truy cập github.com và nhấn Sign up để bắt đầu đăng ký. Bạn chỉ cần điền:
- Tên người dùng (username),
- Email cá nhân,
- Mật khẩu.

Sau khi xác nhận email, bạn đã sẵn sàng để sử dụng GitHub.

## Bước 2: Tạo một repository mới

Repository (repo) là nơi bạn lưu trữ mã nguồn dự án. Để tạo một repo mới:

- Trên giao diện chính, nhấn vào nút “Start a new project” hoặc chọn biểu tượng dấu “+” ở góc phải → New repository.
- Nhập tên repo, mô tả (nếu có).

### a) Chọn loại repo:
- Public: ai cũng có thể xem,
- Private: chỉ bạn (hoặc team bạn) mới truy cập được.
### b) Tick chọn:

- Add a README file (nếu muốn tạo file giới thiệu),
- .gitignore (giúp loại trừ các file không cần theo dõi),
- Chọn license (nếu là dự án mã nguồn mở).
### c) Nhấn Create repository.

## Bước 3: Cài đặt Git trên máy tính

Để kết nối máy tính với GitHub, bạn cần cài Git:
- Truy cập https://git-scm.com để tải và cài Git theo hệ điều hành bạn đang dùng.
- Sau khi cài xong, mở Terminal (macOS/Linux) hoặc Git Bash (Windows), cấu hình Git như sau:

```bash
git config --global user.name "Tên của bạn"
git config --global user.email "email@cuaban.com"
```
## Bước 4: Khởi tạo Git trong thư mục dự án

Chuyển tới thư mục dự án bằng dòng lệnh:
```bash
cd /duong-dan-toi-thu-muc-du-an
git init
```
Lệnh này sẽ biến thư mục của bạn thành một Git repository để quản lý mã nguồn.

## Bước 5: Thêm và commit mã nguồn
```bash
git add .                # Thêm tất cả file đã chỉnh sửa
git commit -m "Initial commit"  # Ghi lại thay đổi với mô tả
```
Commit là cách bạn “ghi lại dấu mốc” mỗi khi có thay đổi trong mã nguồn.
## Bước 6: Kết nối repo local với GitHub
Quay lại trang GitHub, copy đường dẫn HTTPS của repo vừa tạo, rồi chạy lệnh sau:

```bash
git remote add origin https://github.com/ten-cua-ban/ten-repo.git
git push -u origin master
```
Với những repo mới, có thể tên nhánh mặc định là main thay vì master, khi đó thay master bằng main.

## Bước 7: Tạo và làm việc với nhánh
GitHub hoạt động theo mô hình phân nhánh. Bạn có thể tạo nhánh mới để làm tính năng riêng:

```bash
git checkout -b ten-nhanh-moi
```
Sau đó làm việc, commit và đẩy nhánh lên GitHub:

```bash
git push origin ten-nhanh-moi
```
## Bước 8: Kéo và hợp nhất thay đổi
Khi làm việc nhóm, bạn sẽ cần lấy các thay đổi mới từ repo:
```bash
git pull origin main
```
Khi muốn gộp nhánh vào nhau:
```bash
git merge ten-nhanh
```
## Bước 9: Clone một repo có sẵn
Muốn sao chép một dự án từ GitHub về máy, bạn chỉ cần:
```bash
git clone https://github.com/ten-nguoi-khac/ten-repo.git
```
## Bước 10: Dùng GitHub Desktop (tuỳ chọn)
Nếu bạn không quen dùng dòng lệnh, GitHub Desktop là lựa chọn rất trực quan. Bạn có thể:
- Tạo repo, commit, pull/push, tạo nhánh,… tất cả qua giao diện đồ họa.
- Rất phù hợp cho người mới bắt đầu.
- 
# 2. Cách tạo branch mới trên GitHub

Branch là một nhánh làm việc độc lập để phát triển tính năng mới hoặc sửa lỗi, giúp bạn tránh làm ảnh hưởng đến mã nguồn chính. Trên GitHub, bạn có thể tạo branch mới trực tiếp qua giao diện web như sau:

**Bước 1:** Vào repository của bạn trên GitHub.
**Bước 2:** Nhấn vào nút Branch: main (hoặc master) ngay phía trên danh sách file.
**Bước 3:** Trong ô tìm kiếm, nhập tên nhánh mới bạn muốn tạo.
**Bước 4:** GitHub sẽ hiển thị tùy chọn “Create branch: [tên-nhanh] from ‘main’” → Nhấn vào để tạo.

Nhánh mới sẽ được tạo dựa trên mã nguồn hiện tại của nhánh chính (main hoặc master), và bạn có thể bắt đầu làm việc ngay.

# 3. Cách tải project trên GitHub về máy tính

Bạn có 2 cách đơn giản để tải mã nguồn từ GitHub:

## Cách 1: Tải file dưới dạng ZIP
- Truy cập vào repository cần tải.
- Nhấn nút “Code” màu xanh → chọn Download ZIP.
- File ZIP sẽ được tải về máy → Giải nén để sử dụng.

# Cách 2: Clone về máy bằng Git

- Vào repository → Nhấn “Code” → Copy link HTTPS (hoặc SSH nếu đã cấu hình).
- Mở Terminal (hoặc Git Bash nếu dùng Windows), chạy lệnh:
```bash
git clone https://github.com/ten-nguoi-dung/ten-repo.git
```
