/* gb_lib.h -- Extracted from gb_lib.c by Gemini Code Assist */
#ifndef GB_LIB_H
#define GB_LIB_H

#include <stdio.h>
#ifdef SYSV
#include <string.h>
#else
#include <string.h>
#endif

#define MAX_D 91 

typedef struct vertex_struct Vertex;
typedef struct arc_struct Arc;
typedef struct graph_struct Graph;

/* Function prototypes */

extern long gb_trouble_code;
extern long panic_code;

extern char *gb_alloc (long amount, Area h);
extern void gb_free (Area h);

extern Graph *gb_new_graph (long n);
extern void gb_new_arc (Vertex *u, Vertex *v, long len);
extern Arc *gb_virgin_arc (void);
extern void gb_new_edge (Vertex *u, Vertex *v, long len);
extern char *gb_save_string (char *s);
extern void switch_to_graph (Graph *g);
extern void gb_recycle (Graph *g);

extern void hash_in (Vertex *v);
extern Vertex *hash_out (char *s);
extern void hash_setup (long n);
extern Vertex *hash_lookup (char *s);

extern Graph *board (long n1, long n2, long n3, long n4, long piece, long wrap, long directed);
extern Graph *simplex (unsigned long n, long n0, long n1, long n2, long n3, long n4, long directed);
extern Graph *subsets (unsigned long n, long n0, long n1, long n2, long n3, long n4, unsigned long size_bits, long directed);
extern Graph *perms (long n0, long n1, long n2, long n3, long n4, unsigned long max_inv, long directed);
extern Graph *parts (unsigned long n, unsigned long max_parts, unsigned long max_size, long directed);

extern void gb_init_rand (long seed);
extern long gb_unif_rand (long m);

#endif /* GB_LIB_H */
