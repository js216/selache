// SPDX-License-Identifier: MIT
// cctest_csmith_e07808db.c --- cctest case csmith_e07808db (csmith seed 3765962971)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x212a94f9 */

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

// Options:   -s 3765962971 -o /tmp/csmith_gen_gdvniepl/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   uint16_t  f1;
   uint64_t  f2;
   uint8_t  f3;
   int8_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint8_t  f0;
};
#pragma pack(pop)

union U2 {
   struct S0  f0;
   int8_t  f1;
   int32_t  f2;
};

union U3 {
   const int64_t  f0;
   int32_t  f1;
   uint16_t  f2;
   uint64_t  f3;
};


static int32_t g_2 = 0xBD035C57L;
static int32_t g_8 = 0x0A5DEC4FL;
static uint8_t g_10 = 0x25L;
static union U3 g_30 = {9L};
static int8_t g_48 = 0xC4L;
static uint32_t g_77 = 0x56F4200CL;
static uint16_t g_84[4][3][2] = {{{0UL,0x4DAAL},{4UL,0UL},{7UL,7UL}},{{7UL,0UL},{4UL,0x4DAAL},{0UL,0x4DAAL}},{{4UL,0UL},{7UL,7UL},{7UL,0UL}},{{4UL,0x4DAAL},{0UL,0x4DAAL},{4UL,0UL}}};
static int32_t g_102 = 1L;
static int32_t g_155 = 0x30B27692L;
static struct S0 g_160 = {0xF1AC7F9B73E17168LL,0x3A65L,0x075502811D3E0DDALL,0x54L,0x1FL};
static int32_t g_166 = 0x3DF7CF63L;
static int64_t g_168 = 0x504B5D7992C5F34ELL;
static int32_t g_169 = 0x5A8890B9L;
static int16_t g_170 = 0xE330L;
static int16_t g_171 = 0x5212L;
static int8_t g_172[5] = {1L,1L,1L,1L,1L};
static struct S1 g_184 = {0x0AL};
static int32_t g_305 = 9L;
static uint32_t g_306 = 18446744073709551615UL;
static union U2 g_345 = {{0xF7CF6A6F90522F1FLL,65535UL,0xA88AB148E825A275LL,0xD6L,0x09L}};
static int32_t g_360 = 1L;
static uint16_t g_362[4][4] = {{65528UL,65528UL,65528UL,65528UL},{65528UL,65528UL,65528UL,65528UL},{65528UL,65528UL,65528UL,65528UL},{65528UL,65528UL,65528UL,65528UL}};
static uint32_t g_393 = 2UL;
static uint16_t g_424 = 0xFFF2L;
static uint64_t g_427 = 0UL;



static int32_t  func_1(void);
static const int32_t  func_13(uint64_t  p_14, union U3  p_15, int8_t  p_16, int16_t  p_17, int32_t  p_18);
static uint8_t  func_22(int32_t  p_23, int8_t  p_24);
static int64_t  func_25(union U3  p_26, int32_t  p_27, uint8_t  p_28, uint64_t  p_29);




static int32_t  func_1(void)
{ 
    int32_t l_3 = 0xD8A94B2AL;
    int32_t l_4 = 0x2F644ACCL;
    int32_t l_5 = 0x55459EEDL;
    int32_t l_6 = 1L;
    int32_t l_7 = (-1L);
    int32_t l_9[2];
    union U3 l_19 = {0x83D87E3BC4AEE507LL};
    uint32_t l_301 = 8UL;
    int16_t l_356[4];
    uint32_t l_357 = 18446744073709551612UL;
    struct S0 l_365[3] = {{0L,65530UL,0UL,1UL,0x25L},{0L,65530UL,0UL,1UL,0x25L},{0L,65530UL,0UL,1UL,0x25L}};
    int16_t l_437 = 0x02A2L;
    int i;
    for (i = 0; i < 2; i++)
        l_9[i] = 0xA3DBC56EL;
    for (i = 0; i < 4; i++)
        l_356[i] = 0x1B7EL;
    if ((g_2 < (++g_10)))
    { 
        uint32_t l_63[5] = {0x4FB361F3L,0x4FB361F3L,0x4FB361F3L,0x4FB361F3L,0x4FB361F3L};
        struct S0 l_257 = {0x371AF357AB1EFAC6LL,0xC0F7L,8UL,0x2AL,0xBEL};
        int32_t l_273 = 0xC7EA47AEL;
        int i;
    }
    else
    { 
        int32_t l_311 = (-7L);
        int32_t l_312 = 0x1C9B2D7FL;
        const uint64_t l_346 = 1UL;
        uint32_t l_347 = 18446744073709551611UL;
lbl_322:
        for (g_155 = 0; (g_155 > 13); g_155 = safe_add_func_int32_t_s_s(g_155, 1))
        { 
            uint8_t l_321 = 0x83L;
            l_312 ^= l_311;
            if (l_312)
                goto lbl_322;
            l_312 ^= (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((l_9[1] && g_48) < ((safe_mul_func_uint8_t_u_u(l_321, g_77)) > l_4)), g_166)), g_306)), 0x8DL));
        }
lbl_358:
        g_166 &= (safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(((8UL == (safe_mul_func_int8_t_s_s((g_172[1] = ((safe_unary_minus_func_int32_t_s((safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((l_7 = (g_168 < (g_172[3] , ((safe_mod_func_int64_t_s_s(((safe_div_func_int16_t_s_s((!(safe_mul_func_int8_t_s_s((((g_345 , l_346) & g_8) <= 0x21CABDFC57C445FELL), l_6))), l_346)) && l_311), 8UL)) < g_169)))) > 0x64701A24L), g_169)) || l_347), (-1L))), 1L)))) < l_4)), 0UL))) , g_8), g_2)) ^ g_77) <= g_160.f3), g_345.f0.f3)), 0xCD83DB8F6AD2A6B6LL));
        if (((l_357 = (safe_lshift_func_int8_t_s_u((l_5 |= ((safe_div_func_int16_t_s_s((((safe_div_func_int32_t_s_s((g_166 |= ((safe_lshift_func_uint8_t_u_u(0x98L, 3)) > g_160.f0)), (l_7 || (g_160.f2 , l_19.f0)))) | (-7L)) && 0UL), l_356[1])) < g_48)), 0))) >= 0x4517339A875923DCLL))
        { 
            union U3 l_366 = {1L};
            uint32_t l_369[2][3] = {{0x4CAD3E31L,0x1529816DL,0x1529816DL},{0x4CAD3E31L,0x1529816DL,0x1529816DL}};
            uint16_t l_370 = 0x0738L;
            int i, j;
            if (l_4)
                goto lbl_358;
            if ((g_8 = l_301))
            { 
                int32_t l_359 = (-1L);
                int32_t l_361 = 0xF418D458L;
                g_362[2][1]--;
            }
            else
            { 
                g_160 = l_365[2];
                g_160 = g_160;
            }
            g_8 |= (((l_366 , ((safe_sub_func_uint8_t_u_u(((1L == l_347) | (1UL || l_369[0][2])), g_172[3])) ^ l_347)) < l_370) >= 0xD2L);
        }
        else
        { 
            struct S0 l_373 = {0x0DA332FD4261A66ELL,0xF1B5L,0x603867B030CD4B42LL,0x67L,1L};
            int8_t l_406 = (-1L);
            int16_t l_423 = 0x37D5L;
            for (g_30.f2 = 0; (g_30.f2 == 14); g_30.f2 = safe_add_func_uint64_t_u_u(g_30.f2, 3))
            { 
                uint16_t l_384 = 9UL;
                l_373 = g_345.f0;
                g_102 |= (safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((0x9A87DC643EF07CC0LL & (safe_div_func_int8_t_s_s((l_384 ^= (-5L)), ((((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((1UL <= (g_160.f0 |= (safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(g_170, g_10)), 5)))), g_166)), g_393)) & l_6) | l_311) & 0x35D5C15EBB02EE81LL)))), l_373.f3)), l_373.f4)), g_345.f0.f4)), g_8));
                g_166 = (safe_sub_func_int32_t_s_s(((safe_div_func_int64_t_s_s(0x86F7CE8DBD7867C1LL, g_345.f0.f1)) || (safe_sub_func_int32_t_s_s((((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_384, 0)), g_169)) != g_48) || l_347), g_345.f0.f4))), 0xA77D2BB2L));
            }
            if ((safe_add_func_int32_t_s_s(l_406, (safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((l_373.f0 | ((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s((-6L))) , l_356[1]) & l_3), g_393)), g_160.f4)), l_365[2].f3)), g_160.f0)) > g_160.f0)), 13)), g_84[0][0][0])), l_312)))))
            { 
                uint32_t l_422[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_422[i][j] = 7UL;
                }
                g_2 = l_422[0][0];
                g_424--;
            }
            else
            { 
                g_160 = g_345.f0;
            }
            g_155 ^= (g_427 && (safe_div_func_uint8_t_u_u(((0x72B7DA53C348E5D8LL != (safe_mod_func_uint16_t_u_u((l_5 = 4UL), (~(safe_rshift_func_int8_t_s_u(0x20L, 0)))))) == l_373.f0), g_2)));
        }
    }
    for (g_168 = (-13); (g_168 <= 26); g_168++)
    { 
        if (g_172[3])
            break;
    }
    return l_437;
}



static const int32_t  func_13(uint64_t  p_14, union U3  p_15, int8_t  p_16, int16_t  p_17, int32_t  p_18)
{ 
    int32_t l_64[1];
    int32_t l_72 = 0x8C07A8B5L;
    int32_t l_104 = 0x4A45BEF7L;
    uint32_t l_128[4];
    int32_t l_164 = 0x5A86EBCDL;
    int32_t l_165 = 0xF2DFE025L;
    int32_t l_167[3];
    uint32_t l_173 = 18446744073709551615UL;
    int32_t l_182 = 0x17466328L;
    int8_t l_183 = 1L;
    struct S0 l_230 = {0L,0xF641L,18446744073709551610UL,0x39L,0xFAL};
    int i;
    for (i = 0; i < 1; i++)
        l_64[i] = 2L;
    for (i = 0; i < 4; i++)
        l_128[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_167[i] = (-1L);
    for (p_15.f3 = 0; (p_15.f3 <= 0); p_15.f3 += 1)
    { 
        uint64_t l_100[5][4] = {{0xDE2A9FC04FBFD2E0LL,0x865AEC415B45A7EALL,0x865AEC415B45A7EALL,0xDE2A9FC04FBFD2E0LL},{0x865AEC415B45A7EALL,0xDE2A9FC04FBFD2E0LL,0x865AEC415B45A7EALL,0x865AEC415B45A7EALL},{0xDE2A9FC04FBFD2E0LL,0xDE2A9FC04FBFD2E0LL,18446744073709551615UL,0xDE2A9FC04FBFD2E0LL},{0xDE2A9FC04FBFD2E0LL,0x865AEC415B45A7EALL,0x865AEC415B45A7EALL,0xDE2A9FC04FBFD2E0LL},{0x865AEC415B45A7EALL,0xDE2A9FC04FBFD2E0LL,0x865AEC415B45A7EALL,0x865AEC415B45A7EALL}};
        struct S1 l_135 = {255UL};
        int32_t l_136 = 0x6598BD18L;
        int32_t l_137 = 0xD783734BL;
        int i, j;
        for (g_48 = 0; (g_48 >= 0); g_48 -= 1)
        { 
            int8_t l_65[2];
            const int32_t l_101 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_65[i] = 0xC3L;
            l_65[0] = (-3L);
        }
        l_104 ^= (g_102 = g_48);
        p_18 = (safe_add_func_int8_t_s_s(((1L & ((l_64[0] >= ((safe_lshift_func_uint16_t_u_u((l_137 = (safe_mod_func_int8_t_s_s((((g_48 = (((l_136 = (p_15 , (l_135 , l_100[0][3]))) | 0L) | 0x42L)) == 0x8AL) == g_77), g_30.f3))), g_10)) , l_137)) == 0UL)) <= 1L), p_15.f2));
    }
    for (l_104 = (-29); (l_104 != (-29)); l_104 = safe_add_func_uint8_t_u_u(l_104, 8))
    { 
        const struct S0 l_159 = {1L,0xAC36L,3UL,0x0EL,0x20L};
        int32_t l_162[1];
        int32_t l_163 = (-1L);
        uint32_t l_252 = 0x0B4DBAC1L;
        int i;
        for (i = 0; i < 1; i++)
            l_162[i] = 1L;
        for (g_30.f3 = (-25); (g_30.f3 <= 7); ++g_30.f3)
        { 
            uint32_t l_142 = 0x6AF828D7L;
            int32_t l_156[3];
            int i;
            for (i = 0; i < 3; i++)
                l_156[i] = (-1L);
            for (g_77 = 0; (g_77 <= 3); g_77 += 1)
            { 
                uint32_t l_147[2][3][2] = {{{0x999123B7L,0x999123B7L},{0xCBDCB88EL,0x999123B7L},{0x999123B7L,0xCBDCB88EL}},{{0x999123B7L,0x999123B7L},{0xCBDCB88EL,0x999123B7L},{0x999123B7L,0xCBDCB88EL}}};
                int32_t l_154 = (-1L);
                int i, j, k;
                l_142--;
                l_156[2] = (g_155 |= (safe_add_func_uint32_t_u_u(l_147[1][1][1], (l_154 = ((((safe_add_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((l_147[1][1][1] & (safe_sub_func_int32_t_s_s(l_142, l_128[2]))), g_30.f1)) < g_30.f2), p_14)) <= g_77) | 3L) && 65535UL)))));
            }
            for (p_17 = 0; (p_17 < (-23)); p_17 = safe_sub_func_uint64_t_u_u(p_17, 9))
            { 
                int32_t l_161[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_161[i] = (-1L);
                g_160 = l_159;
                if (l_161[1])
                    break;
                l_173++;
            }
            p_18 &= ((l_162[0] != (l_167[0] = ((l_163 = (p_14 & (l_156[2] = (1UL || 0xE784B4C2L)))) >= g_2))) || g_30.f3);
        }
        if ((g_2 && (safe_sub_func_int32_t_s_s(((l_159.f1 > (l_183 = (safe_lshift_func_uint16_t_u_s(g_84[0][0][0], (((safe_div_func_uint8_t_u_u(l_182, 9L)) >= 4294967295UL) == g_77))))) == g_155), 0x375F163BL))))
        { 
            struct S0 l_200 = {0xDB36039B1839EC28LL,0x88B5L,1UL,1UL,7L};
            g_8 = (g_184 , (safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((((g_30.f2 , (((g_168 & ((safe_add_func_uint64_t_u_u(((((safe_lshift_func_uint16_t_u_s(((g_160 , p_15.f3) || l_72), l_159.f1)) && g_102) | p_15.f1) >= p_15.f3), g_30.f1)) , l_159.f4)) > 0xC45A4569L) > p_17)) <= l_183) != 255UL), l_159.f4)) >= p_15.f3), 6UL)));
            for (l_183 = 0; (l_183 <= 0); l_183 += 1)
            { 
                int i;
                l_162[l_183] = ((l_64[l_183] < 1UL) ^ (!((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((g_170 , p_14) < g_10), l_183)), 8L)) & 18446744073709551607UL)));
                if (g_84[0][0][0])
                    continue;
                g_102 |= 0xF8BBF318L;
            }
            for (g_30.f3 = 25; (g_30.f3 == 52); ++g_30.f3)
            { 
                uint32_t l_216[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_216[i] = 4294967287UL;
                l_200 = l_200;
                l_216[1] &= (0UL < (safe_add_func_uint8_t_u_u(p_18, (safe_mul_func_int8_t_s_s((((((safe_div_func_uint8_t_u_u((+((l_159.f2 > ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((p_15.f0 && g_160.f1) <= p_16) != 0x533CL), 15)), p_15.f0)), g_30.f1)) == 0xEDL)) != g_171)), 0xAAL)) != p_16) , l_182) | l_159.f0) && g_30.f2), 7L)))));
            }
        }
        else
        { 
            uint64_t l_226 = 18446744073709551610UL;
            struct S0 l_238[2][2] = {{{-1L,0xD77BL,18446744073709551606UL,0xA3L,0xA2L},{-1L,0xD77BL,18446744073709551606UL,0xA3L,0xA2L}},{{-1L,0xD77BL,18446744073709551606UL,0xA3L,0xA2L},{-1L,0xD77BL,18446744073709551606UL,0xA3L,0xA2L}}};
            int32_t l_250 = (-4L);
            int i, j;
            if (((g_160 , (l_226 &= ((g_10 && (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(((safe_sub_func_int64_t_s_s(l_128[1], (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(7UL, p_15.f1)), g_10)))) <= (-5L)))), 2))) < g_30.f0))) , p_17))
            { 
                struct S0 l_229 = {0L,65534UL,1UL,0xC7L,-2L};
                g_102 = ((p_18 , ((((safe_add_func_int64_t_s_s(((p_15.f2 < 0x30FB9BA10F6662E9LL) <= l_226), l_226)) , 6UL) != 0x25L) >= p_15.f2)) && l_163);
                if (g_30.f1)
                    break;
                l_230 = l_229;
            }
            else
            { 
                uint32_t l_231 = 0x685FEB4FL;
                int32_t l_235[1][1][3];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_235[i][j][k] = 1L;
                    }
                }
                g_2 = (l_231 < (0x38L == (safe_mul_func_int16_t_s_s(((l_235[0][0][2] = (g_84[0][0][0] & (~(l_165 |= l_231)))) , 1L), 1UL))));
                g_166 = (l_159.f1 >= ((((safe_sub_func_int32_t_s_s(p_15.f1, p_18)) , ((-7L) || p_15.f0)) | (-1L)) ^ g_30.f1));
                g_160 = l_238[1][1];
            }
            for (g_155 = 1; (g_155 >= 0); g_155 -= 1)
            { 
                struct S0 l_249[1] = {{-1L,0xC7F6L,18446744073709551615UL,0xB7L,0xBFL}};
                int32_t l_251 = 0x3675BC93L;
                int i;
                g_160 = (((safe_add_func_uint64_t_u_u(0xB57959B7E851782DLL, (safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((g_184 , (((((g_184 , g_48) , 0xC518L) , l_159.f3) , 255UL) , 0xAFL)), 4)), 0xADL)), g_172[1])), 0x4EC99466FFC8C9FELL)))) == g_2) , l_249[0]);
                l_252++;
            }
            if (l_250)
                continue;
        }
        if (p_15.f3)
            break;
    }
    l_72 = (p_15 , (((safe_mul_func_int16_t_s_s(g_171, (((p_15.f2 |= (l_167[2] || (g_172[3] || 0L))) == g_84[0][0][0]) <= 0x44A95AFFL))) | p_14) >= 0x0BD6D02AL));
    return g_184.f0;
}



static uint8_t  func_22(int32_t  p_23, int8_t  p_24)
{ 
    uint16_t l_56 = 0x56ACL;
    union U3 l_57[2][3][5] = {{{{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L}}},{{{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L}}}};
    int16_t l_60 = 0xE4E9L;
    int i, j, k;
    l_60 = ((((l_56 != (l_57[0][1][1] , ((l_56 , ((safe_add_func_uint32_t_u_u(0xA5BDB26FL, p_24)) , l_57[0][1][1].f3)) && p_23))) != g_2) == l_57[0][1][1].f1) <= l_57[0][1][1].f2);
    for (g_48 = 0; (g_48 != 14); g_48++)
    { 
        return p_24;
    }
    return g_30.f0;
}



static int64_t  func_25(union U3  p_26, int32_t  p_27, uint8_t  p_28, uint64_t  p_29)
{ 
    int64_t l_43 = (-10L);
    int32_t l_44 = 0x67D7132CL;
    uint8_t l_45 = 0xD4L;
    int32_t l_46 = 1L;
    int16_t l_47 = 0L;
    g_2 = (!((g_30.f1 & (safe_div_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u((p_28 = p_27), 3)) , (g_48 = (g_30.f2 > (((safe_sub_func_int8_t_s_s(((((l_46 |= ((l_45 = ((((((safe_add_func_uint16_t_u_u((l_44 &= ((safe_unary_minus_func_uint32_t_u(((((safe_mul_func_int16_t_s_s((((((g_10 , g_30.f2) != p_28) , 7UL) || l_43) & p_28), g_8)) <= p_26.f3) || 0UL) >= p_28))) == l_43)), 0L)) , 65528UL) && g_8) < 0UL) && p_26.f0) & g_10)) > l_43)) == 0xADD9L) > 1UL) & l_47), p_27)) && 0xBB6E743FL) & g_30.f1)))) && g_30.f3), l_47))) & g_8));
    g_8 = (((l_44 = (safe_mod_func_int16_t_s_s((~((safe_div_func_uint16_t_u_u(p_26.f1, (safe_div_func_uint8_t_u_u((p_28 = (p_27 || p_26.f3)), ((l_46 = (-2L)) , g_2))))) & 0xB5L)), g_30.f0))) & p_26.f0) & 2L);
    return g_8;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_84[i][j][k], "g_84[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_160.f2, "g_160.f2", print_hash_value);
    transparent_crc(g_160.f3, "g_160.f3", print_hash_value);
    transparent_crc(g_160.f4, "g_160.f4", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_172[i], "g_172[i]", print_hash_value);

    }
    transparent_crc(g_184.f0, "g_184.f0", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_345.f0.f0, "g_345.f0.f0", print_hash_value);
    transparent_crc(g_345.f0.f1, "g_345.f0.f1", print_hash_value);
    transparent_crc(g_345.f0.f2, "g_345.f0.f2", print_hash_value);
    transparent_crc(g_345.f0.f3, "g_345.f0.f3", print_hash_value);
    transparent_crc(g_345.f0.f4, "g_345.f0.f4", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_362[i][j], "g_362[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
