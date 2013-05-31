
#ifndef __IT_FILE_ANSI_H__
#define __IT_FILE_ANSI_H__

it_file_result_t	it_file_create_ansi		(IT_IN char *file_name,
											IT_IN char *mode, 
											IT_IN it_mem_t *it_mem,	
											IT_OUT it_file_t **it_file);
it_file_result_t	it_file_destroy_ansi	(IT_IN it_file_t *it_file);

#endif /*__IT_FILE_ANSI_H__*/
