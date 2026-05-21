// SPDX-License-Identifier: MIT
// cctest_csmith_c00840fc.c --- cctest case csmith_c00840fc (csmith seed 3221766396)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xaaa97ec7 */

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

// Options:   -s 3221766396 -o /tmp/csmith_gen_2_faq71g/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   const int64_t  f1;
   uint32_t  f2;
   int8_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int32_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint16_t  f0;
   int8_t  f1;
   uint64_t  f2;
   const struct S1  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const uint64_t  f0;
   int64_t  f1;
};
#pragma pack(pop)

union U4 {
   uint32_t  f0;
   const uint8_t  f1;
   const uint32_t  f2;
};

union U5 {
   uint8_t  f0;
   uint64_t  f1;
};


static int32_t g_3 = 0x88EB9876L;
static int16_t g_5 = (-8L);
static int16_t g_22 = 0L;
static int64_t g_23 = 0xF7D594484F75DF15LL;
static int32_t g_34[1] = {(-2L)};
static int32_t g_46[3][2] = {{0x86FE95B7L,0x86FE95B7L},{0x86FE95B7L,0x86FE95B7L},{0x86FE95B7L,0x86FE95B7L}};
static uint64_t g_47 = 18446744073709551615UL;
static int32_t g_113 = 5L;
static int8_t g_114 = (-2L);
static struct S1 g_116 = {-4L,0x7B67L};
static uint16_t g_140 = 0xE93BL;
static union U5 g_193 = {249UL};
static const struct S3 g_213 = {0UL,0xF218FDC557DA0BA2LL};
static const uint16_t g_237 = 0x6D45L;
static int64_t g_264 = 0x8E8F4C45D1DAE8A4LL;
static struct S0 g_287 = {65535UL,0x876800FB456D4CA9LL,4UL,0x8EL,0xFBBDAB1BL};
static uint32_t g_295 = 0x88198EA6L;



static uint8_t  func_1(void);
static struct S0  func_6(int8_t  p_7, uint32_t  p_8, const int32_t  p_9);
static uint32_t  func_10(uint32_t  p_11, int32_t  p_12);
static uint8_t  func_13(uint8_t  p_14, int32_t  p_15);




static uint8_t  func_1(void)
{ 
    uint64_t l_2[5][1];
    uint16_t l_4[4];
    const uint32_t l_248 = 2UL;
    int32_t l_289 = 0x8EBAFAAAL;
    int32_t l_292 = 0x30839E80L;
    uint32_t l_304 = 0x37D4CBDDL;
    uint64_t l_305 = 0UL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_2[i][j] = 0x365653D42374B1B0LL;
    }
    for (i = 0; i < 4; i++)
        l_4[i] = 65529UL;
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        uint32_t l_16 = 0UL;
        int32_t l_17 = 8L;
        g_5 = l_4[3];
        for (g_5 = 0; (g_5 >= 0); g_5 -= 1)
        { 
            int32_t l_288 = 1L;
            int i, j;
            l_288 = (func_6(l_2[(g_3 + 4)][g_5], func_10(l_2[(g_3 + 4)][g_5], (func_13((((l_16 == (l_17 = (g_5 ^ 0x51L))) != 5UL) == g_3), g_3) , l_2[0][0])), l_248) , g_287.f2);
            for (g_140 = 0; (g_140 <= 0); g_140 += 1)
            { 
                l_289 = g_34[0];
                return g_213.f0;
            }
        }
    }
    g_34[0] = (safe_mul_func_uint8_t_u_u(((((g_287 , ((0L ^ (g_295 = (g_287.f2++))) == (safe_sub_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((l_292 = (g_47 , ((safe_div_func_uint16_t_u_u(0xEA7FL, g_23)) <= l_248))), l_4[3])) == g_193.f0), l_4[3])) < l_248) , 246UL), 1L)))) <= l_304) != 0UL) ^ g_23), l_2[2][0]));
    return l_305;
}



static struct S0  func_6(int8_t  p_7, uint32_t  p_8, const int32_t  p_9)
{ 
    uint64_t l_251 = 0xAB8CA2FDA58E67CELL;
    int32_t l_274[5][4][4] = {{{(-10L),0L,0xB38D5C55L,0L},{0x98F74BABL,0x913C8C23L,0x56FF982DL,(-7L)},{0x1EF8870BL,0x22B7896BL,0L,0x271C1A90L},{0x271C1A90L,9L,(-7L),1L}},{{0x271C1A90L,0x99ABA915L,0L,0x227EB909L},{0x1EF8870BL,1L,0x56FF982DL,(-1L)},{0x98F74BABL,(-1L),0xB38D5C55L,0x5FFA1521L},{(-10L),0xEF4640E2L,0x271C1A90L,9L}},{{0x913C8C23L,0x4ED4AC31L,4L,0L},{0xB38D5C55L,0x086D0FFDL,0x913C8C23L,0x9D95EADCL},{0xB38D5C55L,0xB38D5C55L,(-7L),0L},{0L,0x793D5AF8L,9L,0x271C1A90L}},{{(-1L),1L,0x7FF40A62L,9L},{(-1L),1L,0x22B7896BL,0x271C1A90L},{1L,0x793D5AF8L,0x4ED4AC31L,0L},{4L,0xB38D5C55L,3L,0x9D95EADCL}},{{1L,9L,0xB38D5C55L,9L},{0L,0L,0x913C8C23L,1L},{1L,1L,(-10L),0x22B7896BL},{0x98F74BABL,0xEF4640E2L,0x98F74BABL,0x086D0FFDL}}};
    struct S1 l_286 = {0L,0xEA91L};
    int i, j, k;
    if ((safe_add_func_uint32_t_u_u((l_251++), p_8)))
    { 
        struct S0 l_256 = {0x81BCL,0xCD9A6DE51F0A1755LL,1UL,0x9DL,18446744073709551609UL};
        if ((p_9 || (248UL < 0xB3L)))
        { 
            int64_t l_263 = 0L;
            struct S1 l_276 = {0x21BA9FA5L,65535UL};
            for (g_113 = (-27); (g_113 <= (-27)); ++g_113)
            { 
                return l_256;
            }
            for (p_7 = 0; (p_7 < 13); p_7 = safe_add_func_int16_t_s_s(p_7, 3))
            { 
                int64_t l_262 = 1L;
                struct S0 l_265 = {0x737DL,-5L,0xF796855FL,-2L,18446744073709551615UL};
                g_264 = ((~(g_34[0] &= (safe_add_func_int64_t_s_s((0xC3L < (l_262 > ((g_213 , g_213) , g_114))), g_237)))) || l_263);
                return l_265;
            }
            for (g_23 = (-28); (g_23 != (-30)); g_23 = safe_sub_func_int32_t_s_s(g_23, 2))
            { 
                uint16_t l_272 = 65533UL;
                int32_t l_273 = 8L;
                int64_t l_281 = 0xB625347EE41A932FLL;
                l_273 = (1L != ((((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(p_9, g_264)) | 1L), 12)) || l_272) & 6UL) >= 1UL));
                l_274[0][2][1] = 0L;
                l_281 &= (((safe_unary_minus_func_uint16_t_u(((l_276 , (safe_mul_func_int16_t_s_s((p_8 , (-9L)), (safe_rshift_func_int16_t_s_u(l_256.f3, 7))))) != p_9))) ^ (-1L)) <= g_237);
            }
        }
        else
        { 
            struct S0 l_282[3] = {{65529UL,0xE6FAA462603D80BBLL,0xD1A0008BL,0x53L,1UL},{65529UL,0xE6FAA462603D80BBLL,0xD1A0008BL,0x53L,1UL},{65529UL,0xE6FAA462603D80BBLL,0xD1A0008BL,0x53L,1UL}};
            int i;
            return l_282[0];
        }
    }
    else
    { 
        const struct S1 l_285[4] = {{0xADAF65EDL,0x5878L},{0xADAF65EDL,0x5878L},{0xADAF65EDL,0x5878L},{0xADAF65EDL,0x5878L}};
        int i;
        l_274[4][3][1] = (safe_lshift_func_int8_t_s_s((l_285[3] , (((l_285[3].f1 & (0xE1CFL != (((((l_286 , g_3) || 8L) , 18446744073709551606UL) != p_8) , g_213.f1))) ^ p_7) <= p_9)), l_285[3].f1));
    }
    return g_287;
}



static uint32_t  func_10(uint32_t  p_11, int32_t  p_12)
{ 
    uint8_t l_201 = 255UL;
    int32_t l_202 = (-1L);
    int16_t l_219 = 0x8136L;
    int32_t l_240 = 1L;
    int32_t l_241 = 0L;
    int32_t l_242[1];
    int32_t l_243 = 2L;
    int64_t l_244 = 0xE6CEFA20D3B6ED61LL;
    uint32_t l_245[2][1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_242[i] = (-1L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_245[i][j] = 4UL;
    }
lbl_205:
    for (g_140 = 0; (g_140 >= 12); g_140 = safe_add_func_int32_t_s_s(g_140, 6))
    { 
        uint32_t l_189 = 1UL;
        int32_t l_190 = 0L;
        struct S0 l_200[5][4] = {{{0x1DFEL,-3L,0xDD47E966L,0L,0x58A2EDE8L},{5UL,1L,5UL,0x73L,0xF24C5EAAL},{0x8B21L,0x8FEB3E272992A0FDLL,0x6F209A28L,0x49L,1UL},{0x0FBAL,0x4B06863550A750F6LL,1UL,0x8AL,18446744073709551613UL}},{{0xA203L,-5L,0x6A3D8643L,0xDAL,1UL},{5UL,1L,5UL,0x73L,0xF24C5EAAL},{5UL,1L,5UL,0x73L,0xF24C5EAAL},{0xA203L,-5L,0x6A3D8643L,0xDAL,1UL}},{{5UL,1L,5UL,0x73L,0xF24C5EAAL},{0xA203L,-5L,0x6A3D8643L,0xDAL,1UL},{0x1DFEL,-3L,0xDD47E966L,0L,0x58A2EDE8L},{65531UL,1L,0xEA78D223L,-7L,0x12515FCFL}},{{5UL,1L,5UL,0x73L,0xF24C5EAAL},{0x1DFEL,-3L,0xDD47E966L,0L,0x58A2EDE8L},{5UL,1L,5UL,0x73L,0xF24C5EAAL},{0x8B21L,0x8FEB3E272992A0FDLL,0x6F209A28L,0x49L,1UL}},{{0xA203L,-5L,0x6A3D8643L,0xDAL,1UL},{65531UL,1L,0xEA78D223L,-7L,0x12515FCFL},{0x8B21L,0x8FEB3E272992A0FDLL,0x6F209A28L,0x49L,1UL},{0x8B21L,0x8FEB3E272992A0FDLL,0x6F209A28L,0x49L,1UL}}};
        int i, j;
        if ((safe_add_func_int64_t_s_s(0xC35D945D53B164AELL, l_189)))
        { 
            l_190 ^= g_23;
            return l_189;
        }
        else
        { 
            int32_t l_197 = (-6L);
            int32_t l_199 = (-4L);
            for (g_22 = 1; (g_22 >= 0); g_22 -= 1)
            { 
                struct S2 l_196 = {8UL,0xA5L,18446744073709551610UL,{-1L,0UL}};
                int32_t l_198 = 0xDA17076BL;
                int i, j;
                l_199 = ((((g_46[(g_22 + 1)][g_22] != (l_198 = (0L && ((((safe_add_func_int16_t_s_s((g_193 , ((safe_mul_func_uint16_t_u_u(((l_196 , l_197) | 0UL), 2L)) != g_34[0])), g_34[0])) , g_47) , g_5) , g_46[0][1])))) || 0xAA67L) | p_11) == 2L);
            }
            l_202 ^= (l_200[0][2] , ((p_11 | g_3) != (l_201 , g_193.f0)));
        }
    }
    for (p_12 = 0; (p_12 < (-19)); --p_12)
    { 
        uint16_t l_208 = 0x3876L;
        uint16_t l_220 = 0xD963L;
        int32_t l_221 = 0x7A54F258L;
        struct S2 l_230 = {1UL,0x66L,1UL,{-6L,0x7C9CL}};
        for (g_140 = 0; (g_140 <= 0); g_140 += 1)
        { 
            for (g_116.f1 = 0; (g_116.f1 <= 0); g_116.f1 += 1)
            { 
                if (g_193.f0)
                    goto lbl_205;
            }
        }
        for (g_113 = 7; (g_113 != 17); g_113 = safe_add_func_uint64_t_u_u(g_113, 5))
        { 
            uint32_t l_216 = 0x9217CC90L;
            int32_t l_239 = 0x7F749FDAL;
            l_208--;
            l_221 ^= ((safe_mul_func_int8_t_s_s((g_213 , (l_220 = (((safe_rshift_func_int8_t_s_s((g_140 , l_216), 6)) < ((safe_sub_func_uint8_t_u_u(l_201, 0xDFL)) > l_219)) || l_216))), p_12)) < 1L);
            if ((((((((g_5 && p_12) || (safe_add_func_int16_t_s_s(0xCFEDL, ((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_230 , l_230.f3.f1), p_12)), 0xC376L)) > 1L), l_219)) > g_46[2][0])))) ^ g_34[0]) > 1UL) != l_202) & g_47) | 0xB475L))
            { 
                union U4 l_236 = {18446744073709551615UL};
                int32_t l_238 = 0L;
                l_239 = ((((g_34[0] = (l_238 |= ((((safe_mul_func_int8_t_s_s((g_140 >= (!(-3L))), (l_221 = (((((safe_sub_func_int32_t_s_s(((((l_236 , (((g_237 && l_216) != 0xB12FEB1DL) < p_11)) > l_220) ^ p_12) || p_11), g_34[0])) & g_5) & 0L) ^ p_12) , l_216)))) , g_34[0]) >= p_11) < 3UL))) , l_236.f1) != p_11) < p_11);
            }
            else
            { 
                l_239 = (l_202 &= (-7L));
            }
        }
    }
    l_245[0][0]++;
    return g_237;
}



static uint8_t  func_13(uint8_t  p_14, int32_t  p_15)
{ 
    int32_t l_18[4][3][5] = {{{8L,0xEE05243BL,8L,8L,0xEE05243BL},{0x83EB6194L,0x17C0EC0DL,0x17C0EC0DL,0x83EB6194L,0x17C0EC0DL},{0xEE05243BL,0xEE05243BL,(-1L),0xEE05243BL,0xEE05243BL}},{{0x17C0EC0DL,0x83EB6194L,0x17C0EC0DL,0x17C0EC0DL,0x83EB6194L},{0xEE05243BL,8L,8L,0xEE05243BL,8L},{0x83EB6194L,0x83EB6194L,1L,0x83EB6194L,0x83EB6194L}},{{8L,0xEE05243BL,8L,8L,0xEE05243BL},{0x83EB6194L,0x17C0EC0DL,0x17C0EC0DL,0x83EB6194L,0x17C0EC0DL},{0xEE05243BL,0xEE05243BL,(-1L),0xEE05243BL,0xEE05243BL}},{{0x17C0EC0DL,0x83EB6194L,0x17C0EC0DL,0x17C0EC0DL,0x83EB6194L},{0xEE05243BL,8L,8L,0xEE05243BL,8L},{0x83EB6194L,0x83EB6194L,1L,0x83EB6194L,0x83EB6194L}}};
    int32_t l_24 = 0x44BD1A6FL;
    int32_t l_45 = 0L;
    uint16_t l_84 = 65535UL;
    union U4 l_112[2] = {{0x7F117623L},{0x7F117623L}};
    uint32_t l_119 = 0xBD8FF204L;
    int i, j, k;
lbl_120:
    for (p_14 = 0; (p_14 <= 2); p_14 += 1)
    { 
        int64_t l_21 = 1L;
        int32_t l_25 = 8L;
        struct S0 l_28 = {0x8045L,0xD47EBDCF28D0D4A4LL,0x8A597FB6L,-8L,0xE09E13A3L};
        l_24 = ((g_3 <= (7UL < (safe_mul_func_uint16_t_u_u(((l_18[3][1][4] = (g_22 = l_21)) , (g_23 = l_18[2][1][2])), p_14)))) == g_5);
        for (l_24 = 2; (l_24 >= 0); l_24 -= 1)
        { 
            int64_t l_38 = 2L;
            struct S0 l_43 = {3UL,-1L,0UL,0x92L,18446744073709551615UL};
            int32_t l_44 = (-1L);
            for (l_21 = 0; (l_21 <= 2); l_21 += 1)
            { 
                int i, j, k;
                l_18[(l_21 + 1)][l_24][(l_21 + 2)] = l_18[(l_24 + 1)][l_24][(l_24 + 2)];
                return l_18[l_21][l_21][l_24];
            }
            l_25 = (0xAE264689L <= l_18[2][1][4]);
            if (((safe_add_func_uint32_t_u_u(((l_18[3][0][1] = (-7L)) || (l_28 , (+(safe_sub_func_uint64_t_u_u((g_34[0] = ((safe_rshift_func_int8_t_s_u(g_5, g_22)) , l_28.f3)), p_15))))), 0x6A6C3430L)) , 0x95372A71L))
            { 
                struct S3 l_37 = {0x1EB1C2610AA4AECALL,0xA428954837A000C9LL};
                l_18[1][1][3] = (((0L ^ (0x08693C254F4D21FDLL >= g_34[0])) == (safe_lshift_func_int8_t_s_s(((l_37 , 0x77332E7A53CC61BBLL) ^ l_28.f2), 5))) > g_5);
            }
            else
            { 
                uint32_t l_39 = 18446744073709551615UL;
                struct S0 l_42[2] = {{0xF2FCL,0x9F15FC87C03C79A3LL,4294967295UL,0xD7L,0x23289412L},{0xF2FCL,0x9F15FC87C03C79A3LL,4294967295UL,0xD7L,0x23289412L}};
                int i;
                l_39 = (l_38 |= p_14);
                g_46[0][1] |= ((l_18[2][1][1] != (safe_mul_func_uint8_t_u_u((l_45 = ((((l_44 &= ((l_42[0] , ((l_43 , g_34[0]) <= 0xBBL)) <= l_42[0].f2)) , (-6L)) ^ g_3) >= g_23)), 0x84L))) & g_5);
            }
            for (l_45 = 0; (l_45 <= 2); l_45 += 1)
            { 
                int i, j, k;
                l_18[(p_14 + 1)][l_45][(p_14 + 2)] = 0x1A75D104L;
                g_47--;
                l_44 = ((safe_add_func_uint64_t_u_u(g_47, (l_18[(p_14 + 1)][l_45][(p_14 + 2)] != (-1L)))) != 249UL);
            }
        }
        g_34[0] = ((l_25 = ((safe_rshift_func_int8_t_s_u(g_46[0][1], 0)) <= (~(-3L)))) < 0xD718L);
    }
    for (g_22 = 1; (g_22 >= 0); g_22 -= 1)
    { 
        int8_t l_56 = 1L;
        int32_t l_57 = 0L;
        int32_t l_61 = 0x38870407L;
        int32_t l_62[4][5][2] = {{{(-1L),0x026D3962L},{0x9F67763BL,0x026D3962L},{(-1L),0x9F67763BL},{(-2L),(-2L)},{0L,0x01BB24D4L}},{{(-1L),0xE57A5C46L},{0x01BB24D4L,0x026D3962L},{0x89B0255DL,0x01BB24D4L},{(-2L),0L},{(-2L),0x01BB24D4L}},{{0x89B0255DL,0x026D3962L},{0x01BB24D4L,0xE57A5C46L},{(-1L),0x01BB24D4L},{0L,(-2L)},{(-2L),0x9F67763BL}},{{(-1L),0x026D3962L},{0x9F67763BL,0x026D3962L},{(-1L),0x9F67763BL},{(-2L),(-2L)},{0L,0x01BB24D4L}}};
        uint32_t l_63[5];
        int32_t l_77 = (-2L);
        int16_t l_82 = 0L;
        int64_t l_83 = 0xB3B4D8F4AAFBA0E2LL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_63[i] = 0UL;
        for (g_23 = 0; (g_23 <= 1); g_23 += 1)
        { 
            uint32_t l_55 = 4294967295UL;
            int32_t l_58 = (-1L);
            int8_t l_59[5] = {6L,6L,6L,6L,6L};
            int32_t l_60[5][4][1];
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_60[i][j][k] = 0x6DB513C5L;
                }
            }
            if (l_55)
                break;
            for (p_15 = 0; (p_15 <= 1); p_15 += 1)
            { 
                l_57 = l_56;
                return p_14;
            }
            ++l_63[1];
        }
        for (p_15 = 1; (p_15 >= 0); p_15 -= 1)
        { 
            int64_t l_74 = 0L;
            l_74 = (safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(p_14, (l_62[1][2][1] = (safe_div_func_int64_t_s_s(((g_46[2][0] || (l_45 && ((safe_rshift_func_uint8_t_u_s((((l_18[1][2][2] , 0x1AA1L) & l_57) , p_14), p_14)) ^ p_15))) , g_5), p_14))))) , 0x16L), g_5));
        }
        for (l_24 = 0; (l_24 <= 1); l_24 += 1)
        { 
            int32_t l_75 = 0x97493B57L;
            int32_t l_76 = 0x7F463393L;
            int32_t l_78 = 0L;
            int32_t l_79 = 1L;
            int32_t l_80 = 1L;
            int32_t l_81[1];
            int i;
            for (i = 0; i < 1; i++)
                l_81[i] = 1L;
            --l_84;
            g_34[0] = ((safe_rshift_func_uint16_t_u_u(0x3EE6L, (safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((safe_div_func_int64_t_s_s((((safe_div_func_int32_t_s_s((((((safe_mod_func_int8_t_s_s((((safe_add_func_int16_t_s_s((g_34[0] > (safe_lshift_func_int16_t_s_u(0x0C6CL, (+(safe_mod_func_uint64_t_u_u((p_15 && g_3), l_45)))))), p_14)) && p_15) <= g_46[0][1]), (-4L))) & l_24) || 0L) != p_15) || g_3), g_23)) ^ l_82) <= g_23), g_3)) && 4294967286UL) >= 0x805D29A3L), p_14)) & 0xC3L), g_22)))) && g_34[0]);
            if (l_63[0])
                break;
        }
        for (l_77 = 0; (l_77 <= 1); l_77 += 1)
        { 
            return g_22;
        }
    }
    if ((safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(0x254BL, ((l_112[0] , l_112[0]) , (g_113 = l_112[0].f2)))) ^ p_15), g_22)))
    { 
        uint8_t l_115 = 246UL;
        const union U5 l_118[5] = {{0xB4L},{0xB4L},{0xB4L},{0xB4L},{0xB4L}};
        int i;
        l_115 &= ((g_114 ^= (g_47 = p_14)) && p_14);
        for (g_22 = 0; (g_22 >= 0); g_22 -= 1)
        { 
            struct S2 l_117 = {7UL,0x3CL,0x3CE1473C7CBC0A3BLL,{0x3B9236ECL,1UL}};
            int32_t l_138 = 0xF3B7B1D0L;
            int i;
            if (((((((g_34[g_22] , g_116) , l_117) , (l_118[1] , l_119)) , 0x9A96L) <= 0xAC0BL) < 0x5F8EL))
            { 
                int i;
                g_34[g_22] = l_117.f0;
                return g_34[g_22];
            }
            else
            { 
                uint16_t l_130[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_130[i][j] = 0xF12EL;
                }
                if (l_117.f2)
                    goto lbl_120;
                g_34[g_22] = (safe_sub_func_uint32_t_u_u((p_15 & (0x4DA1L >= (safe_add_func_uint16_t_u_u((!(safe_add_func_uint8_t_u_u(((0x682E6EA6DD21D6E2LL <= ((safe_div_func_uint32_t_u_u(((l_117.f1 < g_34[0]) != p_15), 0x7C7667E6L)) , g_46[2][0])) || g_34[0]), l_130[0][1]))), 1UL)))), 0x2D4C9FC4L));
            }
            for (l_119 = 0; (l_119 <= 1); l_119 += 1)
            { 
                int i, j;
                g_34[g_22] = (!(((safe_mod_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((g_23 = ((g_46[(g_22 + 1)][(g_22 + 1)] < 0x34DAL) && 18446744073709551606UL)), g_22)) && 0xDAL), p_14)) > p_15) || 0UL));
                g_34[0] = (((p_14 && (!((p_14 && (l_119 == (((g_113 <= l_24) ^ 0x21L) , g_46[0][1]))) != g_22))) || p_14) , p_15);
            }
            for (l_84 = 0; (l_84 <= 1); l_84 += 1)
            { 
                uint32_t l_137[4][4][1] = {{{1UL},{0UL},{1UL},{0UL}},{{1UL},{0UL},{1UL},{0UL}},{{1UL},{0UL},{1UL},{0UL}},{{1UL},{0UL},{1UL},{0UL}}};
                int32_t l_139 = (-1L);
                int i, j, k;
                if (g_46[(l_84 + 1)][l_84])
                    break;
                g_140 = (l_139 = (l_138 = (g_34[0] = (0L ^ l_137[3][3][0]))));
                if (g_114)
                    break;
            }
        }
    }
    else
    { 
        uint64_t l_143[4];
        int32_t l_163 = (-1L);
        int32_t l_167 = (-6L);
        int32_t l_172 = 0x3576A00AL;
        int32_t l_173 = 0L;
        int i;
        for (i = 0; i < 4; i++)
            l_143[i] = 0x3BE05C0E06A67EA1LL;
        if (((safe_add_func_int8_t_s_s(l_143[1], l_112[0].f2)) <= g_113))
        { 
            const int8_t l_159 = 0x26L;
            struct S1 l_162 = {0xAFCE4FDFL,0x05D3L};
            int32_t l_166 = 0xE94820B1L;
            int32_t l_168 = (-1L);
            int32_t l_170[4][5] = {{0L,0xF3FEDEC0L,0L,0xF3FEDEC0L,0L},{(-10L),0xF3FEDEC0L,(-6L),0L,(-6L)},{(-6L),(-6L),0L,0L,0x913E9212L},{0xF3FEDEC0L,(-10L),(-10L),0xF3FEDEC0L,(-6L)}};
            int i, j;
            for (l_45 = 5; (l_45 == 3); l_45--)
            { 
                uint16_t l_150[4] = {0UL,0UL,0UL,0UL};
                int32_t l_164 = 0xA3349E90L;
                int32_t l_165 = (-1L);
                int32_t l_169 = 0xCE4E9EF1L;
                int32_t l_171[5][3][2] = {{{(-8L),1L},{(-8L),4L},{0xB5B9D1BAL,0L}},{{4L,(-1L)},{0x9298037FL,(-1L)},{0L,5L}},{{5L,5L},{0L,(-1L)},{0x9298037FL,(-1L)}},{{4L,0L},{0xB5B9D1BAL,4L},{(-8L),1L}},{{(-8L),4L},{0xB5B9D1BAL,0L},{4L,(-1L)}}};
                uint8_t l_174 = 0UL;
                int i, j, k;
                l_163 = (((safe_add_func_uint8_t_u_u(l_84, (safe_add_func_uint8_t_u_u((((l_150[1]--) & ((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(g_5, l_159)) || (safe_sub_func_int16_t_s_s((l_162 , g_116.f0), p_14))), g_34[0])), 0xD3EFL)) <= 6L)) , g_23), 5L)))) > g_23) | 4L);
                ++l_174;
            }
            l_163 = (safe_div_func_int16_t_s_s((1UL != l_112[0].f1), (1UL | (0L | g_22))));
        }
        else
        { 
            return g_140;
        }
        l_173 = ((((-1L) || (safe_add_func_uint32_t_u_u((l_18[2][1][4] |= ((safe_add_func_int8_t_s_s((-10L), (safe_mod_func_uint16_t_u_u(g_114, p_15)))) < 0x17D50ABDL)), g_113))) >= p_15) == p_14);
    }
    return g_46[0][0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_34[i], "g_34[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_46[i][j], "g_46[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_193.f0, "g_193.f0", print_hash_value);
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_213.f1, "g_213.f1", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_287.f0, "g_287.f0", print_hash_value);
    transparent_crc(g_287.f1, "g_287.f1", print_hash_value);
    transparent_crc(g_287.f2, "g_287.f2", print_hash_value);
    transparent_crc(g_287.f3, "g_287.f3", print_hash_value);
    transparent_crc(g_287.f4, "g_287.f4", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
