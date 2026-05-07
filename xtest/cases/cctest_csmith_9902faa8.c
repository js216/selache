// SPDX-License-Identifier: MIT
// cctest_csmith_9902faa8.c --- cctest case csmith_9902faa8 (csmith seed 2567109288)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x759e5ad6 */

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

// Options:   -s 2567109288 -o /tmp/csmith_gen_y4w1jm4u/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   int32_t  f1;
   int16_t  f2;
   int16_t  f3;
   const uint64_t  f4;
};

union U1 {
   uint32_t  f0;
   unsigned f1 : 11;
   const struct S0  f2;
};


static uint32_t g_30 = 1UL;
static uint32_t g_47 = 0xA600AC80L;
static uint8_t g_50[3] = {0x43L,0x43L,0x43L};
static int32_t g_82 = 0x4CFDD0FDL;
static int8_t g_101 = 0x56L;
static uint32_t g_102[2][3] = {{0x7DF6318FL,0x7DF6318FL,0x7DF6318FL},{0x7DF6318FL,0x7DF6318FL,0x7DF6318FL}};
static int8_t g_106 = 0x32L;
static struct S0 g_111 = {0x2667L,1L,0x5366L,-4L,1UL};
static uint32_t g_128 = 18446744073709551615UL;
static uint32_t g_160 = 0xC9D1C1E5L;
static const union U1 g_162 = {0xE426DA79L};
static uint32_t g_200 = 18446744073709551615UL;
static uint16_t g_211 = 0xAC00L;
static int8_t g_246 = 8L;
static uint32_t g_247 = 1UL;
static int8_t g_264 = 0xA5L;
static uint64_t g_266 = 0xFD0CC2756E31945DLL;
static int8_t g_269[2][4][1] = {{{0x38L},{0xA4L},{0x38L},{0xA4L}},{{0x38L},{0xA4L},{0x38L},{0xA4L}}};
static int32_t g_286 = 0x48576C49L;
static uint8_t g_302 = 1UL;
static uint16_t g_304 = 0UL;
static int16_t g_314[4] = {(-1L),(-1L),(-1L),(-1L)};
static int64_t g_323 = (-6L);



static int8_t  func_1(void);
static uint32_t  func_3(struct S0  p_4);
static struct S0  func_5(int32_t  p_6, union U1  p_7, uint32_t  p_8);
static uint8_t  func_19(int32_t  p_20, int64_t  p_21);




static int8_t  func_1(void)
{ 
    uint32_t l_2 = 0xFDE2BBEFL;
    union U1 l_107[4] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
    int32_t l_284 = (-1L);
    uint8_t l_311 = 0x96L;
    int32_t l_315[5][4] = {{0x825EF726L,0x929B31E7L,0x57A09A84L,0x57A09A84L},{(-1L),(-1L),0x825EF726L,0x57A09A84L},{0x29779F3CL,0x929B31E7L,0x29779F3CL,0x825EF726L},{0x29779F3CL,0x825EF726L,0x825EF726L,0x29779F3CL},{(-1L),0x825EF726L,0x57A09A84L,0x825EF726L}};
    int i, j;
    if (((l_2 & (func_3(func_5((65535UL >= (safe_add_func_uint8_t_u_u(((!(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((g_106 ^= (((+(0L > ((safe_lshift_func_int8_t_s_u((func_19((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((((2UL | l_2) < g_30) || g_30) , l_2), g_30)), 14)) == g_30) ^ g_30) == g_30), g_30)), g_30)), g_30) , g_102[1][1]), g_47)) >= l_2))) ^ 0x67L) | (-8L))), 0L)), 2UL))) != l_2), g_47))), l_107[3], l_107[3].f0)) >= l_107[3].f0)) , (-1L)))
    { 
        const int32_t l_261 = 1L;
        int32_t l_265[2][4][2] = {{{0xBE114A65L,0xC9F556B5L},{2L,1L},{2L,0xC9F556B5L},{0xC8DC0C5FL,0xC8DC0C5FL}},{{0xC9F556B5L,2L},{1L,2L},{0xC9F556B5L,0xC8DC0C5FL},{0xC8DC0C5FL,0xC9F556B5L}}};
        uint32_t l_270 = 0UL;
        int32_t l_271 = 0xD9579318L;
        union U1 l_301 = {0UL};
        int i, j, k;
        l_271 ^= (l_261 , (safe_rshift_func_uint16_t_u_s(0x0794L, (g_162 , (((g_269[0][1][0] = (g_266++)) != l_270) >= (-1L))))));
        if (g_30)
        { 
            uint32_t l_282 = 9UL;
            union U1 l_303[2][4][4] = {{{{0xB0A57D7BL},{4294967288UL},{0xB0A57D7BL},{8UL}},{{0xB0A57D7BL},{8UL},{0xB0A57D7BL},{4294967288UL}},{{0xB0A57D7BL},{4294967288UL},{0xB0A57D7BL},{8UL}},{{0xB0A57D7BL},{8UL},{0xB0A57D7BL},{4294967288UL}}},{{{0xB0A57D7BL},{4294967288UL},{0xB0A57D7BL},{8UL}},{{0xB0A57D7BL},{8UL},{0xB0A57D7BL},{4294967288UL}},{{0xB0A57D7BL},{4294967288UL},{0xB0A57D7BL},{8UL}},{{0xB0A57D7BL},{8UL},{0xB0A57D7BL},{4294967288UL}}}};
            uint16_t l_316 = 1UL;
            int32_t l_324[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_324[i] = 0L;
            for (g_211 = (-20); (g_211 <= 2); g_211++)
            { 
                uint32_t l_285 = 18446744073709551615UL;
                g_111.f1 = (g_286 = (l_285 = ((safe_sub_func_int16_t_s_s((g_111.f2 = g_111.f1), ((safe_sub_func_int8_t_s_s((((safe_add_func_uint64_t_u_u(18446744073709551615UL, (safe_rshift_func_int16_t_s_s(l_282, 0)))) | ((safe_unary_minus_func_int16_t_s((l_284 &= g_162.f1))) < l_282)) >= g_247), l_265[0][1][1])) , g_50[1]))) && g_106)));
                l_284 = g_111.f2;
            }
            l_271 ^= (g_304 = ((safe_lshift_func_int16_t_s_u(l_284, (g_211 = 0UL))) ^ (0xEDE8L <= (safe_lshift_func_int8_t_s_u(((((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((g_302 = (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((func_5((safe_lshift_func_int8_t_s_s((g_30 || g_246), l_265[0][1][1])), l_301, l_265[0][0][1]) , g_269[1][3][0]), l_107[3].f0)), g_102[0][0]))), g_111.f4)), 0xC858L)) >= l_2) , l_303[0][1][2]) , l_261), 4)))));
            if ((((l_107[3] , (((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0L, (safe_add_func_uint8_t_u_u(l_282, l_2)))), l_284)) , g_128) && 0UL)) , 0x0917L) >= (-1L)))
            { 
                l_271 = 0x3BD95B1CL;
                --l_311;
                l_316--;
            }
            else
            { 
                uint32_t l_329 = 0UL;
                l_324[1] = (0xC7681339926BE4E2LL && ((safe_lshift_func_int16_t_s_s(g_111.f1, g_50[0])) , (safe_div_func_int64_t_s_s(((g_247 >= g_286) || l_315[0][1]), g_323))));
                g_111.f1 = (safe_mul_func_uint16_t_u_u((((g_314[2] = ((0L && ((safe_mul_func_int16_t_s_s(0x2F2FL, (l_329 & (-1L)))) || 0x47CDA25B2F48B5C4LL)) | 0x527264FA596293FCLL)) , 0xBC63L) > g_111.f1), (-1L)));
                l_265[0][0][1] = g_162.f1;
            }
        }
        else
        { 
            uint16_t l_331 = 0x31BBL;
            if (((0x781AL ^ (~(g_200 ^ (g_162 , ((g_247 = ((0UL >= l_331) == l_331)) && 0xB51DA381L))))) == g_128))
            { 
lbl_332:
                l_315[3][2] &= g_286;
                return l_107[3].f1;
            }
            else
            { 
                if (g_111.f1)
                    goto lbl_332;
            }
            g_111.f1 = (l_271 = 1L);
            g_111.f1 = (l_315[3][3] > 0x40L);
        }
    }
    else
    { 
        return g_102[1][0];
    }
    return g_286;
}



static uint32_t  func_3(struct S0  p_4)
{ 
    union U1 l_158 = {0x2754ED04L};
    int32_t l_161 = 0x1870374AL;
    uint8_t l_165 = 0x30L;
    uint16_t l_194 = 65535UL;
    int32_t l_203 = 0x02B33B09L;
    if (p_4.f4)
    { 
        int8_t l_159 = (-5L);
        int32_t l_175 = 0x2D056028L;
        int32_t l_193 = (-9L);
        int32_t l_195 = 0xCEAB9BFDL;
        for (p_4.f3 = 1; (p_4.f3 >= 0); p_4.f3 -= 1)
        { 
            uint8_t l_174 = 1UL;
            for (p_4.f1 = 0; (p_4.f1 <= 2); p_4.f1 += 1)
            { 
                int i, j;
                l_161 |= ((((g_160 = ((func_5(g_102[p_4.f3][p_4.f1], l_158, g_50[p_4.f1]) , p_4.f4) & l_159)) == p_4.f4) & 1L) <= 0x63L);
                if (p_4.f0)
                    continue;
            }
            for (g_111.f2 = 0; (g_111.f2 <= 1); g_111.f2 += 1)
            { 
                int i, j;
                if (g_102[p_4.f3][g_111.f2])
                    break;
                p_4.f1 = (g_162 , g_102[p_4.f3][g_111.f2]);
            }
            for (g_160 = 0; (g_160 <= 1); g_160 += 1)
            { 
                int i, j;
                l_175 = (g_102[p_4.f3][(g_160 + 1)] && (safe_mod_func_uint32_t_u_u(((++l_165) , (p_4.f0 | ((l_161 &= (0xA667L > (safe_add_func_int16_t_s_s((((((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_174, l_174)), g_111.f0)) && 1UL) < l_174) , 0x84C14C3A41A2CE7FLL) == p_4.f3), 0x5250L)))) , g_128))), l_158.f0)));
                if (g_102[p_4.f3][(g_160 + 1)])
                    continue;
                g_111.f1 ^= ((l_175 = (!g_160)) > 0x00A8503D30EE1A22LL);
            }
        }
        l_195 = ((safe_sub_func_int16_t_s_s((((l_194 = (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((l_193 = (safe_mul_func_int16_t_s_s((0x36L == (l_159 == (((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((g_111.f4 && ((((l_175 = (0x1FL && l_159)) & 3L) & l_159) == 0xBB1259A4L)) , g_101) < p_4.f1), l_159)), p_4.f1)), 0x82L)), l_161)) <= l_161) & 0xE38545A4L))), g_106))) , p_4.f3) & g_47) && 0x35A5BBF8L), g_111.f1)), l_159))) != l_158.f0) < 0x3E333570L), g_50[0])) , 0x7C7D0B8DL);
        g_111.f1 = ((g_50[0] = (0UL && (l_158 , ((((safe_mul_func_uint8_t_u_u(9UL, ((-7L) <= p_4.f3))) >= 0x84L) , (-1L)) == g_128)))) | p_4.f4);
    }
    else
    { 
        int32_t l_208 = (-1L);
        uint64_t l_230 = 0x2BA4091520A11C63LL;
        uint32_t l_232 = 0x277FA5E2L;
        int8_t l_258[4][4][1] = {{{1L},{0L},{1L},{0L}},{{1L},{0L},{1L},{0L}},{{1L},{0L},{1L},{0L}},{{1L},{0L},{1L},{0L}}};
        uint32_t l_259 = 0xFA01DA8FL;
        int i, j, k;
        for (g_30 = (-25); (g_30 == 18); g_30 = safe_add_func_uint8_t_u_u(g_30, 1))
        { 
            for (l_165 = 0; (l_165 <= 1); l_165 += 1)
            { 
                int i, j;
                if (g_102[l_165][(l_165 + 1)])
                    break;
            }
            ++g_200;
            if (l_203)
                break;
        }
        if (((safe_div_func_int8_t_s_s((l_203 &= p_4.f2), ((((g_211 |= (safe_div_func_uint8_t_u_u((l_208 == (safe_add_func_int32_t_s_s(0x0DBE1DBCL, (((p_4.f1 < 0x706A571D432E6AD6LL) ^ 0L) , 0x01A7DC5FL)))), p_4.f3))) , p_4.f2) && l_208) | l_208))) , 0x63313960L))
        { 
            uint64_t l_217 = 0x9F8BE0D85DCC5815LL;
            int64_t l_231 = 0x6A30DA47F40BF26BLL;
            if ((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s(0xC52EL, p_4.f4)), (-1L))))
            { 
                int32_t l_216 = (-5L);
                p_4.f1 = g_102[1][0];
                l_217++;
                g_111.f1 &= (((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_208, ((safe_mul_func_uint8_t_u_u((0L > ((safe_unary_minus_func_int8_t_s(((safe_unary_minus_func_uint32_t_u(l_230)) & ((l_217 > l_231) <= 1UL)))) ^ 0xE4CCL)), 251UL)) , g_106))), p_4.f3)) < p_4.f3), 0x055EL)) <= l_232) == (-1L));
            }
            else
            { 
                uint32_t l_243 = 1UL;
                g_111.f1 &= g_111.f3;
                p_4.f1 = (func_5((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(0xB9BF21D4L, 0x5150234EL)) < (0xC149A9D8984B9C5FLL == (safe_mod_func_int64_t_s_s(l_231, 0x0A5FCD0D6B2CBE35LL)))) > l_231) && g_102[0][0]), 6)), 4)), g_162, g_128) , g_211);
                --l_243;
            }
        }
        else
        { 
            p_4.f1 = 0x2973F10CL;
            g_247++;
        }
        l_259 = ((((safe_rshift_func_uint8_t_u_u(g_111.f3, 7)) != (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(g_162.f0, (((((p_4.f2 || 0x787EL) ^ l_258[0][1][0]) | g_47) >= 0xA225L) || p_4.f1))), p_4.f4)), 0x18EEL))) && 0L) , p_4.f0);
    }
    g_111.f1 ^= (g_111.f2 ^ (p_4.f2 = (safe_unary_minus_func_int64_t_s((g_111.f4 != p_4.f4)))));
    return g_160;
}



static struct S0  func_5(int32_t  p_6, union U1  p_7, uint32_t  p_8)
{ 
    union U1 l_108 = {4294967289UL};
    int32_t l_112 = 0xBA93E3F5L;
lbl_129:
    l_112 &= (l_108 , ((safe_div_func_int32_t_s_s((((g_111 , (((g_111 , p_6) <= l_108.f0) && p_7.f0)) > l_108.f1) , g_50[1]), p_7.f0)) ^ g_47));
    for (l_112 = 0; (l_112 <= (-7)); l_112 = safe_sub_func_int32_t_s_s(l_112, 6))
    { 
        uint8_t l_117 = 8UL;
        for (g_106 = 0; (g_106 <= 18); g_106 = safe_add_func_int64_t_s_s(g_106, 7))
        { 
            struct S0 l_126 = {6L,0x77FA4877L,1L,0xF9C5L,0xFF43755EC10F06FBLL};
            if (l_117)
                break;
            for (g_82 = 0; (g_82 <= 24); g_82++)
            { 
                if (g_82)
                    break;
                g_111.f1 = (((g_128 = (g_101 <= ((((safe_mul_func_int8_t_s_s((~(!0x1F15L)), (safe_mul_func_int16_t_s_s(((l_126 , (((+p_7.f1) ^ p_6) , l_117)) || g_101), 9L)))) != g_102[1][0]) , 7UL) ^ p_7.f0))) | p_7.f0) , g_111.f3);
            }
        }
        if (l_108.f1)
            goto lbl_129;
        for (g_111.f3 = 2; (g_111.f3 >= 0); g_111.f3 -= 1)
        { 
            int32_t l_130 = (-9L);
            int i;
            l_130 ^= g_50[g_111.f3];
        }
    }
    for (g_47 = 28; (g_47 <= 29); g_47++)
    { 
        uint32_t l_133 = 0x3977822EL;
        union U1 l_156 = {0UL};
        int32_t l_157 = 0xEDA80D18L;
        l_133++;
        for (g_111.f0 = 16; (g_111.f0 <= 5); g_111.f0 = safe_sub_func_int8_t_s_s(g_111.f0, 8))
        { 
            for (p_6 = (-15); (p_6 == 11); ++p_6)
            { 
                if (p_6)
                    break;
                return g_111;
            }
            for (l_112 = (-26); (l_112 != (-20)); l_112++)
            { 
                int32_t l_142 = 0xA0C82433L;
                l_142 |= g_111.f4;
            }
            l_112 = (safe_mul_func_int16_t_s_s((+(p_8 & (safe_mul_func_int16_t_s_s(g_111.f2, ((0x90269B8F49FF72C9LL != (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_30, l_133)), p_7.f1))) | g_111.f4))))), 65534UL));
        }
        l_157 = ((safe_mod_func_uint16_t_u_u(l_108.f1, p_7.f0)) ^ (0xFCB1L < (safe_lshift_func_uint16_t_u_u((l_156 , 0xFB85L), p_8))));
    }
    return g_111;
}



static uint8_t  func_19(int32_t  p_20, int64_t  p_21)
{ 
    uint32_t l_31 = 4294967291UL;
    int32_t l_32[3][2][5] = {{{0x104ACD6BL,0x7DF39F3CL,0x104ACD6BL,0x7DF39F3CL,0x104ACD6BL},{0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L}},{{0x104ACD6BL,0x7DF39F3CL,0x104ACD6BL,0x7DF39F3CL,0x104ACD6BL},{0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L}},{{0x104ACD6BL,0x7DF39F3CL,0x104ACD6BL,0x7DF39F3CL,0x104ACD6BL},{0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L,0x7C8A36A7L}}};
    int32_t l_33 = 0xC5533F2AL;
    int32_t l_79 = 0L;
    int i, j, k;
    l_33 |= (l_32[2][0][4] &= l_31);
    for (l_33 = 0; (l_33 <= 19); l_33 = safe_add_func_int8_t_s_s(l_33, 9))
    { 
        int32_t l_40 = 0x45CB296AL;
        int32_t l_48 = 0x18101BC6L;
        int32_t l_49[4][3][3];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                    l_49[i][j][k] = 1L;
            }
        }
        if (l_31)
        { 
            uint32_t l_43 = 0xF5D3CC11L;
            struct S0 l_46 = {0x47D0L,0x19924203L,1L,1L,0x2B132DC1B2D863E3LL};
            for (l_31 = (-5); (l_31 > 44); ++l_31)
            { 
                l_49[3][0][2] = ((l_48 = (((safe_mul_func_uint8_t_u_u(l_40, (0xB9D3L <= ((g_30 = ((safe_sub_func_uint64_t_u_u((l_43++), (l_46 , g_30))) < p_21)) ^ g_47)))) ^ 0x554CL) != l_40)) < g_47);
                if (l_46.f0)
                    continue;
                if (p_21)
                    continue;
            }
            g_50[0] |= l_40;
            l_32[2][0][2] = ((((g_50[0]--) , (((safe_rshift_func_uint8_t_u_u(g_50[0], 1)) || (safe_rshift_func_uint8_t_u_u((g_47 | (!((safe_sub_func_uint8_t_u_u(l_31, (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((((g_47 | 1L) , p_21) < l_43) || g_47), g_30)) & l_46.f4), 0x13L)))) , p_21))), p_21))) ^ g_50[0])) <= g_47) | l_33);
        }
        else
        { 
            const int32_t l_78 = 0x27642088L;
            l_79 ^= (((safe_add_func_int32_t_s_s((g_50[0] && ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_30, ((safe_add_func_uint16_t_u_u(((((safe_div_func_uint64_t_u_u(((((safe_sub_func_int8_t_s_s(((0xD2A19D8DL == ((0x9F8D9E2CL <= (-5L)) <= p_21)) >= p_21), (-6L))) && 5UL) == l_78) != (-1L)), l_32[0][0][1])) , l_48) > l_78) > (-2L)), g_30)) > p_20))), g_30)) >= g_50[0])), l_78)) != l_32[2][0][1]) != p_21);
            if (g_30)
                continue;
        }
        g_82 |= (((p_20 && (p_21 && (safe_div_func_int8_t_s_s((l_32[2][0][4] = g_50[0]), (g_50[1] & (-4L)))))) , l_32[2][0][4]) & g_50[1]);
    }
    if ((safe_sub_func_uint8_t_u_u(l_79, ((safe_lshift_func_uint8_t_u_u(g_30, 3)) != (safe_div_func_int16_t_s_s((0x2DD267AFL < (((safe_mul_func_int16_t_s_s((p_21 , g_30), p_21)) > p_21) <= p_21)), g_47))))))
    { 
        int32_t l_103 = 1L;
        for (l_79 = 0; (l_79 > 29); ++l_79)
        { 
            int32_t l_99 = (-5L);
            int32_t l_100 = 0x88FC9099L;
            l_103 &= (g_102[1][0] |= (g_101 = (safe_sub_func_int16_t_s_s((-9L), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_99 ^= 1UL) , l_99), (l_100 , 0x13L))), l_100))))));
            for (l_103 = 6; (l_103 != 28); l_103 = safe_add_func_int8_t_s_s(l_103, 1))
            { 
                return g_82;
            }
        }
    }
    else
    { 
        return p_21;
    }
    return l_32[2][0][4];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_102[i][j], "g_102[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_111.f4, "g_111.f4", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_162.f0, "g_162.f0", print_hash_value);
    transparent_crc(g_162.f1, "g_162.f1", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_269[i][j][k], "g_269[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_314[i], "g_314[i]", print_hash_value);

    }
    transparent_crc(g_323, "g_323", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
