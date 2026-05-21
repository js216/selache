// SPDX-License-Identifier: MIT
// cctest_csmith_bb8feb5c.c --- cctest case csmith_bb8feb5c (csmith seed 3146771292)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xeae1bb3c */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3146771292 -o /tmp/csmith_gen_vvek5qdh/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

union U1 {
   int64_t  f0;
};


static int8_t g_2[5] = {0xB2L,0xB2L,0xB2L,0xB2L,0xB2L};
static union U1 g_20 = {0xAC54C975158018D9LL};
static int32_t g_40 = 0xB5C02AC6L;
static int64_t g_42 = 0x3B8FBA323A35E06CLL;
static int64_t g_44 = 3L;
static int64_t g_46 = (-10L);
static int16_t g_47 = 1L;
static int8_t g_48 = 1L;
static int16_t g_49[5][1] = {{0x0955L},{0x4F4DL},{0x0955L},{0x4F4DL},{0x0955L}};
static uint32_t g_50 = 0x7236C342L;
static uint8_t g_60 = 0x3AL;
static uint32_t g_61 = 7UL;
static uint64_t g_64 = 0x2FC99F15FC87C03CLL;
static struct S0 g_68 = {0x7939616DL,-1L,0x3D6C1C92L};
static int8_t g_107 = (-1L);
static uint64_t g_110[1][5][1] = {{{8UL},{8UL},{8UL},{8UL},{8UL}}};
static uint32_t g_132[3] = {0xA7B95841L,0xA7B95841L,0xA7B95841L};
static uint32_t g_133 = 0x2D9ECA6FL;
static int32_t g_147 = 8L;
static int32_t g_173 = 0L;
static uint32_t g_175 = 0UL;
static uint64_t g_186 = 0x0BFACF2A4E10F472LL;
static int16_t g_189[3] = {0x4884L,0x4884L,0x4884L};
static int64_t g_198 = 1L;
static uint8_t g_201 = 9UL;



static int32_t  func_1(void);
static int64_t  func_5(const union U1  p_6);
static union U1  func_7(int32_t  p_8, int32_t  p_9, uint8_t  p_10, struct S0  p_11, const uint32_t  p_12);
static int32_t  func_13(uint32_t  p_14, int16_t  p_15, uint16_t  p_16, union U1  p_17, uint32_t  p_18);




static int32_t  func_1(void)
{ 
    uint32_t l_19 = 4UL;
    int32_t l_122 = (-1L);
    int64_t l_145 = 1L;
    int32_t l_199 = 0L;
    if (g_2[4])
    { 
        struct S0 l_39[4][2][2] = {{{{2UL,1L,0x7EBDCF28L},{1UL,-1L,0x490CE61FL}},{{2UL,1L,0x7EBDCF28L},{1UL,-1L,0x490CE61FL}}},{{{2UL,1L,0x7EBDCF28L},{1UL,-1L,0x490CE61FL}},{{2UL,1L,0x7EBDCF28L},{1UL,-1L,0x490CE61FL}}},{{{2UL,1L,0x7EBDCF28L},{1UL,-1L,0x490CE61FL}},{{2UL,1L,0x7EBDCF28L},{1UL,-1L,0x490CE61FL}}},{{{2UL,1L,0x7EBDCF28L},{1UL,-1L,0x490CE61FL}},{{2UL,1L,0x7EBDCF28L},{1UL,-1L,0x490CE61FL}}}};
        int i, j, k;
        g_110[0][2][0] = (((safe_mod_func_uint8_t_u_u((func_5(func_7((func_13(l_19, g_2[4], g_2[4], g_20, l_19) & 0xFA36FE54L), g_2[4], g_2[2], l_39[1][0][1], l_19)) ^ 0x73A4BFF4CCE49B20LL), l_39[1][0][1].f0)) > g_20.f0) != g_40);
    }
    else
    { 
        uint32_t l_121[4][4];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_121[i][j] = 0x4F1F8345L;
        }
        l_122 = (safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_19, 7)), (g_2[4] = l_19))) | (((((((safe_mul_func_int8_t_s_s(g_110[0][2][0], (((safe_sub_func_uint16_t_u_u(l_121[1][3], 0x9ABBL)) ^ 9UL) | 8UL))) != l_19) == g_68.f1) || l_19) , 0L) > l_121[1][3]) > 0xB4L)), g_49[1][0]));
        return l_121[3][3];
    }
    for (g_50 = 0; (g_50 < 8); g_50 = safe_add_func_int8_t_s_s(g_50, 4))
    { 
        int8_t l_146 = 0x0AL;
        union U1 l_148 = {-8L};
        int32_t l_172 = (-1L);
        int32_t l_174 = 0xF9AD4D96L;
        uint8_t l_187 = 249UL;
        int64_t l_188 = (-9L);
        if (((((safe_lshift_func_int8_t_s_s(((!l_122) ^ 0x5E83B3B4D8F4AAFBLL), ((((safe_mod_func_uint8_t_u_u(0xDDL, g_44)) , g_68.f0) == 1L) <= 0xB73CF632L))) && g_44) , 4294967295UL) == g_46))
        { 
            uint32_t l_138 = 0x936C86F3L;
            g_133 = (g_132[2] &= (g_107 | (safe_div_func_int64_t_s_s((g_110[0][2][0] && 0UL), (g_50 ^ 1UL)))));
            for (g_20.f0 = 0; (g_20.f0 < (-12)); g_20.f0 = safe_sub_func_uint32_t_u_u(g_20.f0, 9))
            { 
                g_147 = (((safe_div_func_int8_t_s_s((l_138 == (safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((l_122 = l_138), g_133)) && l_145), l_145)), 0x46B62C38L))), l_146)) <= 0xFAL) ^ g_68.f2);
            }
        }
        else
        { 
            uint8_t l_153 = 0x19L;
            uint16_t l_158 = 0x6911L;
            int32_t l_200 = 7L;
            int32_t l_206 = (-1L);
            if ((((l_19 <= ((((g_20 = l_148) , (safe_rshift_func_int16_t_s_u((((g_147 & (((safe_rshift_func_uint8_t_u_s((g_110[0][2][0] || 0x27D2546FF5C8C88DLL), g_50)) , 0x7ECC317C6A24AF2DLL) | 0x0BCC4B374F05488ELL)) && l_148.f0) & g_49[2][0]), g_61))) | l_148.f0) , 0xB315FCE81A1E77F1LL)) != l_153) || 0x8590L))
            { 
                g_68 = g_68;
                return g_110[0][2][0];
            }
            else
            { 
                g_68 = g_68;
            }
            if ((((safe_mul_func_uint16_t_u_u(l_146, ((safe_mul_func_uint8_t_u_u(l_158, (++g_60))) & (safe_add_func_uint16_t_u_u(g_68.f2, (0x4BFEEEDEL >= l_153)))))) <= g_110[0][2][0]) && 0x7CL))
            { 
                int32_t l_185[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_185[i] = 0x80EF9A41L;
                g_189[1] ^= (((0x2488L != (safe_lshift_func_uint16_t_u_s((!((g_20 , (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((l_174 ^= ((safe_div_func_uint8_t_u_u(((g_68.f2 < (--g_175)) , (l_188 ^= ((g_110[0][2][0] = ((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((g_186 = ((safe_mod_func_int32_t_s_s(((~((g_40 , g_147) != l_185[4])) || 3UL), 0xE17D3F7CL)) <= l_153)), l_187)) , l_158), l_185[0])) , l_153)) || l_187))), (-2L))) && g_110[0][2][0])) >= l_185[4]) || g_2[4]), g_61)), 0x2DL))) & 0L)), g_60))) , 0xD6E3933DL) , (-1L));
                l_172 = ((safe_lshift_func_int16_t_s_u(g_2[2], (safe_rshift_func_int16_t_s_u(((l_206 = (safe_mul_func_int8_t_s_s((((g_47 , ((safe_lshift_func_uint16_t_u_s((--g_201), 14)) | (((g_46 = (g_198 = (safe_lshift_func_int8_t_s_u((g_107 &= (((0x172C683EL && (l_146 , g_60)) , l_174) || g_198)), l_199)))) == g_173) , g_20.f0))) ^ l_19) || g_2[1]), g_68.f2))) == g_2[4]), g_2[3])))) <= 1UL);
            }
            else
            { 
                uint16_t l_207 = 1UL;
                l_207--;
                l_122 = (l_174 = (0xB826330A3237C0BCLL && 0x42F786672239E7E5LL));
            }
        }
        return g_173;
    }
    return g_49[2][0];
}



static int64_t  func_5(const union U1  p_6)
{ 
    uint32_t l_100 = 0x3F5684B0L;
    int32_t l_108 = 0x590A9178L;
    int32_t l_109 = 1L;
    ++l_100;
    l_109 = ((g_49[2][0] | (safe_mul_func_uint8_t_u_u((0x1E517F063A1A89D3LL | (1L <= (safe_sub_func_int16_t_s_s(((l_108 = (g_107 = 0x2B15AC17L)) & g_68.f0), 0xBD03L)))), g_68.f1))) & g_20.f0);
    return l_100;
}



static union U1  func_7(int32_t  p_8, int32_t  p_9, uint8_t  p_10, struct S0  p_11, const uint32_t  p_12)
{ 
    int32_t l_41 = (-4L);
    int32_t l_43 = 0x37EAC691L;
    int32_t l_45[3];
    struct S0 l_54 = {0UL,-6L,0UL};
    int32_t l_83 = 0x9F729FA4L;
    uint8_t l_85 = 255UL;
    int8_t l_86 = 2L;
    union U1 l_99 = {-1L};
    int i;
    for (i = 0; i < 3; i++)
        l_45[i] = 0L;
    g_50--;
    if (p_10)
    { 
        for (l_41 = 2; (l_41 >= 0); l_41 -= 1)
        { 
            int i;
            if ((l_45[l_41] == (g_42 && (g_60 &= (safe_unary_minus_func_uint32_t_u(((l_43 = (l_54 , ((safe_sub_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((-1L))), p_11.f2)) ^ g_50) ^ p_11.f2), g_2[2])) , p_8))) && p_10)))))))
            { 
                int i;
                g_61--;
            }
            else
            { 
                if (p_11.f2)
                    break;
                ++g_64;
            }
            for (g_46 = 2; (g_46 >= 0); g_46 -= 1)
            { 
                const struct S0 l_67 = {0x1FCCBB7AL,0x919EE484L,0x0AD74ECBL};
                g_68 = l_67;
            }
        }
    }
    else
    { 
        const uint8_t l_84[4][3][5] = {{{5UL,9UL,255UL,9UL,5UL},{1UL,0UL,0UL,0UL,1UL},{0UL,255UL,0xAFL,0x95L,0xAFL}},{{1UL,0UL,1UL,1UL,1UL},{255UL,0x95L,255UL,255UL,0xC8L},{1UL,0UL,0xD8L,0UL,0UL}},{{0UL,0x95L,251UL,0x95L,0UL},{0UL,0UL,0xD8L,0UL,1UL},{0xC8L,255UL,255UL,0x95L,255UL}},{{1UL,1UL,1UL,0UL,1UL},{0xAFL,0x95L,0xAFL,255UL,0UL},{1UL,0xD8L,0xD8L,1UL,0UL}}};
        int32_t l_98[5][5][4] = {{{0xBD0D1FC1L,0xBCF51ADCL,0x174088AFL,0xBCF51ADCL},{0x7D0CCF3CL,0x06C31128L,0xB34BBF6DL,1L},{8L,1L,0x06C31128L,8L},{1L,0xBCF51ADCL,0x2F47574CL,0xBD0D1FC1L},{1L,0x62773D59L,0x06C31128L,1L}},{{8L,0xBD0D1FC1L,0xB34BBF6DL,0xB34BBF6DL},{0x7D0CCF3CL,0x7D0CCF3CL,0x174088AFL,0xBD0D1FC1L},{0xBD0D1FC1L,8L,(-1L),0xBCF51ADCL},{0x62773D59L,1L,0xB34BBF6DL,(-1L)},{0xBCF51ADCL,1L,1L,0xBCF51ADCL}},{{1L,8L,0x62773D59L,0xBD0D1FC1L},{0x06C31128L,0x7D0CCF3CL,0x06C31128L,0xB34BBF6DL},{0xBCF51ADCL,0xBD0D1FC1L,(-1L),1L},{0x7D0CCF3CL,0x62773D59L,(-1L),0xBD0D1FC1L},{0xA48E5C97L,0xBCF51ADCL,(-1L),8L}},{{0x7D0CCF3CL,1L,(-1L),1L},{0xBCF51ADCL,0x06C31128L,0x06C31128L,0xBCF51ADCL},{0x06C31128L,0xBCF51ADCL,0x62773D59L,0xA48E5C97L},{1L,0x7D0CCF3CL,1L,1L},{0xBCF51ADCL,0xA48E5C97L,0xB34BBF6DL,1L}},{{0x62773D59L,0x7D0CCF3CL,(-1L),0xA48E5C97L},{0xBD0D1FC1L,0xBCF51ADCL,0x174088AFL,0xBCF51ADCL},{0x7D0CCF3CL,0x06C31128L,0xB34BBF6DL,1L},{8L,1L,0x06C31128L,8L},{1L,0xBCF51ADCL,0x2F47574CL,0xBD0D1FC1L}}};
        int i, j, k;
        l_86 &= (p_8 ^= ((-10L) == ((g_68.f2 && ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((65530UL < ((safe_sub_func_uint8_t_u_u(((((((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((((((safe_div_func_uint8_t_u_u((l_83 ^ l_84[1][2][2]), l_85)) , 0x49152248422EE889LL) || g_48) , p_11.f1) >= 0xDF9FL), 0x7CL)), 255UL)) == 0xAD18L) | p_11.f2) || (-1L)) >= p_11.f2) < 0xD6DB513CL), 0xE5L)) , p_12)), g_40)) && g_68.f1) && 0xA31468BD1E8AE57ALL), p_10)), 247UL)) <= p_11.f0)) || g_2[4])));
        l_98[1][1][2] = (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((-3L), (g_40 | ((p_11.f2 ^= p_11.f1) != ((((+(safe_lshift_func_uint8_t_u_s((g_20.f0 , p_11.f0), l_84[3][2][2]))) & p_12) ^ l_45[2]) ^ l_84[1][2][2]))))) >= g_68.f2) == 0x12L), g_68.f1)) || p_11.f1), g_49[2][0])), g_40));
    }
    return l_99;
}



static int32_t  func_13(uint32_t  p_14, int16_t  p_15, uint16_t  p_16, union U1  p_17, uint32_t  p_18)
{ 
    int64_t l_37 = (-1L);
    int32_t l_38 = 0xD5376E30L;
    l_38 &= ((safe_sub_func_uint32_t_u_u((((((((((g_2[4] , (safe_add_func_uint64_t_u_u(g_20.f0, (safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_20.f0, ((((l_37 > 1L) | g_2[4]) > l_37) != l_37))), 4)), g_2[4])) == g_2[3]) < g_2[4]) <= p_15) | p_16) && 0xF4L), l_37)) & p_15), l_37)) || p_18), 8UL))))) || p_14) ^ l_37) || g_20.f0) >= 0x8EF5L) || l_37) , g_2[4]) >= g_20.f0) < p_14), l_37)) | l_37);
    return l_37;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_49[i][j], "g_49[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_110[i][j][k], "g_110[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_132[i], "g_132[i]", print_hash_value);

    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_189[i], "g_189[i]", print_hash_value);

    }
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
