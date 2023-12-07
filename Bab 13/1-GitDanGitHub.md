[<< Silabus](../silabus.md)

# 14.1 - Git dan GitHub

## Git

**Git** adalah sistem kontrol versi distribusi yang digunakan untuk melacak perubahan dalam kode sumber selama pengembangan perangkat lunak. Git dirancang untuk membantu tim pengembang dalam mengelola proyek perangkat lunak dengan efisien.


### Version Control

![Banyak Revisi Cuy](img/revisions.png?raw=true)

Bayangkan jika saat mengerjakan project aplikasi yann membutuhkan lebih dari 100 file source code yang harus ditrack setiap terjadi perubahan.

![Versioning](img/versioning.png?raw=true)


### Konsep Dasar Git

| Konsep       | Pengertian                                                                                                       |
| ------------ | ---------------------------------------------------------------------------------------------------------------- |
| Repository   | Tempat penyimpanan proyek perangkat lunak, yang dapat berisi file-file, direktori, dan riwayat perubahan.        |
| Commit       | Satu set perubahan pada kode sumber yang disimpan dalam repositori. Setiap commit memiliki pesan penjelasan.     |
| Branch       | Versi terpisah dari repositori yang memungkinkan pengembang bekerja pada fitur atau perbaikan bug terisolasi.    |
| Merge        | Proses menggabungkan perubahan dari satu branch ke branch lainnya, seperti dari branch fitur ke branch utama.    |
| Pull Request | Permintaan untuk menggabungkan perubahan dari satu branch ke branch lainnya, umumnya digunakan dalam kolaborasi. |
| Clone        | Menyalin repositori Git dari server ke komputer lokal.                                                           |
| Push         | Mengirimkan perubahan lokal ke repositori yang terletak di server.                                               |

## GitHub

GitHub adalah platform kolaboratif berbasis web yang menggunakan sistem kontrol versi Git untuk mengelola dan menyimpan proyek perangkat lunak. Dengan GitHub, para pengembang dapat bekerja sama dalam pengembangan perangkat lunak, berbagi kode sumber, dan mengelola proyek bersama-sama.

### Kolaborasi
![Git](img/git.png?raw=true)
![Git Graph](img/git-graph.png?raw=true)

### Fitur Utama GitHub

| Fitur         | Deskripsi                                                                                                               |
| ------------- | ----------------------------------------------------------------------------------------------------------------------- |
| Repositories  | Tempat penyimpanan proyek perangkat lunak menggunakan Git, dapat berisi file, direktori, dan riwayat perubahan.         |
| Issues        | Tempat untuk melaporkan masalah, mengusulkan fitur baru, atau berpartisipasi dalam diskusi terkait proyek.              |
| Pull Requests | Memungkinkan pengembang mengajukan perubahan kode kepada pemilik repositori untuk ditinjau dan digabungkan.             |
| Branches      | Versi terpisah dari repositori, memungkinkan pengembang bekerja pada fitur atau perbaikan bug secara terisolasi.        |
| Actions       | Fasilitas otomatisasi alur kerja, seperti pengujian atau penyebaran otomatis setiap kali ada perubahan pada repositori. |
| Wiki          | Ruang dokumentasi proyek yang dapat diakses dan dikelola oleh pengembang untuk menjelaskan fitur atau panduan.          |
| Projects      | Papan kerja yang dapat dikonfigurasi untuk mengelola dan melacak tugas, sprint, atau alur kerja proyek.                 |
| Gists         | Tempat untuk berbagi potongan kode atau teks singkat secara terpisah dari repositori utama.                             |

## Praktek
### Membuat Repositori
``` bash
git init .
```

### Menambahkan file untuk ditrack
``` bash
git add namafile.c namafile2.c
```
``` bash
git add .
```

### Menambahkan commit 
``` bash
git commit -m "pesan commit"
```

### Melakukan Push 
``` bash
git push <remote> <branch>
git push origin main
```

<details>

<summary>Jangan Lupa</summary>

![Git Graph](img/meme1.jpg?raw=true)

</details>

### Mendapatkan update dari remote repository
perintah `git pull` akan mengambil commit terbaru dari remote repository dan langsung menggabungkannya ke branch yang berada di lokal. Gunakan saat kita tidak mempunyai commit yang belum dipush ke remote repository.
``` bash
git pull <remote> <branch>
git pull origin main
```

perintah `git fetch` akan mengambil commit terbaru dari remote repository dan tidak langsung menggabungkan dengan branch di lokal. Gunakan saat kita mempunyai commit yang belum dipush ke remote repository.
``` bash
git fetch <remote> <branch>
git fetch origin main
```


### Membuat branch baru 
``` bash
git branch <nama branch baru>
git branch fix-typo-bab13
```
### Melihat daftar branch
``` bash
git branch -v
```

### Melakukan Checkout untuk berpindah branch 
``` bash
git checkout -b <nama branch tujuan>
git checkout -b fix-typo-bab13
```

### Melakukan Checkout untuk kembali ke commit yang pernah dibuat 
``` bash
git checkout <commit hash>
git checkout abd8be5bd3766f34a215eaadc0004c5ce5b90dd2
```

> [!WARNING]
> Pastikan sebelum melakukan checkout, lakukan commit untuk perubahan yang baru saja dibuat agar pekerjaan tidak hilang, gunakan perintah `git status` untuk melihat daftar file yang terubah.


### Melakukan merge untuk menggabungkan 2 branch 
``` bash
git merge <branch tujuan>

git checkout main
git merge fix-typo-bab13
```


## Reference

[Petanikode - Tutorial Belajar Git untuk Pemula](https://www.petanikode.com/tutorial/git/)

[WPU YT - GIT & GITHUB](https://www.youtube.com/watch?v=lTMZxWMjXQU&list=PLFIM0718LjIVknj6sgsSceMqlq242-jNf)

[WPU YT - Tutorial GIT & GITHUB Untuk Kerjain Tugas Kelompok KULIAH](https://www.youtube.com/watch?v=BJu1Qcul7ig&pp=ygUWdHV0b3JpYWwgZ2l0IGluZG9uZXNpYQ%3D%3D)

[PZN YT - Tutorial Git Dasar](https://www.youtube.com/watch?v=fQbTeNX1mvM&pp=ygUWdHV0b3JpYWwgZ2l0IGluZG9uZXNpYQ%3D%3D)

## Next Matery
[SFML >>](2-SFML.md)