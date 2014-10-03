struct inode 
{
  uint16_t      i_mode;//mode = type + droits
  uint16_t      i_uid;
  uint32_t      i_size;//taile en bytes
  uint32_t      i_atime;//access
  uint32_t      i_ctime;//create
  uint32_t      i_mtime;//modif
  uint32_t      i_dtime;//deleted
  short i_gid;//gid
  short i_links_count;//nb de liens
  uint32_t      i_blocks;//nb blocks de 512 octets
  uint32_t      i_flags;//
  uint32_t      i_osd1;//os dep
  uint32_t      i_block[15];//block **** indirections � partir de 13
  uint32_t      i_generation;
  uint32_t      i_file_acl;
  uint32_t      i_dir_acl;
  uint32_t      i_faddr;
  char  i_osd2[12];
}; //taille 128 bytes
