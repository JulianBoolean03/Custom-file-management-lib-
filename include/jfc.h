#ifndef JFC_H
#define JFC_H
#include <string>

int full_delete_png(const std::string &path_str);
int full_delete_jpeg(const std::string &path_str);
int full_delete_pdf(const std::string &path_str);
int full_delete_docx(const std::string &path_str);
int full_delete_pages(const std::string &path_str);
int full_delete_mp3(const std::string &path_str);
int full_delete_mp4(const std::string &path_str);
int full_delete_mov(const std::string &path_str);
int full_delete_xlsx(const std::string &path_str);

int count_pngs(const std::string &path_str);
int count_jpeg(const std::string &path_str);
int count_pdf(const std::string &path_str);
int count_docx(const std::string &path_str);
int count_pages(const std::string &path_str);
int count_mp3(const std::string &path_str);
int count_mp4(const std::string &path_str);
int count_mov(const std::string &path_str);
int count_xlsx(const std::string &path_str);

void list_by_pngs(const std::string &path_str);
void list_by_jpeg(const std::string &path_str);
void list_by_pdf(const std::string &path_str);
void list_by_docx(const std::string &path_str);
void list_by_pages(const std::string &path_str);
void list_by_mp3(const std::string &path_str);
void list_by_mp4(const std::string &path_str);
void list_by_mov(const std::string &path_str);
void list_by_xlsx(const std::string &path_str);

#endif
