struct superblock
{
  unsigned int s_inodes_count;//nb total d'inode
  unsigned int s_block_count;//nb total de blocks
  unsigned  int s_r_blocks_count;//nb block reserves
  unsigned  int s_free_blocks_count;//nbblock libre
  unsigned  int s_free_inodes_count;//nb inodes libres
  unsigned  int s_first_data_block;//premier block de donnee 
                                   //(celui du superblock)
  unsigned  int s_log_block_size;//decalage de la taille
  unsigned s_log_frag_size;  //pas utile pour nous
  unsigned  int s_blocks_per_group;//nb block par group
  unsigned  int s_frags_per_group;//fragments par groups
  unsigned  int s_inodes_per_group;//nb inodes par groupes
  unsigned  int s_mtime;//dernier montage
  unsigned  int s_wtime;//laste write
  unsigned  short s_mnt_count;//nb montages
  unsigned  short s_max_mnt_count;//max montages
  unsigned  short s_magic;//0xEF53 (ca identifie en tant qu'ext2)
  unsigned  short s_state;//etat
  unsigned  short s_errors;//erreures
  unsigned  short s_minor_rev_level;//revisions mineurs
  unsigned  int s_lastcheck;//derniere verif
  unsigned  int s_checkinterval;//intervalle de temps entre 2 verifs
  unsigned  int s_creator_os;//os createur
  unsigned  int s_rev_level;//revision
  unsigned  int s_def_resuid;//0
  unsigned  int s_def_resgid;//0
  
};
