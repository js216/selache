// SPDX-License-Identifier: MIT
// cctest_csmith_40f1d8da.c --- cctest case csmith_40f1d8da (csmith seed 1089591514)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x310feea6 */
/* @exp_ticks 0x92a5 */

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

// Options:   -s 1089591514 -o /tmp/csmith_gen_tlpr_sb6/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   const uint16_t  f1;
   const int32_t  f2;
   uint16_t  f3;
   uint8_t  f4;
   int64_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   struct S0  f1;
   int16_t  f2;
};
#pragma pack(pop)

struct S2 {
   int8_t  f0;
   const int32_t  f1;
   struct S1  f2;
   int32_t  f3;
   const int32_t  f4;
   uint8_t  f5;
   uint32_t  f6;
   int64_t  f7;
};

union U3 {
   uint64_t  f0;
};

union U4 {
   uint32_t  f0;
   const struct S0  f1;
};

union U5 {
   uint32_t  f0;
};


static uint32_t g_2 = 1UL;
static uint8_t g_41 = 0xC4L;
static union U5 g_57 = {1UL};
static int32_t g_62[7][4][3] = {{{(-1L),0x524B17E4L,0x0A5AE12EL},{0x6174F588L,0x524B17E4L,0x6174F588L},{6L,0xF2BF2F77L,0x0A5AE12EL},{6L,0x2F9381BCL,(-1L)}},{{0x6174F588L,0xF2BF2F77L,(-1L)},{(-1L),0x524B17E4L,0x0A5AE12EL},{0x6174F588L,0x524B17E4L,0x6174F588L},{6L,0xF2BF2F77L,0x0A5AE12EL}},{{6L,0x2F9381BCL,(-1L)},{0x6174F588L,0xF2BF2F77L,(-1L)},{(-1L),0x524B17E4L,0x0A5AE12EL},{0x6174F588L,0x524B17E4L,0x6174F588L}},{{6L,0xF2BF2F77L,0x0A5AE12EL},{6L,0x2F9381BCL,(-1L)},{0x6174F588L,0xF2BF2F77L,(-1L)},{(-1L),6L,0xB194E899L}},{{0x264D6F6CL,6L,0x264D6F6CL},{0x742197F4L,0x6174F588L,0xB194E899L},{0x742197F4L,(-1L),0xB4E140BDL},{0x264D6F6CL,0x6174F588L,0xB4E140BDL}},{{0xB4E140BDL,6L,0xB194E899L},{0x264D6F6CL,6L,0x264D6F6CL},{0x742197F4L,0x6174F588L,0xB194E899L},{0x742197F4L,(-1L),0xB4E140BDL}},{{0x264D6F6CL,0x6174F588L,0xB4E140BDL},{0xB4E140BDL,6L,0xB194E899L},{0x264D6F6CL,6L,0x264D6F6CL},{0x742197F4L,0x6174F588L,0xB194E899L}}};
static int16_t g_71 = 6L;
static int32_t g_73[5][1] = {{3L},{3L},{3L},{3L},{3L}};
static int32_t g_89 = 0L;
static struct S0 g_102 = {7UL,0x60A7L,1L,65534UL,0x6AL,3L};
static int8_t g_110 = 0xE2L;
static int32_t g_112[3] = {0xBC137510L,0xBC137510L,0xBC137510L};
static uint64_t g_199 = 0x019A0691BFD6407CLL;
static uint64_t *g_198 = &g_199;
static int32_t *g_230 = &g_73[2][0];
static int32_t **g_229 = &g_230;
static uint64_t g_251 = 0xC6F49F01A57ABBE9LL;
static struct S1 g_264 = {0xE37A3864E8FA73D8LL,{0x083AD0E8L,0xA90BL,0x3CE50976L,0UL,255UL,0x051D64CF66860545LL},0L};
static union U5 *g_306 = &g_57;
static union U5 **g_305[6][7] = {{&g_306,&g_306,&g_306,&g_306,&g_306,&g_306,&g_306},{&g_306,&g_306,(void*)0,&g_306,&g_306,(void*)0,&g_306},{&g_306,&g_306,&g_306,&g_306,&g_306,(void*)0,&g_306},{&g_306,&g_306,&g_306,&g_306,&g_306,&g_306,&g_306},{&g_306,&g_306,&g_306,&g_306,&g_306,&g_306,&g_306},{&g_306,&g_306,&g_306,&g_306,&g_306,&g_306,&g_306}};
static const uint64_t *g_329 = &g_199;
static const uint64_t **g_328 = &g_329;
static union U3 g_350 = {18446744073709551615UL};
static union U3 *g_351 = &g_350;
static int16_t g_370 = (-1L);
static uint32_t *g_424[5] = {&g_264.f1.f0,&g_264.f1.f0,&g_264.f1.f0,&g_264.f1.f0,&g_264.f1.f0};
static union U5 **g_437 = &g_306;
static uint32_t g_479 = 18446744073709551613UL;
static const union U5 g_515 = {0xCE1A791FL};
static uint16_t *g_536 = &g_102.f3;
static int32_t g_537 = 0x0C8675FDL;
static const int8_t *g_544[2][3][2] = {{{&g_110,&g_110},{&g_110,(void*)0},{&g_110,(void*)0}},{{(void*)0,(void*)0},{&g_110,(void*)0},{&g_110,&g_110}}};
static const int8_t **g_543 = &g_544[1][0][0];
static uint32_t g_581 = 0xD95CD0F8L;
static const uint64_t ***g_604 = &g_328;
static uint64_t ***g_610 = (void*)0;
static uint64_t ****g_609 = &g_610;
static uint64_t *g_654 = &g_350.f0;
static uint64_t ** const g_653 = &g_654;
static uint64_t ** const *g_652 = &g_653;
static union U4 g_668 = {0xF775ABB0L};
static int64_t g_700 = 0xFB5BFB2B675ECED3LL;
static struct S2 g_835 = {-9L,1L,{18446744073709551614UL,{0UL,0x65E5L,0L,0xD9FDL,0UL,1L},-6L},0xA699BB41L,0xC720AAE4L,9UL,1UL,0xB0C9B9CA917F7D72LL};
static union U5 ***g_856 = &g_437;
static union U5 ****g_855 = &g_856;
static const union U5 *g_868 = &g_515;
static const union U5 **g_867[4] = {&g_868,&g_868,&g_868,&g_868};
static union U4 *g_896 = (void*)0;
static union U4 **g_895[5][1] = {{&g_896},{&g_896},{&g_896},{&g_896},{&g_896}};
static int8_t *g_928 = &g_835.f0;
static int8_t **g_927 = &g_928;
static int8_t ***g_926 = &g_927;
static int8_t ***g_932 = &g_927;
static int64_t g_986[2][1][6] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}};
static uint32_t g_1043 = 0xC1CEAA11L;
static uint8_t g_1058 = 1UL;
static const int64_t g_1104 = 6L;
static struct S2 g_1109 = {0x58L,-1L,{18446744073709551615UL,{1UL,0xFDB3L,0xA9C8CA33L,0x4F2DL,255UL,0x9F5E7A189D82A320LL},0x36A5L},0x8006CEF9L,0x8468233BL,255UL,1UL,0xA71789220E3825A0LL};
static union U4 g_1110[1][5][6] = {{{{0xB8909E98L},{0xB8909E98L},{0x0FD2A283L},{0x346EC4DAL},{18446744073709551615UL},{0x0FD2A283L}},{{0x346EC4DAL},{18446744073709551615UL},{0x0FD2A283L},{18446744073709551615UL},{0x346EC4DAL},{0x0FD2A283L}},{{18446744073709551615UL},{0x346EC4DAL},{0x0FD2A283L},{0xB8909E98L},{0xB8909E98L},{0x0FD2A283L}},{{0xB8909E98L},{0xB8909E98L},{0x0FD2A283L},{0x346EC4DAL},{18446744073709551615UL},{0x0FD2A283L}},{{0x346EC4DAL},{18446744073709551615UL},{0x0FD2A283L},{18446744073709551615UL},{0x346EC4DAL},{0x0FD2A283L}}}};
static uint16_t **g_1112 = &g_536;
static uint32_t g_1122 = 18446744073709551615UL;
static uint32_t g_1128 = 4294967295UL;
static int64_t * const g_1280 = &g_986[1][0][1];
static int64_t * const *g_1279[6] = {&g_1280,&g_1280,&g_1280,&g_1280,&g_1280,&g_1280};
static const int32_t g_1302 = 0xABDC3A85L;
static struct S2 *g_1345[2] = {&g_1109,&g_1109};
static struct S2 **g_1344[7] = {&g_1345[0],&g_1345[0],&g_1345[0],&g_1345[0],&g_1345[0],&g_1345[0],&g_1345[0]};
static union U4 g_1356 = {18446744073709551614UL};
static uint16_t g_1445 = 0x8B3AL;
static struct S0 g_1449[5] = {{0x84BB613FL,0xB6BEL,-1L,0xD4E0L,4UL,0L},{0x84BB613FL,0xB6BEL,-1L,0xD4E0L,4UL,0L},{0x84BB613FL,0xB6BEL,-1L,0xD4E0L,4UL,0L},{0x84BB613FL,0xB6BEL,-1L,0xD4E0L,4UL,0L},{0x84BB613FL,0xB6BEL,-1L,0xD4E0L,4UL,0L}};
static uint64_t **g_1561 = &g_198;
static int16_t *g_1617 = &g_835.f2.f2;
static int16_t **g_1616 = &g_1617;
static int32_t g_1667 = (-5L);
static struct S0 **g_1974[4][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
static uint32_t g_2132 = 0x5E350D4DL;
static uint8_t g_2174[5][3][6] = {{{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL}},{{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL}},{{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL}},{{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL}},{{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL},{0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL}}};



static struct S0  func_1(void);
static uint8_t  func_3(int16_t  p_4, uint8_t  p_5, uint64_t  p_6);
static int8_t  func_10(int32_t  p_11, union U4  p_12, uint16_t  p_13);
static uint16_t  func_14(struct S1  p_15, union U5  p_16, struct S2  p_17, union U4  p_18);
static union U5  func_20(uint64_t  p_21);
static int32_t  func_24(union U5  p_25);
static union U5  func_26(const uint32_t  p_27, int8_t  p_28, int16_t  p_29, int32_t  p_30, int32_t  p_31);
static int16_t  func_32(int32_t  p_33, int64_t  p_34, struct S0  p_35);




static struct S0  func_1(void)
{ 
    struct S1 l_19 = {4UL,{7UL,0x2A22L,6L,65529UL,6UL,3L},9L};
    uint32_t *l_1041 = (void*)0;
    uint32_t *l_1042[1][6][1];
    union U4 l_1288[5][4][1] = {{{{0x5BAF7FBAL}},{{0xA1EAA3E2L}},{{0x5BAF7FBAL}},{{0xA1EAA3E2L}}},{{{0x5BAF7FBAL}},{{0xA1EAA3E2L}},{{0x5BAF7FBAL}},{{0xA1EAA3E2L}}},{{{0x5BAF7FBAL}},{{0xA1EAA3E2L}},{{0x5BAF7FBAL}},{{0xA1EAA3E2L}}},{{{0x5BAF7FBAL}},{{0xA1EAA3E2L}},{{0x5BAF7FBAL}},{{0xA1EAA3E2L}}},{{{0x5BAF7FBAL}},{{0xA1EAA3E2L}},{{0x5BAF7FBAL}},{{0xA1EAA3E2L}}}};
    int32_t l_2059 = 0xCFBD534EL;
    uint32_t l_2060 = 18446744073709551615UL;
    int32_t *l_2210 = &g_1667;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
                l_1042[i][j][k] = &g_1043;
        }
    }
    (*l_2210) |= (g_2 | (func_3(g_2, ((((+(safe_mul_func_int8_t_s_s((l_2059 ^= ((***g_926) = func_10((func_14(l_19, func_20((g_2 == (g_1043 ^= (safe_mul_func_uint16_t_u_u(((l_19.f1.f1 != 0xB4BC71F8L) >= func_24(func_26(l_19.f0, l_19.f1.f3, l_19.f1.f3, g_2, g_2))), g_835.f2.f0))))), g_1109, g_1110[0][2][5]) < g_1109.f2.f0), l_1288[4][1][0], l_19.f1.f5))), g_515.f0))) == l_19.f1.f2) <= l_2060) | 0x8E2EL), l_19.f1.f0) | (-1L)));
    return l_19.f1;
}



static uint8_t  func_3(int16_t  p_4, uint8_t  p_5, uint64_t  p_6)
{ 
    int16_t **l_2078[4] = {&g_1617,&g_1617,&g_1617,&g_1617};
    union U5 l_2087 = {0x4B2EB11CL};
    uint64_t l_2088 = 0x6CCBD7E238574A42LL;
    int32_t l_2090 = 0xE741985DL;
    int32_t l_2092 = 0x491E59B3L;
    int32_t l_2093 = 0xC715CE0CL;
    int32_t l_2096 = (-3L);
    int32_t l_2100 = 0L;
    int32_t l_2102[7][1][2] = {{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}}};
    union U4 *l_2122 = (void*)0;
    const struct S2 l_2136 = {7L,0xBAEA3968L,{18446744073709551615UL,{0xB8B03CFDL,65535UL,-9L,65535UL,248UL,0xF8B6E44D40593DDBLL},0xA56FL},1L,0x0B21617BL,7UL,0x112D293EL,0xE8C6C349E889F41DLL};
    int8_t *l_2139 = &g_1109.f0;
    uint64_t l_2168 = 0UL;
    int32_t * const l_2199[7][3][7] = {{{&g_112[2],&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0},{&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3},{&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0,(void*)0}},{{(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0},{&g_112[2],&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0},{&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3}},{{&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0,(void*)0},{(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0},{&g_112[2],&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0}},{{&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3},{&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0,(void*)0},{(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0}},{{&g_112[2],&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0},{&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3},{&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0,(void*)0}},{{(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0},{&g_112[2],&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0},{&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3,&g_112[1],&g_835.f3}},{{&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0,(void*)0},{(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0,&g_112[1],(void*)0},{&g_112[2],&g_112[2],(void*)0,(void*)0,&g_112[2],&g_112[2],(void*)0}}};
    int64_t l_2206 = 0xE082821A05D67833LL;
    int i, j, k;
    for (g_1109.f0 = 0; (g_1109.f0 <= 0); g_1109.f0 += 1)
    { 
        uint32_t l_2063 = 1UL;
        int32_t l_2098 = 0xF361C3EAL;
        int32_t l_2099[4];
        int32_t l_2131[4][5] = {{0x27EFA9FCL,0x96753ECFL,0x962A5A3BL,(-9L),0x962A5A3BL},{0x962A5A3BL,0x962A5A3BL,0xD79D4F8DL,(-9L),0L},{0x96753ECFL,0x27EFA9FCL,0x27EFA9FCL,0x96753ECFL,0x962A5A3BL},{0x96753ECFL,(-9L),(-10L),(-10L),(-9L)}};
        int8_t * const l_2143 = &g_835.f0;
        int32_t l_2150[1][3];
        int16_t **l_2164[6][3][2] = {{{(void*)0,&g_1617},{&g_1617,(void*)0},{&g_1617,&g_1617}},{{(void*)0,&g_1617},{&g_1617,&g_1617},{&g_1617,&g_1617}},{{&g_1617,(void*)0},{(void*)0,&g_1617},{&g_1617,&g_1617}},{{(void*)0,(void*)0},{&g_1617,(void*)0},{(void*)0,&g_1617}},{{&g_1617,&g_1617},{(void*)0,(void*)0},{&g_1617,&g_1617}},{{&g_1617,&g_1617},{&g_1617,&g_1617},{(void*)0,&g_1617}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2099[i] = 0xC5F45005L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_2150[i][j] = 0x37A1756AL;
        }
        for (g_89 = 0; (g_89 <= 2); g_89 += 1)
        { 
            const int32_t l_2081 = 6L;
            uint32_t *l_2089 = &g_835.f6;
            int32_t l_2094[3];
            int64_t l_2130 = (-8L);
            uint8_t l_2165 = 0xC2L;
            uint64_t l_2193 = 0x6F4DB532BB791F98LL;
            struct S2 l_2207[7] = {{-2L,0x183193CBL,{0xE5BEB337A61973A5LL,{0xA3243FA6L,0x3E14L,0x75D2A00EL,1UL,0xF5L,0x2FC27D549EE0D182LL},5L},-1L,0x87C377CFL,5UL,5UL,0xC8303945E94C0E25LL},{-2L,0x183193CBL,{0xE5BEB337A61973A5LL,{0xA3243FA6L,0x3E14L,0x75D2A00EL,1UL,0xF5L,0x2FC27D549EE0D182LL},5L},-1L,0x87C377CFL,5UL,5UL,0xC8303945E94C0E25LL},{-2L,0x183193CBL,{0xE5BEB337A61973A5LL,{0xA3243FA6L,0x3E14L,0x75D2A00EL,1UL,0xF5L,0x2FC27D549EE0D182LL},5L},-1L,0x87C377CFL,5UL,5UL,0xC8303945E94C0E25LL},{-2L,0x183193CBL,{0xE5BEB337A61973A5LL,{0xA3243FA6L,0x3E14L,0x75D2A00EL,1UL,0xF5L,0x2FC27D549EE0D182LL},5L},-1L,0x87C377CFL,5UL,5UL,0xC8303945E94C0E25LL},{-2L,0x183193CBL,{0xE5BEB337A61973A5LL,{0xA3243FA6L,0x3E14L,0x75D2A00EL,1UL,0xF5L,0x2FC27D549EE0D182LL},5L},-1L,0x87C377CFL,5UL,5UL,0xC8303945E94C0E25LL},{-2L,0x183193CBL,{0xE5BEB337A61973A5LL,{0xA3243FA6L,0x3E14L,0x75D2A00EL,1UL,0xF5L,0x2FC27D549EE0D182LL},5L},-1L,0x87C377CFL,5UL,5UL,0xC8303945E94C0E25LL},{-2L,0x183193CBL,{0xE5BEB337A61973A5LL,{0xA3243FA6L,0x3E14L,0x75D2A00EL,1UL,0xF5L,0x2FC27D549EE0D182LL},5L},-1L,0x87C377CFL,5UL,5UL,0xC8303945E94C0E25LL}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_2094[i] = (-1L);
            for (g_57.f0 = 0; (g_57.f0 <= 0); g_57.f0 += 1)
            { 
                int32_t l_2095 = 0x91206E3CL;
                int32_t l_2097 = 0x2424E4AFL;
                int32_t l_2101 = 0L;
                union U3 **l_2113 = &g_351;
                uint16_t *l_2114[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_2121 = &l_2100;
                union U4 **l_2123 = &l_2122;
                const int64_t *l_2142 = &g_986[1][0][5];
                const int64_t **l_2141[2];
                const int64_t *** const l_2140 = &l_2141[0];
                int64_t l_2151[2][1][3] = {{{0x59F5B8E8BEB173C9LL,0x59F5B8E8BEB173C9LL,0x59F5B8E8BEB173C9LL}},{{5L,5L,5L}}};
                int32_t l_2154 = 0xFB8854B2L;
                int32_t l_2155[7] = {(-6L),0x41DB2971L,(-6L),(-6L),0x41DB2971L,(-6L),(-6L)};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_2141[i] = &l_2142;
                if ((+((***g_932) = (safe_unary_minus_func_int16_t_s(g_73[(g_57.f0 + 4)][g_57.f0])))))
                { 
                    return l_2063;
                }
                else
                { 
                    uint64_t l_2086[3][3] = {{0xF943819832AA6CD6LL,0xE7694DFDF1D6039DLL,0xF943819832AA6CD6LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0xF943819832AA6CD6LL,0xE7694DFDF1D6039DLL,0xF943819832AA6CD6LL}};
                    int32_t *l_2091[4];
                    uint32_t l_2103 = 18446744073709551615UL;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_2091[i] = &g_62[4][2][1];
                    g_62[(g_89 + 3)][g_89][(g_57.f0 + 2)] = ((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((g_73[(g_89 + 1)][g_57.f0] &= (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(0x4CL, (safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((&g_1617 != l_2078[0]), g_835.f7)) != ((safe_mod_func_uint32_t_u_u(l_2081, ((((((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(p_5, (l_2087 , (**g_1616)))), 0x0E96E079L)) , l_2087.f0) == 0xFC2FD3B3L) || p_4) > (-5L)) && p_6))) < 0x7AE2L)) > p_4), p_4)), l_2087.f0)))), g_986[1][0][5]))), l_2088)) , l_2063), 13)) , &g_1122) == l_2089) , p_5);
                    l_2103--;
                    (*g_229) = (void*)0;
                }
                l_2098 &= (l_2063 && (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0xD8L, ((!0L) | (safe_mul_func_uint16_t_u_u((g_1449[1].f3 = (((*l_2113) = &g_350) == &g_350)), (0x94D4C2BEL > ((*l_2121) = (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(l_2099[1], p_6)) <= g_102.f3), 3)), 5UL))))))))), l_2102[3][0][0])));
                (*l_2123) = l_2122;
                for (l_2063 = 0; (l_2063 <= 1); l_2063 += 1)
                { 
                    int32_t l_2124[5][4] = {{0x94365B54L,0x578ED2DDL,0x578ED2DDL,0x94365B54L},{0x94365B54L,0x578ED2DDL,0x578ED2DDL,0x94365B54L},{0x94365B54L,0x578ED2DDL,0x578ED2DDL,0x94365B54L},{0x94365B54L,0x578ED2DDL,0x578ED2DDL,0x94365B54L},{0x94365B54L,0x578ED2DDL,0x578ED2DDL,0x94365B54L}};
                    int32_t *l_2125 = &l_2100;
                    int32_t *l_2126 = &l_2094[1];
                    int32_t *l_2127 = &l_2098;
                    int32_t *l_2128 = &l_2092;
                    int32_t *l_2129[1][1];
                    struct S1 l_2135 = {0x96996DD4616DB7A3LL,{0x22A571AAL,0UL,0xF1CB2617L,0x0B4AL,0x28L,0L},0xD3AFL};
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2129[i][j] = &l_2100;
                    }
                    if (l_2124[0][3])
                        break;
                    if (g_835.f1)
                        break;
                    ++g_2132;
                    (*l_2126) = ((*l_2121) = (((l_2135 , l_2136) , ((*l_2128) > ((safe_rshift_func_uint8_t_u_u((l_2139 != ((((void*)0 != l_2140) | 0xF2L) , l_2143)), 7)) >= (*l_2127)))) && l_2063));
                }
                for (g_350.f0 = 0; (g_350.f0 <= 1); g_350.f0 += 1)
                { 
                    int32_t *l_2144 = &l_2102[6][0][0];
                    int32_t *l_2145 = &l_2099[0];
                    int32_t l_2146 = 0x712B0E81L;
                    int32_t *l_2147 = &l_2131[1][2];
                    int32_t *l_2148 = &l_2099[0];
                    int32_t *l_2149[1];
                    int8_t l_2152[5] = {0x4EL,0x4EL,0x4EL,0x4EL,0x4EL};
                    int32_t l_2153[1][1];
                    uint32_t l_2156 = 0x7E725D76L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_2149[i] = &l_2101;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2153[i][j] = 0x7C61BEE3L;
                    }
                    ++l_2156;
                    l_2090 = ((+(((g_835.f2 , ((l_2094[0] != 0x71084833L) , (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((void*)0 != l_2164[4][0][1]), ((*l_2147) = p_5))), (((*g_927) != (**g_932)) , l_2130))))) < p_5) & l_2130)) & p_6);
                    l_2165++;
                    (*l_2121) &= l_2136.f2.f1.f3;
                    ++l_2168;
                }
            }
            (*g_229) = (void*)0;
            if ((l_2094[0] |= g_73[(g_1109.f0 + 1)][g_1109.f0]))
            { 
                int8_t l_2172 = 0xC4L;
                int32_t l_2173[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_2173[i] = 0x51152EC2L;
                for (l_2092 = 0; (l_2092 >= 0); l_2092 -= 1)
                { 
                    int32_t *l_2171[7][3][6] = {{{(void*)0,&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096}},{{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096}},{{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096}},{{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096}},{{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096}},{{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096}},{{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096},{&g_62[l_2092][(g_1109.f0 + 2)][g_89],&l_2096,&l_2098,(void*)0,&l_2098,&l_2096}}};
                    int i, j, k;
                    (*g_229) = &g_73[(g_89 + 1)][l_2092];
                    g_2174[4][2][2]--;
                    l_2171[3][2][3] = ((*g_229) = (void*)0);
                    g_62[1][0][1] ^= (safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((p_6 && ((safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((((p_6 != (safe_lshift_func_int8_t_s_s(((***g_932) = l_2094[0]), 6))) && 1L) & 0x57E9L) < (0x7DA7DA78L | p_6)), (*g_1617))), 0xF17D9439D0E559B5LL)), l_2165)) && p_5)) ^ l_2094[1]), 0xC1D1A849L)), g_73[g_1109.f0][g_1109.f0])) != p_5), l_2193)), (**g_653)));
                }
                return p_5;
            }
            else
            { 
                int32_t *l_2194 = &l_2100;
                (*l_2194) |= p_6;
                for (g_41 = 0; (g_41 <= 1); g_41 += 1)
                { 
                    union U3 **l_2195 = &g_351;
                    int i, j, k;
                    (*l_2195) = (void*)0;
                    if (g_62[(g_1109.f0 + 2)][(g_1109.f0 + 2)][(g_41 + 1)])
                        break;
                    return g_62[(g_1109.f0 + 5)][(g_1109.f0 + 3)][g_1109.f0];
                }
                (*l_2194) = (-2L);
                if (p_4)
                    continue;
                for (l_2093 = 0; (l_2093 <= 5); l_2093 += 1)
                { 
                    uint32_t *l_2200 = &g_1109.f2.f1.f0;
                    struct S2 l_2205 = {0x8AL,-1L,{0UL,{4294967287UL,1UL,-9L,0x7C79L,4UL,0x286DA5EDD3937629LL},3L},0xC2D9113FL,0x5217BDD0L,4UL,18446744073709551615UL,0L};
                    int32_t l_2209[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2209[i] = 0x7600CCE1L;
                    (*l_2194) = (((0L < (l_2102[6][0][1] = (safe_add_func_int16_t_s_s((0x8EA4A45BL != ((*l_2200) |= (+(l_2199[2][1][1] == &g_112[2])))), (((safe_add_func_int8_t_s_s(2L, ((l_2150[0][0] , (safe_sub_func_uint64_t_u_u(((*g_198) ^= ((l_2205 , l_2099[0]) < l_2206)), p_5))) <= 0x9DFB75C1L))) || (-5L)) > 0L))))) ^ 0xC73F9F1A1833AA3CLL) & 0x0499131ADEAFF924LL);
                    (*l_2194) &= (l_2207[0] , (+l_2209[5]));
                }
            }
        }
    }
    return g_581;
}



static int8_t  func_10(int32_t  p_11, union U4  p_12, uint16_t  p_13)
{ 
    const int32_t *l_1300 = &g_62[6][2][0];
    union U5 * const *l_1308 = &g_306;
    union U5 * const **l_1307 = &l_1308;
    int32_t l_1310[2][1];
    int32_t l_1342 = (-8L);
    int16_t *l_1352 = (void*)0;
    int16_t **l_1351 = &l_1352;
    uint16_t l_1463 = 65535UL;
    uint64_t l_1493[3];
    uint16_t l_1500[7][1];
    uint32_t l_1518 = 1UL;
    int64_t l_1529 = 0x476FD1B481521AAALL;
    uint32_t l_1578 = 0x33C4F2E8L;
    struct S1 l_1619 = {0x1F1F8B431EDB7C12LL,{0x705B2759L,4UL,0x074239D0L,0xBBBEL,0x10L,0L},0L};
    uint32_t l_1653 = 0x9E37B854L;
    uint64_t l_1668 = 0xE62937915C5983D4LL;
    union U3 *l_1672[1];
    uint32_t l_1681 = 0x9C5ADA39L;
    int8_t ***l_1697 = &g_927;
    struct S2 * const * const l_1700[1][6][2] = {{{(void*)0,&g_1345[0]},{(void*)0,(void*)0},{&g_1345[0],(void*)0},{(void*)0,&g_1345[0]},{(void*)0,(void*)0},{&g_1345[0],(void*)0}}};
    int64_t l_1720 = (-2L);
    uint8_t l_1732 = 1UL;
    int64_t l_1744 = (-7L);
    union U4 ***l_1792 = &g_895[1][0];
    uint8_t l_1798 = 0UL;
    uint32_t l_1807 = 4294967294UL;
    const int8_t l_1861 = 0xBAL;
    int64_t *l_1921 = (void*)0;
    int8_t l_1946[5][6] = {{0x7EL,0xBFL,0x7EL,0xBFL,0x7EL,0xBFL},{0x26L,0xBFL,0x26L,0xBFL,0x26L,0xBFL},{0x7EL,0xBFL,0x7EL,0xBFL,0x7EL,0xBFL},{0x26L,0xBFL,0x26L,0xBFL,0x26L,0xBFL},{0x7EL,0xBFL,0x7EL,0xBFL,0x7EL,0xBFL}};
    int16_t l_1995 = 0xB0E1L;
    int32_t l_1996 = 0x31A7A4D0L;
    int64_t l_2043 = (-1L);
    uint64_t l_2044 = 18446744073709551612UL;
    uint32_t l_2049 = 0UL;
    struct S1 *l_2058 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1310[i][j] = 0L;
    }
    for (i = 0; i < 3; i++)
        l_1493[i] = 1UL;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1500[i][j] = 0x1D40L;
    }
    for (i = 0; i < 1; i++)
        l_1672[i] = &g_350;
    for (g_71 = (-6); (g_71 == 8); g_71 = safe_add_func_int16_t_s_s(g_71, 7))
    { 
        int32_t *l_1295 = (void*)0;
        const int32_t *l_1301 = &g_1302;
        uint64_t **l_1304 = &g_654;
        union U3 *l_1328 = &g_350;
        const union U4 *l_1336[3][4] = {{&g_668,(void*)0,&g_668,(void*)0},{&g_668,(void*)0,&g_668,(void*)0},{&g_668,(void*)0,&g_668,(void*)0}};
        struct S0 l_1341 = {4294967295UL,0x4A6AL,-1L,65531UL,0x7FL,3L};
        union U5 l_1415 = {1UL};
        uint16_t l_1424 = 65534UL;
        struct S0 *l_1448 = &g_1449[1];
        int32_t l_1454 = (-4L);
        int32_t l_1455 = (-5L);
        int8_t l_1456[3][3][5] = {{{0x5CL,0x63L,1L,(-8L),1L},{1L,1L,0x4EL,(-1L),(-1L)},{1L,0xB0L,0x63L,(-1L),(-1L)}},{{(-8L),0xDDL,0xECL,0xAAL,1L},{0x03L,(-3L),(-3L),0x03L,0x4EL},{0xB0L,0x5CL,(-3L),0x63L,(-1L)}},{{0x63L,0xCEL,0xECL,(-8L),(-3L)},{0xDDL,0xB0L,0x63L,0x63L,0xB0L},{(-1L),(-1L),(-5L),0x03L,0xB0L}}};
        int32_t l_1459 = (-1L);
        int32_t l_1462 = 0x2D794177L;
        int16_t l_1494[7];
        int32_t l_1496 = 1L;
        int32_t l_1497 = 0x0654B439L;
        int32_t l_1499[1];
        int64_t l_1517 = (-2L);
        uint16_t l_1534 = 0UL;
        int32_t l_1563[3][4][5] = {{{1L,0x69FD046DL,8L,8L,0x69FD046DL},{0x1FFF299FL,0L,1L,0L,0x1FFF299FL},{0x69FD046DL,8L,8L,0x69FD046DL,1L},{0x8FD2337FL,0L,0x8FD2337FL,(-2L),0x8FD2337FL}},{{0x69FD046DL,0x69FD046DL,4L,8L,1L},{0x1FFF299FL,(-2L),1L,(-2L),0x1FFF299FL},{1L,8L,4L,0x69FD046DL,0x69FD046DL},{0x8FD2337FL,(-2L),0x8FD2337FL,0L,0x8FD2337FL}},{{1L,0x69FD046DL,8L,8L,0x69FD046DL},{0x1FFF299FL,0L,1L,0L,0x1FFF299FL},{0x69FD046DL,8L,8L,0x69FD046DL,1L},{0x8FD2337FL,0L,0x8FD2337FL,(-2L),0x8FD2337FL}}};
        int8_t l_1568 = 0xB0L;
        uint8_t l_1573 = 0xE5L;
        int32_t l_1591[7];
        int16_t **l_1603 = &l_1352;
        int32_t l_1666 = 6L;
        uint8_t l_1686 = 252UL;
        int8_t * const **l_1698[6];
        uint64_t l_1717 = 0UL;
        int64_t *l_1740 = &g_835.f2.f1.f5;
        int64_t **l_1739[7][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int64_t ***l_1738[4][2] = {{&l_1739[0][0][1],&l_1739[0][0][1]},{&l_1739[0][0][1],&l_1739[0][0][1]},{&l_1739[0][0][1],&l_1739[0][0][1]},{&l_1739[0][0][1],&l_1739[0][0][1]}};
        int16_t l_1745[2];
        int64_t l_1746 = 0L;
        struct S1 l_1757 = {0xC2AC01E45C98E270LL,{0x05F38113L,9UL,0x03FA0232L,0x7DB7L,0x56L,-1L},0L};
        uint64_t l_1821 = 18446744073709551615UL;
        uint32_t l_1844 = 0UL;
        struct S1 **l_1880 = (void*)0;
        struct S2 l_1887 = {-1L,0L,{0xEC8F600EE0E75A0FLL,{0x5B77F47EL,0xE718L,0xAA797CCEL,65526UL,0UL,0L},8L},0L,0xDE5E681EL,254UL,0x75B668B1L,0xC148FA9423574DF4LL};
        int16_t l_1892 = 4L;
        int16_t l_1893[2];
        union U3 l_1910 = {0x14417E8B6F4C6E71LL};
        struct S2 *l_1927 = &l_1887;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1494[i] = 0x3633L;
        for (i = 0; i < 1; i++)
            l_1499[i] = 1L;
        for (i = 0; i < 7; i++)
            l_1591[i] = 0x78661439L;
        for (i = 0; i < 6; i++)
            l_1698[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1745[i] = (-10L);
        for (i = 0; i < 2; i++)
            l_1893[i] = 0x0834L;
    }
    for (g_57.f0 = 0; (g_57.f0 != 56); g_57.f0 = safe_add_func_uint8_t_u_u(g_57.f0, 7))
    { 
        if (p_13)
            break;
    }
    l_2058 = l_2058;
    return p_11;
}



static uint16_t  func_14(struct S1  p_15, union U5  p_16, struct S2  p_17, union U4  p_18)
{ 
    uint16_t **l_1111 = &g_536;
    int32_t *l_1113 = &g_89;
    int32_t *l_1114 = &g_62[3][3][1];
    int32_t *l_1115 = &g_73[4][0];
    int32_t *l_1116 = (void*)0;
    int32_t *l_1117 = &g_73[2][0];
    int32_t *l_1118 = &g_73[2][0];
    int32_t *l_1119[1];
    int32_t l_1120 = 0xCC6140A7L;
    int8_t l_1121 = 1L;
    int16_t l_1127 = 6L;
    union U5 l_1129 = {0x7BE3B13EL};
    union U5 ****l_1135 = &g_856;
    int16_t l_1155 = 0xDC49L;
    int32_t l_1158 = 2L;
    uint64_t l_1200 = 6UL;
    const int32_t l_1222[6] = {1L,1L,1L,1L,1L,1L};
    uint8_t l_1285 = 0xAEL;
    int i;
    for (i = 0; i < 1; i++)
        l_1119[i] = &g_73[4][0];
    g_1112 = l_1111;
lbl_1284:
    ++g_1122;
    (*l_1114) = ((((void*)0 != &p_18) >= p_17.f2.f1.f0) , (((p_17.f2 , (l_1129 , 0xA9L)) | p_17.f7) | 0x3AL));
    for (p_17.f2.f1.f4 = (-9); (p_17.f2.f1.f4 <= 34); ++p_17.f2.f1.f4)
    { 
        uint16_t *l_1143 = &g_835.f2.f1.f3;
        uint16_t **l_1142 = &l_1143;
        int32_t l_1148 = 0xE16B34F5L;
        int32_t l_1156 = 0L;
        int32_t l_1157[6] = {6L,6L,6L,6L,6L,6L};
        int64_t *l_1198 = &g_700;
        int64_t **l_1197[1][4][4] = {{{&l_1198,(void*)0,&l_1198,(void*)0},{&l_1198,(void*)0,&l_1198,(void*)0},{&l_1198,(void*)0,&l_1198,(void*)0},{&l_1198,(void*)0,&l_1198,(void*)0}}};
        const int32_t l_1259 = (-5L);
        union U4 *l_1282 = &g_668;
        union U4 **l_1283 = &l_1282;
        int i, j, k;
        if ((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_s((l_1135 != &g_856), (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((*g_654) = ((safe_sub_func_int64_t_s_s(((****l_1135) , (((*l_1142) = ((*g_1112) = (void*)0)) == (void*)0)), ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(0x41C14D98C903BAC0LL, (***g_604))), (***g_926))) >= l_1148))) > p_17.f5)) <= 18446744073709551615UL), p_17.f2.f1.f2)), (*l_1118))))))))
        { 
            uint8_t l_1151 = 0x48L;
            (*l_1117) = (safe_lshift_func_int16_t_s_s(l_1151, p_17.f2.f0));
        }
        else
        { 
            int32_t l_1154[2];
            uint16_t l_1159 = 6UL;
            int i;
            for (i = 0; i < 2; i++)
                l_1154[i] = 0x852591EBL;
            for (g_264.f0 = (-21); (g_264.f0 != 25); g_264.f0++)
            { 
                return p_15.f1.f3;
            }
            --l_1159;
        }
        if (((((****g_855) , (((*l_1114) , (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_17.f2.f1.f0, ((safe_div_func_int8_t_s_s((((-8L) != p_17.f3) , p_15.f2), (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_17.f3, 0)), g_515.f0)))) && p_18.f0))), 6)), 1)), (***g_932)))) , (*l_1113))) & (-2L)) <= l_1157[5]))
        { 
            uint32_t l_1176 = 0UL;
            if (l_1157[2])
                break;
            l_1176++;
        }
        else
        { 
            uint32_t *l_1187[2];
            struct S2 *l_1189 = &g_1109;
            struct S2 **l_1188 = &l_1189;
            struct S2 *l_1190 = (void*)0;
            union U5 ****l_1192 = &g_856;
            int32_t l_1193 = 0x23170B34L;
            union U4 l_1201 = {18446744073709551615UL};
            uint16_t **l_1210 = &g_536;
            int32_t l_1231 = 0x64889BDFL;
            int32_t l_1234 = (-1L);
            int32_t l_1235 = (-3L);
            int32_t l_1237 = 0L;
            int32_t l_1238[3];
            int16_t l_1256 = 0x14EAL;
            int16_t l_1262 = 0xCE7FL;
            int i;
            for (i = 0; i < 2; i++)
                l_1187[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_1238[i] = 0x2DB92A82L;
            (*l_1118) = l_1157[5];
            (*g_229) = &l_1120;
            if (((((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((p_17.f1 >= (p_16.f0 = (safe_lshift_func_int16_t_s_s(0x2A4FL, 8)))), (0x0DL < ((l_1190 = ((*l_1188) = &g_1109)) == (p_18 , &g_835))))), ((safe_unary_minus_func_uint16_t_u(((l_1192 == l_1192) || p_15.f1.f4))) >= l_1157[1]))), p_17.f2.f1.f4)) <= p_17.f3) ^ l_1193) >= l_1193))
            { 
                union U5 *l_1194 = &g_57;
                (***l_1135) = l_1194;
            }
            else
            { 
                struct S2 l_1195 = {0x75L,0x0BF0659EL,{0x6E8DE37CB926CC4BLL,{2UL,2UL,0xE270AEE3L,0UL,255UL,6L},-1L},-6L,0x0CB270FCL,1UL,0x5017D730L,0xEBBD0C64438EB1A0LL};
                int16_t *l_1196 = &g_835.f2.f2;
                int64_t ***l_1199 = &l_1197[0][0][3];
                int32_t l_1228 = 0xED23426CL;
                int32_t l_1232 = 2L;
                int32_t l_1233 = (-1L);
                int32_t l_1236[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1236[i] = (-6L);
                if ((l_1195 , ((*l_1113) != (((((p_17.f6 != ((*l_1196) = 0x6A13L)) || ((((p_17.f2.f0 , (void*)0) != ((*l_1199) = l_1197[0][1][0])) , p_15.f1.f0) | l_1200)) , l_1195.f7) , 0xE0L) >= (***g_932)))))
                { 
                    uint8_t l_1202[1][4] = {{0xCBL,0xCBL,0xCBL,0xCBL}};
                    int i, j;
                    l_1202[0][0] = (l_1201 , (-1L));
                }
                else
                { 
                    int32_t *l_1207[5] = {&g_835.f3,&g_835.f3,&g_835.f3,&g_835.f3,&g_835.f3};
                    uint8_t l_1209 = 0UL;
                    uint16_t ***l_1211 = &l_1210;
                    union U4 **l_1223 = (void*)0;
                    union U4 ***l_1224 = (void*)0;
                    union U4 ***l_1225[3];
                    int32_t l_1226 = 0x4B59B3ADL;
                    int32_t l_1227[4][4][6] = {{{0L,5L,0x3FEC8238L,(-7L),0xACFC7AFBL,0xAD55A993L},{7L,0xCCB220ACL,0xC4E7CB53L,0x18A1EDB8L,0x07A0ED0EL,0xFD853BA3L},{1L,0xCCB220ACL,0xAD55A993L,1L,0xACFC7AFBL,0x0EBCA711L},{0xB19123A9L,5L,0x9FAB6578L,0L,0xAD55A993L,0x4CE18F21L}},{{7L,0x55FF1FECL,0xCCB220ACL,0xAC559950L,0xAD55A993L,0xFD853BA3L},{(-6L),5L,0x6748903AL,0xF255A977L,0xACFC7AFBL,0xCCB220ACL},{0x86961C28L,0xCCB220ACL,0x3FEC8238L,0L,0x07A0ED0EL,0x07A0ED0EL},{0x68B1C7A8L,0xCCB220ACL,0xCCB220ACL,0x68B1C7A8L,0xACFC7AFBL,0x9FAB6578L}},{{1L,5L,0x4CE18F21L,(-6L),0xAD55A993L,0x0EBCA711L},{0x86961C28L,0x55FF1FECL,0x6F88BB34L,(-7L),0xAD55A993L,0x07A0ED0EL},{0x18A1EDB8L,5L,0xC4E7CB53L,0xAC559950L,0xACFC7AFBL,0x6F88BB34L},{2L,0xCCB220ACL,0x6748903AL,(-6L),0x07A0ED0EL,0x55FF1FECL}},{{0xB19123A9L,0xCCB220ACL,0x6F88BB34L,0xB19123A9L,0xACFC7AFBL,0x4CE18F21L},{0x68B1C7A8L,5L,0x0EBCA711L,0x18A1EDB8L,0xAD55A993L,0x9FAB6578L},{2L,0x55FF1FECL,0xAD55A993L,0xF255A977L,0xAD55A993L,0x55FF1FECL},{0L,5L,0x3FEC8238L,(-7L),0xACFC7AFBL,0xAD55A993L}}};
                    int8_t l_1229 = 0x7DL;
                    int8_t l_1230[3][6] = {{0xC3L,0xC3L,0xC3L,0xC3L,0xC3L,0xC3L},{0xC3L,0xC3L,0xC3L,0xC3L,0xC3L,0xC3L},{0xC3L,0xC3L,0xC3L,0xC3L,0xC3L,0xC3L}};
                    uint64_t l_1239 = 9UL;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1225[i] = &l_1223;
                    (**g_229) = (safe_mul_func_uint16_t_u_u(((p_17.f3 = ((((*l_1198) |= (safe_add_func_int64_t_s_s(g_1043, (*g_198)))) & (**g_328)) || l_1156)) , (((safe_unary_minus_func_uint8_t_u(l_1209)) , p_17.f2) , ((((*l_1211) = l_1210) != l_1111) ^ 0x0ED3A58FL))), p_17.f2.f1.f4));
                    (***g_855) = (***l_1135);
                    (*g_230) = ((safe_sub_func_int16_t_s_s((g_264 , (safe_add_func_uint8_t_u_u(((g_895[1][0] = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint16_t_u_u(l_1222[2], p_17.f2.f1.f1)) >= (-4L)) <= (0x9DCF6216L > 0xC90FBA8AL)), 3)), 5)) , l_1223)) != &g_896), p_17.f1))), p_18.f0)) != l_1201.f0);
                    l_1239++;
                }
            }
            if ((*l_1114))
            { 
                uint32_t l_1242 = 1UL;
                l_1242++;
                return l_1238[2];
            }
            else
            { 
                uint32_t **l_1257 = &l_1187[1];
                for (l_1120 = 19; (l_1120 < 2); l_1120--)
                { 
                    uint16_t l_1249 = 65530UL;
                    union U5 l_1252 = {0xA2BBE54DL};
                    union U5 *l_1253 = &l_1252;
                    int16_t *l_1258 = &l_1155;
                    const uint16_t *l_1261 = &g_264.f1.f1;
                    const uint16_t **l_1260 = &l_1261;
                    l_1237 ^= ((((safe_rshift_func_int8_t_s_u((((*l_1258) = (((l_1249 || (safe_add_func_uint32_t_u_u(l_1238[2], (**g_229)))) >= ((&g_112[1] != (void*)0) == ((((*l_1253) = ((****l_1192) = l_1252)) , ((((*l_1117) = (((safe_rshift_func_int16_t_s_s(l_1256, g_102.f1)) || 0x7582032B4D2B2AE2LL) <= 0x9207L)) < g_1109.f0) , l_1257)) == l_1257))) | 18446744073709551607UL)) ^ g_102.f5), g_1058)) || 0x922DL) & 0x0828D2F6L) | 6L);
                    if (l_1238[0])
                        continue;
                    if (l_1259)
                        continue;
                    (*l_1117) = (&g_536 == l_1260);
                }
                (**g_229) = (l_1262 >= 0x11L);
                if (p_17.f2.f1.f3)
                    continue;
                if ((**g_229))
                    continue;
            }
            for (l_1231 = 0; (l_1231 >= 16); l_1231 = safe_add_func_int64_t_s_s(l_1231, 3))
            { 
                uint64_t l_1276[3][7][2] = {{{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL}},{{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL}}};
                int i, j, k;
                for (g_668.f0 = (-7); (g_668.f0 == 49); g_668.f0++)
                { 
                    int32_t l_1281 = 0x07F7EA2AL;
                    (*g_230) &= (((*l_1114) | ((((void*)0 == &g_835) ^ ((p_17.f1 , ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((!(safe_sub_func_int8_t_s_s(l_1276[2][4][1], (safe_lshift_func_uint16_t_u_u(p_17.f5, ((((void*)0 == g_1279[4]) < g_668.f0) ^ p_15.f2)))))), 0x13L)), p_15.f1.f2)), 0)) < (*g_928))) | l_1281)) == (*g_928))) , p_17.f1);
                    if ((**g_229))
                        continue;
                    return p_17.f2.f1.f3;
                }
            }
        }
        (*l_1283) = l_1282;
        if (p_17.f7)
            goto lbl_1284;
        --l_1285;
    }
    (*l_1115) = p_15.f1.f0;
    return p_17.f6;
}



static union U5  func_20(uint64_t  p_21)
{ 
    int32_t *l_1044 = (void*)0;
    int32_t l_1045 = (-6L);
    int32_t *l_1046 = &g_73[4][0];
    int32_t *l_1047 = &g_73[4][0];
    int32_t *l_1048 = &l_1045;
    int32_t *l_1049 = (void*)0;
    int32_t *l_1050 = &g_62[4][2][2];
    int32_t *l_1051 = &g_62[5][0][1];
    int32_t *l_1052 = (void*)0;
    int32_t *l_1053 = &g_73[4][0];
    int32_t *l_1054 = &g_62[4][2][1];
    int32_t *l_1055 = &g_62[1][0][0];
    int32_t *l_1056 = &g_62[0][2][0];
    int32_t *l_1057[3];
    struct S2 *l_1064[3];
    struct S2 **l_1063 = &l_1064[0];
    struct S2 *l_1065 = &g_835;
    int64_t *l_1079[6][3] = {{&g_835.f7,&g_986[1][0][5],&g_986[1][0][5]},{&g_835.f7,&g_986[1][0][5],&g_986[1][0][5]},{&g_835.f7,&g_986[1][0][5],&g_986[1][0][5]},{&g_835.f7,&g_986[1][0][5],&g_986[1][0][5]},{&g_835.f7,&g_986[1][0][5],&g_986[1][0][5]},{&g_835.f7,&g_986[1][0][5],&g_986[1][0][5]}};
    uint32_t *l_1080 = (void*)0;
    uint32_t *l_1081 = &g_102.f0;
    uint32_t *l_1082 = &g_835.f2.f1.f0;
    union U4 ***l_1083 = &g_895[1][0];
    int32_t l_1084 = 6L;
    uint8_t l_1105 = 7UL;
    union U5 l_1108 = {4294967295UL};
    int i, j;
    for (i = 0; i < 3; i++)
        l_1057[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1064[i] = &g_835;
    ++g_1058;
lbl_1085:
    (*g_229) = (void*)0;
    if ((safe_div_func_int8_t_s_s((((((*l_1063) = (void*)0) == l_1065) >= ((+(&g_896 != ((*l_1083) = ((safe_lshift_func_int16_t_s_u(((p_21 & (((*l_1082) = ((*l_1081) = ((((+0x93L) & (!(((*g_654)++) ^ (safe_sub_func_uint16_t_u_u(((*g_536) = (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((((*g_198) = (*l_1046)) || ((*l_1046) &= (g_102.f5 = (((*l_1065) , (*l_1050)) | 0UL)))), p_21)), 9))), p_21))))) > g_835.f6) | p_21))) != 0xABFD4922L)) , (-8L)), 3)) , (void*)0)))) <= p_21)) , p_21), (*l_1050))))
    { 
        (*l_1050) &= l_1084;
    }
    else
    { 
        union U4 l_1093 = {18446744073709551611UL};
        const int64_t *l_1103 = &g_1104;
        const int64_t **l_1102 = &l_1103;
        uint8_t *l_1106 = &g_41;
        int32_t l_1107 = (-1L);
        if (p_21)
            goto lbl_1085;
        l_1107 |= ((((p_21 , (safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((!((*l_1106) |= ((0x1BDEED0CE3A95269LL < (l_1093 , 0x1761CBB18C0F7244LL)) ^ (safe_rshift_func_int8_t_s_s((((((0UL && (safe_sub_func_int64_t_s_s(g_986[1][0][5], ((((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((((((*l_1102) = &g_986[1][0][5]) != l_1079[1][1]) <= l_1093.f0) > l_1093.f0) <= g_1104), (-8L))) , p_21), p_21)) >= g_835.f7) | p_21) < l_1093.f0)))) >= l_1105) , 1UL) , 0x12L) < l_1093.f0), 4))))) && (*l_1051)), p_21)), 5)) <= 0xD09E2642BE04B0AALL), (*g_536)))) < p_21) >= 18446744073709551614UL) , 0L);
    }
    (*l_1048) |= (p_21 , ((*l_1053) &= ((*l_1050) = (1L > 4294967288UL))));
    return l_1108;
}



static int32_t  func_24(union U5  p_25)
{ 
    int32_t *l_813 = &g_73[4][0];
    struct S2 *l_834[1][2][6] = {{{&g_835,&g_835,&g_835,&g_835,&g_835,&g_835},{&g_835,&g_835,&g_835,&g_835,&g_835,&g_835}}};
    int8_t l_842 = 3L;
    int32_t l_844[6][1] = {{0x80F29665L},{(-1L)},{0x80F29665L},{(-1L)},{0x80F29665L},{(-1L)}};
    int16_t l_849 = 0xEC81L;
    uint64_t l_850[4][6][4] = {{{0UL,1UL,0xC0045E73B2B0B0BFLL,0xD867A9251FFF74DELL},{0x096BBA874BBA7AA9LL,1UL,0xA8E137C059F411B6LL,0xC0045E73B2B0B0BFLL},{1UL,0xB570E8F627F1834ELL,0xA8E137C059F411B6LL,0xA8E137C059F411B6LL},{0x096BBA874BBA7AA9LL,0x096BBA874BBA7AA9LL,0xC0045E73B2B0B0BFLL,0xA8E137C059F411B6LL},{0UL,0xB570E8F627F1834ELL,0xD867A9251FFF74DELL,0xC0045E73B2B0B0BFLL},{0UL,1UL,0xC0045E73B2B0B0BFLL,0xD867A9251FFF74DELL}},{{0x096BBA874BBA7AA9LL,1UL,0xA8E137C059F411B6LL,0xC0045E73B2B0B0BFLL},{1UL,0xB570E8F627F1834ELL,0xA8E137C059F411B6LL,0xA8E137C059F411B6LL},{0x096BBA874BBA7AA9LL,0x096BBA874BBA7AA9LL,0xC0045E73B2B0B0BFLL,0xA8E137C059F411B6LL},{0UL,0xB570E8F627F1834ELL,0xD867A9251FFF74DELL,0xC0045E73B2B0B0BFLL},{0UL,1UL,0xC0045E73B2B0B0BFLL,0xD867A9251FFF74DELL},{0x096BBA874BBA7AA9LL,1UL,0xA8E137C059F411B6LL,0xC0045E73B2B0B0BFLL}},{{1UL,0xB570E8F627F1834ELL,0xA8E137C059F411B6LL,0xA8E137C059F411B6LL},{0x096BBA874BBA7AA9LL,0x096BBA874BBA7AA9LL,0xC0045E73B2B0B0BFLL,0xA8E137C059F411B6LL},{0UL,0xB570E8F627F1834ELL,0xD867A9251FFF74DELL,0xC0045E73B2B0B0BFLL},{0UL,1UL,0xC0045E73B2B0B0BFLL,0xD867A9251FFF74DELL},{0x096BBA874BBA7AA9LL,1UL,0xA8E137C059F411B6LL,0xC0045E73B2B0B0BFLL},{1UL,0xB570E8F627F1834ELL,0xA8E137C059F411B6LL,0xA8E137C059F411B6LL}},{{0x096BBA874BBA7AA9LL,0x096BBA874BBA7AA9LL,0xC0045E73B2B0B0BFLL,0xA8E137C059F411B6LL},{0UL,0xB570E8F627F1834ELL,0xD867A9251FFF74DELL,0xC0045E73B2B0B0BFLL},{0UL,1UL,0xC0045E73B2B0B0BFLL,0xD867A9251FFF74DELL},{0x096BBA874BBA7AA9LL,1UL,0xA8E137C059F411B6LL,0xC0045E73B2B0B0BFLL},{1UL,0xB570E8F627F1834ELL,0xA8E137C059F411B6LL,0xA8E137C059F411B6LL},{0x096BBA874BBA7AA9LL,0x096BBA874BBA7AA9LL,0xC0045E73B2B0B0BFLL,0xA8E137C059F411B6LL}}};
    struct S0 l_870 = {1UL,0x0321L,1L,0xA9FCL,0x41L,-7L};
    int8_t l_915 = (-8L);
    const union U3 l_923[3][2] = {{{0UL},{18446744073709551615UL}},{{0UL},{0UL}},{{18446744073709551615UL},{0UL}}};
    int8_t ***l_930[7][5][5] = {{{(void*)0,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,(void*)0},{&g_927,&g_927,&g_927,(void*)0,(void*)0},{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,(void*)0,&g_927}},{{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,(void*)0,&g_927,(void*)0},{&g_927,&g_927,&g_927,&g_927,(void*)0},{&g_927,&g_927,&g_927,(void*)0,&g_927},{&g_927,&g_927,&g_927,(void*)0,&g_927}},{{(void*)0,&g_927,&g_927,&g_927,&g_927},{(void*)0,&g_927,(void*)0,&g_927,(void*)0},{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927}},{{(void*)0,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927},{(void*)0,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927}},{{&g_927,&g_927,&g_927,(void*)0,(void*)0},{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,(void*)0,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,(void*)0},{&g_927,&g_927,&g_927,&g_927,&g_927}},{{&g_927,&g_927,&g_927,&g_927,(void*)0},{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927},{(void*)0,&g_927,&g_927,&g_927,(void*)0},{&g_927,&g_927,&g_927,&g_927,&g_927}},{{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927},{(void*)0,&g_927,&g_927,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927,&g_927}}};
    int8_t l_942 = (-1L);
    uint32_t l_987 = 2UL;
    uint64_t * const *l_993 = &g_654;
    uint8_t l_1008[7] = {0x90L,0x0FL,0x90L,0x90L,0x0FL,0x90L,0x90L};
    uint32_t l_1021 = 4294967295UL;
    union U3 l_1032 = {0x3AFD2417BFEB144DLL};
    int i, j, k;
    if (((void*)0 == &p_25))
    { 
        int32_t **l_814 = &l_813;
        (*l_814) = ((*g_229) = l_813);
        return (*l_813);
    }
    else
    { 
        uint64_t l_819 = 18446744073709551613UL;
        int32_t l_845 = (-1L);
        int32_t l_846 = 0xC7EF89A1L;
        int32_t l_847 = (-5L);
        int32_t l_848[4][7][4] = {{{0L,0x3C9927D1L,1L,0xE68AE68BL},{0x803B72F0L,0x6EF112C1L,0xF62203ECL,0x5E56D6F8L},{0xCBD3E36DL,0x2BADB5C4L,0L,0xD98E1725L},{0xCBD3E36DL,(-5L),0xF62203ECL,(-1L)},{0x803B72F0L,0xD98E1725L,1L,0x7B653F05L},{0L,(-3L),(-1L),0x3D90803FL},{0x3C9927D1L,(-1L),0xBB70717EL,0x60A8BF31L}},{{0x55F2113BL,0L,0L,1L},{1L,1L,0x7B653F05L,0x803B72F0L},{0xBB70717EL,0x4A5B3368L,0x60A8BF31L,0x545E234BL},{(-1L),0x55F2113BL,0x25A15370L,(-5L)},{1L,0xE68AE68BL,0xE68AE68BL,1L},{0x25A15370L,1L,0x6EF112C1L,(-1L)},{0xDDB216A7L,1L,0L,0x6A32B9A1L}},{{(-3L),0L,0x4A5B3368L,0x6A32B9A1L},{0x7B653F05L,1L,0x2BADB5C4L,(-1L)},{1L,1L,0x5E56D6F8L,1L},{(-6L),0xE68AE68BL,0xDDB216A7L,(-5L)},{1L,0x55F2113BL,0xCBD3E36DL,0x545E234BL},{0x8487D9BEL,0x4A5B3368L,0xD8B318B6L,0x803B72F0L},{0xC5CEB42BL,1L,(-1L),1L}},{{0xE68AE68BL,0L,0L,0x25A15370L},{0x6A32B9A1L,(-4L),5L,0x3C9927D1L},{0x3C9927D1L,0L,0x3C9927D1L,1L},{0x2BADB5C4L,1L,1L,0xB3474B8EL},{0L,0xAE0D0749L,0L,1L},{0xB3474B8EL,(-6L),0L,0x803B72F0L},{0L,0xCBD3E36DL,1L,0x60A8BF31L}}};
        union U5 ****l_859 = &g_856;
        uint32_t l_886 = 1UL;
        int8_t ***l_931[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_943 = 0x9D13BE3DL;
        union U4 *l_952[2];
        uint64_t **l_990 = &g_198;
        struct S0 l_997 = {8UL,0x556DL,0x05500A26L,7UL,0x22L,-3L};
        int64_t l_1027 = 0x81A1B86A593E2649LL;
        uint64_t l_1038 = 0x5F8363089256FED2LL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_952[i] = &g_668;
        for (g_57.f0 = 15; (g_57.f0 > 16); g_57.f0 = safe_add_func_int8_t_s_s(g_57.f0, 6))
        { 
            uint32_t *l_820 = &g_264.f1.f0;
            int32_t l_830 = (-10L);
            int32_t *l_843[4][5][1] = {{{&g_62[4][2][1]},{&g_73[0][0]},{(void*)0},{(void*)0},{&g_73[0][0]}},{{&g_62[4][2][1]},{&g_73[0][0]},{(void*)0},{(void*)0},{&g_73[0][0]}},{{&g_62[4][2][1]},{&g_73[0][0]},{(void*)0},{(void*)0},{&g_73[0][0]}},{{&g_62[4][2][1]},{&g_73[0][0]},{(void*)0},{(void*)0},{&g_73[0][0]}}};
            union U5 ** const l_871 = &g_306;
            int64_t l_965 = 0xA55AB72FE1CBFCFCLL;
            uint32_t l_966 = 0UL;
            int16_t *l_981 = &g_71;
            uint64_t ***l_991[7][7] = {{&l_990,&l_990,(void*)0,(void*)0,&l_990,&l_990,&l_990},{&l_990,&l_990,(void*)0,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,(void*)0},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990}};
            uint64_t **l_992[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            if ((safe_lshift_func_int16_t_s_u((l_819 ^ ((*l_820) = 0x4213ADECL)), 10)))
            { 
                for (g_479 = 0; (g_479 <= 2); g_479 += 1)
                { 
                    int32_t *l_831 = &g_62[3][2][2];
                    int i;
                    (*l_831) ^= (g_112[g_479] == (((safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((p_25.f0 == (p_25 , (safe_sub_func_int8_t_s_s(((void*)0 != &g_306), (~p_25.f0))))), l_830)), p_25.f0)) > (*l_813)), p_25.f0)) == (-1L)) <= p_25.f0));
                }
            }
            else
            { 
                int8_t ***l_837 = (void*)0;
                if (g_89)
                    break;
                for (g_668.f0 = 24; (g_668.f0 == 8); g_668.f0--)
                { 
                    struct S2 **l_836 = &l_834[0][0][0];
                    int8_t ****l_838 = (void*)0;
                    int64_t *l_840 = &g_835.f7;
                    int64_t **l_839 = &l_840;
                    int32_t l_841[6] = {0x5B7DFA77L,0x5B7DFA77L,0x5B7DFA77L,0x5B7DFA77L,0x5B7DFA77L,0x5B7DFA77L};
                    int i;
                    l_834[0][0][5] = l_834[0][0][0];
                    (*l_836) = &g_835;
                    (*l_813) = (((l_837 = l_837) == (void*)0) == (((*l_839) = &g_700) == (void*)0));
                    l_841[3] = l_830;
                }
            }
            l_850[3][5][0]--;
            for (g_537 = 0; (g_537 == (-1)); g_537 = safe_sub_func_int16_t_s_s(g_537, 4))
            { 
                int8_t *l_862 = &g_835.f0;
                const union U5 ***l_869 = &g_867[1];
                int32_t l_880[1][1][2];
                uint8_t l_883 = 0x51L;
                int32_t l_914 = 6L;
                uint32_t l_916 = 18446744073709551610UL;
                int16_t *l_953 = (void*)0;
                int16_t *l_954 = &g_71;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_880[i][j][k] = (-1L);
                    }
                }
                (*l_813) = (((**g_653) = (g_855 == ((((*g_198)--) & 0xFF493B8BF6FE9639LL) , l_859))) > (safe_add_func_int8_t_s_s(0x96L, ((*l_862) = 1L))));
                if (((((*l_813) <= (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((*l_869) = g_867[3]) == (l_870 , l_871)), (safe_sub_func_int32_t_s_s(((((g_110 = 0xFAL) > ((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(l_880[0][0][1], (safe_sub_func_int32_t_s_s(((251UL == 255UL) && l_883), 0xA191AAA5L)))) , l_819), 0x06L)), g_835.f4)) <= p_25.f0)) && 0x2A62DC0806FCC2A4LL) > 0x04F65D31C71D4751LL), p_25.f0)))), l_848[1][3][1]))) == l_880[0][0][1]) != 0xB3L))
                { 
                    int64_t l_884[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                    int32_t l_885[4];
                    uint8_t *l_897 = &g_41;
                    uint8_t *l_900 = &g_835.f2.f1.f4;
                    int16_t *l_913 = &g_264.f2;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_885[i] = 0x96E5BC03L;
                    (*l_813) = ((p_25.f0 , p_25.f0) | (*l_813));
                    --l_886;
                    (*l_813) = (((*l_862) = (18446744073709551615UL && p_25.f0)) > ((safe_mod_func_int16_t_s_s((((void*)0 != g_895[1][0]) && ((((*l_897)--) | ((((*l_900)--) != ((p_25 , (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((*g_536), ((*l_913) = (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_880[0][0][0], (*g_536))), 0x8A9CL)), 0x91L))))) , 0UL) || (*l_813)), (*l_813)))) && p_25.f0)) | p_25.f0)) >= l_885[3])), (*g_536))) != l_884[5]));
                    --l_916;
                }
                else
                { 
                    (*g_229) = (void*)0;
                    if ((*l_813))
                        break;
                    if (p_25.f0)
                        break;
                }
                for (g_581 = 19; (g_581 == 53); ++g_581)
                { 
                    int8_t ****l_929[1];
                    int32_t l_933[4] = {0x05B74ACAL,0x05B74ACAL,0x05B74ACAL,0x05B74ACAL};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_929[i] = &g_926;
                    (*l_813) = ((safe_add_func_uint16_t_u_u((((l_923[2][0] , (0UL | ((p_25.f0 | (safe_lshift_func_uint8_t_u_s(((((*g_536) && g_835.f2.f1.f4) , (((l_931[5] = (l_930[2][2][0] = g_926)) != (g_932 = &g_927)) <= (-1L))) && l_848[0][4][3]), (**g_927)))) > (*g_536)))) <= 0x1FL) | l_933[2]), 65535UL)) | l_846);
                    l_933[0] ^= (safe_mod_func_int64_t_s_s(((!(((+0xA7L) && (((safe_mul_func_int8_t_s_s(0x67L, 0x0AL)) >= g_71) | (*g_329))) == (safe_rshift_func_int8_t_s_s((*l_813), (l_845 = (*l_813)))))) != 1L), (**g_653)));
                    l_943++;
                    return p_25.f0;
                }
                if ((safe_div_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(((*g_654) = (safe_div_func_int16_t_s_s(g_73[0][0], (l_943 | (p_25.f0 != (l_952[0] != ((((g_264.f2 = ((*l_954) = g_479)) & (safe_add_func_int64_t_s_s(((l_914 = ((safe_add_func_uint16_t_u_u(7UL, (safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((*l_813), 4294967294UL)), 0x72FCE3BEFB4C9BDCLL)), l_916)))) ^ 1L)) , g_370), l_880[0][0][1]))) < l_847) , (void*)0))))))), p_25.f0)) , l_965) || l_966), 0x93L)))
                { 
                    (*l_813) |= (p_25.f0 < (safe_div_func_uint64_t_u_u((&g_71 == &g_370), g_112[1])));
                }
                else
                { 
                    return (*l_813);
                }
                if (l_847)
                    break;
            }
            l_987 = ((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((4294967294UL || l_943), p_25.f0)), ((safe_div_func_int32_t_s_s(((*l_813) = (safe_rshift_func_int8_t_s_u(((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((*l_981) ^= (0xAF299673L >= (-8L))) == (((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((*g_654) &= 0xEC7877D0ABF06BADLL) | ((void*)0 != &l_886)), p_25.f0)), 0L)) < 1UL) >= 0L) ^ (*l_813)) == p_25.f0)), 5)) < 0xA0F4L), p_25.f0)) | (*l_813)) > g_835.f1) > 0x20E1019828384B3CLL), g_73[2][0]))), p_25.f0)) | g_986[1][0][5]))) | 0x7BBE27AAL);
            (*l_813) = (safe_sub_func_int64_t_s_s(((l_992[3] = l_990) == l_993), l_819));
        }
        if (p_25.f0)
        { 
            int32_t l_994 = (-1L);
            int32_t l_1006 = (-4L);
            (*l_813) ^= 0x513E8C23L;
            for (g_835.f2.f1.f0 = 0; (g_835.f2.f1.f0 <= 0); g_835.f2.f1.f0 += 1)
            { 
                uint16_t *l_998[3][4] = {{&l_997.f3,&l_997.f3,&l_997.f3,&l_997.f3},{&l_997.f3,&l_997.f3,&l_997.f3,&l_997.f3},{&l_997.f3,&l_997.f3,&l_997.f3,&l_997.f3}};
                int32_t l_1003 = 0x047807FAL;
                int64_t *l_1005 = &g_986[1][0][5];
                int i, j;
                (*l_813) = ((((++(*g_536)) , l_997) , ((*l_813) <= ((l_848[1][1][0] ^= (*g_536)) , ((safe_mul_func_uint16_t_u_u((l_1006 ^= (safe_sub_func_uint64_t_u_u((l_1003 > (~((((*l_1005) &= (&g_652 == &g_610)) & (0xAEL >= p_25.f0)) != (*g_536)))), p_25.f0))), l_1003)) >= 0xE6L)))) & p_25.f0);
                for (g_370 = 0; (g_370 <= 0); g_370 += 1)
                { 
                    int32_t *l_1007[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    l_1003 |= g_73[g_835.f2.f1.f0][g_370];
                    if (l_1008[4])
                        break;
                }
            }
            (*g_229) = &g_73[4][0];
        }
        else
        { 
            int64_t l_1009 = 0xFD3906B507A4A142LL;
            int32_t l_1011[4];
            int8_t **l_1039 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_1011[i] = 1L;
            for (l_997.f5 = 0; (l_997.f5 >= 0); l_997.f5 -= 1)
            { 
                int32_t *l_1010[4][3] = {{&l_848[0][4][3],&g_89,(void*)0},{&g_73[4][0],&g_89,&g_73[4][0]},{&l_846,&l_848[0][4][3],(void*)0},{&l_846,&l_846,&l_848[0][4][3]}};
                uint32_t l_1012 = 18446744073709551606UL;
                union U4 l_1024 = {18446744073709551609UL};
                int i, j;
                --l_1012;
                if (p_25.f0)
                { 
                    l_847 &= ((p_25.f0 != (safe_lshift_func_int16_t_s_u((l_1009 | g_835.f6), (+(safe_mul_func_uint8_t_u_u(l_997.f2, ((*l_813) <= 7UL))))))) , (p_25.f0 >= l_1011[1]));
                }
                else
                { 
                    union U3 **l_1020 = &g_351;
                    (*l_1020) = &g_350;
                }
                ++l_1021;
                l_1011[3] = (((l_1024 , ((*g_536) = (p_25.f0 <= ((((safe_mul_func_uint8_t_u_u((p_25.f0 , l_1009), (l_1027 <= (safe_rshift_func_int16_t_s_u(g_102.f2, 12))))) | l_1027) < p_25.f0) > g_264.f1.f3)))) , g_102.f0) & 0xC004L);
                for (g_102.f3 = 0; (g_102.f3 <= 4); g_102.f3 += 1)
                { 
                    uint16_t *l_1033[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1033[i] = &g_835.f2.f1.f3;
                    g_73[g_102.f3][l_997.f5] = (((g_264.f1.f3 ^= (l_844[(l_997.f5 + 4)][l_997.f5] > (safe_add_func_int64_t_s_s((l_1032 , p_25.f0), 5UL)))) && (((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(65535UL, p_25.f0)) | l_1038), p_25.f0)) & l_844[(l_997.f5 + 4)][l_997.f5]) ^ 0x5FB6A87E59CADF2FLL)) < p_25.f0);
                    if (l_844[(l_997.f5 + 4)][l_997.f5])
                        continue;
                }
                for (g_102.f3 = 0; (g_102.f3 <= 0); g_102.f3 += 1)
                { 
                    int32_t l_1040 = 2L;
                    int i, j;
                    l_1039 = (*g_932);
                    if (p_25.f0)
                        break;
                    l_1040 = (l_1011[1] |= (((**g_927) |= (-1L)) || ((*l_813) = 0x05L)));
                    if (p_25.f0)
                        continue;
                }
            }
            return p_25.f0;
        }
        return (*l_813);
    }
}



static union U5  func_26(const uint32_t  p_27, int8_t  p_28, int16_t  p_29, int32_t  p_30, int32_t  p_31)
{ 
    uint8_t *l_40 = &g_41;
    uint64_t l_46 = 0x4759719BD9535F44LL;
    int32_t l_47 = 5L;
    struct S1 l_54[6] = {{0x7CF8314CD5900A0DLL,{2UL,1UL,0xBB1CA982L,1UL,0xACL,0x07D3F149C99C4DB7LL},0xD5EAL},{0x3BB3FD4231368DE6LL,{0x7DABF261L,65530UL,1L,65533UL,0x3FL,0x0E8981CC384641B4LL},0x4191L},{0x3BB3FD4231368DE6LL,{0x7DABF261L,65530UL,1L,65533UL,0x3FL,0x0E8981CC384641B4LL},0x4191L},{0x7CF8314CD5900A0DLL,{2UL,1UL,0xBB1CA982L,1UL,0xACL,0x07D3F149C99C4DB7LL},0xD5EAL},{0x3BB3FD4231368DE6LL,{0x7DABF261L,65530UL,1L,65533UL,0x3FL,0x0E8981CC384641B4LL},0x4191L},{0x3BB3FD4231368DE6LL,{0x7DABF261L,65530UL,1L,65533UL,0x3FL,0x0E8981CC384641B4LL},0x4191L}};
    union U5 *l_58[7][1] = {{&g_57},{(void*)0},{&g_57},{&g_57},{(void*)0},{&g_57},{&g_57}};
    uint32_t l_59 = 0UL;
    int16_t l_60 = 0x8087L;
    int32_t l_314 = (-1L);
    int32_t l_315[5];
    int32_t l_316[6][2][5] = {{{0x9A82928BL,0x965924FAL,0x4FDAC93FL,(-6L),0x965924FAL},{(-4L),0x53151024L,0x53151024L,(-4L),0xE6E84EF8L}},{{0xBCD08625L,(-3L),0xDCC9D1F3L,0x965924FAL,0x965924FAL},{(-1L),(-4L),(-1L),0xE6E84EF8L,(-4L)}},{{0x965924FAL,0x4FDAC93FL,0x2F3FED44L,0x9A82928BL,0x2F3FED44L},{(-1L),(-1L),7L,0x53151024L,0xE6E84EF8L}},{{0xFEC3AA49L,(-6L),0x2F3FED44L,0x2F3FED44L,(-6L)},{0xE6E84EF8L,0L,0x30242473L,0xE6E84EF8L,8L}},{{0x4FDAC93FL,(-6L),0x965924FAL,(-6L),0x4FDAC93FL},{0x30242473L,(-1L),0L,8L,(-1L)}},{{0x4FDAC93FL,0xDCC9D1F3L,0xDCC9D1F3L,0x4FDAC93FL,0x2F3FED44L},{0xE6E84EF8L,0x53151024L,7L,(-1L),(-1L)}}};
    uint64_t **l_331 = &g_198;
    uint8_t l_346 = 7UL;
    union U3 *l_390 = &g_350;
    const struct S0 l_393 = {1UL,0x3EF6L,0x9EF7A292L,65527UL,254UL,0L};
    int8_t *l_451 = &g_110;
    uint16_t *l_501[3][2];
    uint32_t l_502 = 0x7313A646L;
    uint32_t *l_507 = &l_502;
    const union U5 *l_514 = &g_515;
    const union U5 **l_513 = &l_514;
    const union U5 ***l_512 = &l_513;
    int8_t l_516 = 0x0FL;
    uint32_t l_568 = 1UL;
    int32_t l_571[1];
    int32_t l_574 = 0x8D578629L;
    int32_t l_575[2][6] = {{0xB4423E05L,0L,0xD0EC20C5L,0xD0EC20C5L,0L,0xB4423E05L},{0x7D209EFCL,0xB4423E05L,0xD0EC20C5L,0xB4423E05L,0x7D209EFCL,0x7D209EFCL}};
    uint64_t ***l_608 = (void*)0;
    uint64_t *** const *l_607 = &l_608;
    int64_t *l_646 = &g_264.f1.f5;
    int32_t *l_708 = &g_62[4][2][1];
    int32_t l_758 = (-10L);
    union U5 *l_812 = &g_57;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_315[i] = 1L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_501[i][j] = &g_264.f1.f3;
    }
    for (i = 0; i < 1; i++)
        l_571[i] = 0xB2B6C3E2L;
lbl_598:
    if (((func_32((safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((p_28 > (g_2 , (((((*l_40)++) && (safe_add_func_int32_t_s_s((l_47 = l_46), (safe_mul_func_int8_t_s_s((g_41 & (safe_add_func_int16_t_s_s(p_29, ((((safe_add_func_int8_t_s_s(((l_54[4] , (safe_mul_func_uint16_t_u_u((((g_57 = g_57) , g_41) != 0x32E4B48400EC8613LL), l_46))) < l_59), l_60)) <= 0x884ACF1AFC50B836LL) & 0x8473L) & g_2)))), p_28))))) || 65529UL) | 0xA80BABE52BDABF61LL))), 65535UL)) ^ l_54[4].f1.f0), p_27)), p_29, l_54[4].f1) != (-1L)) <= l_46))
    { 
        int64_t *l_299 = (void*)0;
        struct S2 l_300 = {4L,-7L,{0x6D4CB8C442F112EALL,{4294967295UL,2UL,-5L,65535UL,0UL,7L},0xB524L},0x30BABF0FL,-2L,251UL,0x3BC8424BL,9L};
        union U5 **l_302 = &l_58[3][0];
        union U5 ***l_301 = &l_302;
        union U5 **l_304 = &l_58[1][0];
        union U5 ***l_303[5][3][5] = {{{&l_304,&l_304,&l_304,&l_304,(void*)0},{(void*)0,&l_304,(void*)0,&l_304,(void*)0},{&l_304,&l_304,(void*)0,&l_304,(void*)0}},{{&l_304,&l_304,&l_304,&l_304,&l_304},{(void*)0,&l_304,(void*)0,&l_304,&l_304},{(void*)0,&l_304,(void*)0,&l_304,(void*)0}},{{(void*)0,&l_304,&l_304,&l_304,&l_304},{&l_304,&l_304,&l_304,&l_304,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0}},{{(void*)0,&l_304,(void*)0,&l_304,(void*)0},{&l_304,&l_304,(void*)0,&l_304,(void*)0},{&l_304,&l_304,&l_304,&l_304,&l_304}},{{(void*)0,&l_304,(void*)0,&l_304,&l_304},{(void*)0,&l_304,(void*)0,&l_304,(void*)0},{(void*)0,&l_304,&l_304,&l_304,&l_304}}};
        int i, j, k;
        (*g_230) |= ((void*)0 == l_299);
        (*l_301) = (l_300 , &l_58[0][0]);
        g_305[5][0] = ((*l_301) = (void*)0);
    }
    else
    { 
        int32_t *l_307 = (void*)0;
        int32_t *l_308 = &g_89;
        int32_t l_309 = 8L;
        int32_t *l_310 = &g_62[4][2][1];
        int32_t *l_311 = &g_73[1][0];
        int32_t *l_312 = &g_89;
        int32_t *l_313[1][4] = {{&g_62[1][1][1],&g_62[1][1][1],&g_62[1][1][1],&g_62[1][1][1]}};
        int64_t l_317[2][6][1] = {{{0x92C59360F6C6BBA7LL},{0xBD2DCFC4E1886731LL},{0xBD2DCFC4E1886731LL},{0x92C59360F6C6BBA7LL},{0x71A72BC70C73C10BLL},{0x92C59360F6C6BBA7LL}},{{0xBD2DCFC4E1886731LL},{0xBD2DCFC4E1886731LL},{0x92C59360F6C6BBA7LL},{0x71A72BC70C73C10BLL},{0x92C59360F6C6BBA7LL},{0xBD2DCFC4E1886731LL}}};
        uint8_t l_318 = 253UL;
        const uint64_t ***l_330 = &g_328;
        int8_t **l_358[4][1];
        union U5 l_361 = {4294967295UL};
        uint64_t * const *l_411[6];
        struct S1 l_474 = {0x6E47BAEFC43FAABFLL,{0UL,1UL,-5L,0x8893L,255UL,0L},-9L};
        uint64_t *l_482 = &l_46;
        int32_t l_489 = (-1L);
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_358[i][j] = (void*)0;
        }
        for (i = 0; i < 6; i++)
            l_411[i] = &g_198;
        l_318++;
lbl_440:
        if ((+((safe_lshift_func_uint16_t_u_s(((*g_230) > ((0xA5L <= ((*l_40) = 246UL)) ^ ((safe_mul_func_uint16_t_u_u(g_251, (g_62[3][1][2] && (((*l_330) = ((safe_rshift_func_int16_t_s_s(((((((0xCDC2L == 0x23A4L) & l_54[4].f0) && p_27) || 0xA440L) , 0UL) == p_28), 0)) , g_328)) == l_331)))) > p_27))), g_264.f1.f4)) | g_264.f1.f3)))
        { 
            int8_t l_332 = (-7L);
            int32_t l_337 = 0x8F548980L;
            int32_t l_338 = 0xCD8A67D6L;
            int16_t l_340 = 0x842FL;
            int32_t l_341 = 0L;
            int32_t l_344 = 0L;
            int32_t l_345 = (-1L);
            int64_t l_364 = 0xFF9E340C84714396LL;
            int32_t l_365 = 1L;
            int32_t l_366[5] = {0L,0L,0L,0L,0L};
            uint32_t l_367 = 0UL;
            uint8_t l_372 = 254UL;
            const union U5 *** const l_391[1][2] = {{(void*)0,(void*)0}};
            int i, j;
            for (g_264.f1.f3 = 0; (g_264.f1.f3 <= 5); g_264.f1.f3 += 1)
            { 
                uint32_t l_333[6] = {0x61073AF7L,0x61073AF7L,0x61073AF7L,0x61073AF7L,0x61073AF7L,0x61073AF7L};
                int32_t l_336 = (-2L);
                int32_t l_339 = 1L;
                int32_t l_343[6][6] = {{0x53F9CA32L,0x1103E7F6L,0x1103E7F6L,0x53F9CA32L,8L,(-1L)},{1L,0x1103E7F6L,8L,1L,8L,0x1103E7F6L},{0L,0x1103E7F6L,(-1L),0L,8L,8L},{0x53F9CA32L,0x1103E7F6L,0x1103E7F6L,0x53F9CA32L,8L,(-1L)},{1L,0x1103E7F6L,8L,1L,8L,0x1103E7F6L},{0L,0x1103E7F6L,(-1L),0L,8L,8L}};
                union U3 *l_349 = &g_350;
                int i, j;
                for (l_309 = 4; (l_309 >= 0); l_309 -= 1)
                { 
                    int i;
                    ++l_333[2];
                }
                for (l_46 = 0; (l_46 <= 0); l_46 += 1)
                { 
                    int32_t l_342[2][4][2] = {{{0x008B9A37L,0x6F5BC233L},{0x008B9A37L,0x008B9A37L},{0x008B9A37L,0x6F5BC233L},{0x008B9A37L,0x008B9A37L}},{{0x008B9A37L,0x6F5BC233L},{0x008B9A37L,0x008B9A37L},{0x008B9A37L,0x6F5BC233L},{0x008B9A37L,0x008B9A37L}}};
                    int i, j, k;
                    (*g_229) = &l_315[(l_46 + 3)];
                    l_346++;
                    if (g_73[l_46][l_46])
                        continue;
                    l_314 = ((*l_310) = g_73[(l_46 + 1)][l_46]);
                    g_351 = l_349;
                }
            }
            (*g_230) = (*l_312);
            if ((safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u(p_31, ((*l_308) = (safe_mod_func_int8_t_s_s(((((l_54[4].f1 , (((void*)0 == l_358[3][0]) || ((safe_add_func_int16_t_s_s((((l_361 , (void*)0) != (void*)0) < p_27), p_28)) < 4294967295UL))) | 8L) & g_102.f4) > p_29), p_27))))), 0x56CE3BF7D173D7CDLL)))
            { 
                int32_t l_362 = 1L;
                int32_t l_363[7];
                int64_t l_371 = 1L;
                int i;
                for (i = 0; i < 7; i++)
                    l_363[i] = (-7L);
                l_367++;
                l_372--;
            }
            else
            { 
                union U3 l_385 = {18446744073709551610UL};
                const struct S2 l_392 = {-5L,0x9AE047A6L,{0x2C7930D901CA7996LL,{0x6BD4BF20L,65535UL,0x7826DB5FL,65533UL,0x31L,0x930865CBF7AA0F46LL},0xCD95L},0x2BA5CD0CL,0x69FC8382L,252UL,0x5D013DC9L,0x10007B915148D11ALL};
                const uint64_t l_402 = 0xE8D76CCA4387986DLL;
                union U5 l_413 = {0x45C5069FL};
                l_344 |= ((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((p_29 | ((*g_351) , (((safe_sub_func_int8_t_s_s(l_365, (safe_sub_func_uint16_t_u_u((9L <= (l_385 , (-6L))), g_112[1])))) ^ l_385.f0) != p_31))) , g_112[2]), g_41)), l_385.f0)), (*g_329))) && l_385.f0);
                if (((p_28 = (safe_sub_func_uint8_t_u_u((0xB8L >= 0UL), (g_329 != (g_264.f0 , &l_317[1][4][0]))))) ^ (l_341 = ((*l_40)--))))
                { 
                    int16_t l_409 = 0x00BDL;
                    uint64_t * const **l_412 = &l_411[4];
                    (*l_312) = ((*g_230) = (&g_350 == l_390));
                    (*l_312) ^= (((g_199 || ((*l_40) &= g_370)) <= (((l_391[0][0] != ((l_392 , l_393) , &g_305[5][0])) | (l_341 = (((safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((0L >= l_332), p_27)) >= l_367), 1L)) > p_31) & (**g_229)))) != 4294967295UL)) < 0x68DA110E9B71C1F9LL);
                    (**g_229) ^= (safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((l_402 > l_392.f7), (0x22D44E61L > ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(4294967295UL, (safe_lshift_func_uint8_t_u_s((g_264.f2 != l_409), 5)))), (p_28 = ((~(((*l_412) = l_411[5]) == &g_329)) > p_30)))) > (*l_312))))), g_57.f0));
                }
                else
                { 
                    return l_361;
                }
                return l_413;
            }
        }
        else
        { 
            uint32_t **l_423 = (void*)0;
            uint32_t *l_425 = (void*)0;
            uint32_t *l_426[1][3][3];
            int32_t l_427[7] = {1L,0xF3B1FA37L,1L,1L,0xF3B1FA37L,1L,1L};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_426[i][j][k] = &g_264.f1.f0;
                }
            }
            (*g_229) = &p_31;
            (**g_229) = ((*l_311) = (safe_mul_func_uint8_t_u_u((((l_393 , (safe_rshift_func_int8_t_s_s(((*l_310) = (p_28 = (l_54[4].f2 <= (safe_mul_func_uint16_t_u_u((!(((((g_102.f0 &= (((safe_rshift_func_uint8_t_u_u((((*g_230) || (**g_229)) <= p_28), 2)) > 1UL) == ((g_424[0] = l_313[0][1]) == (void*)0))) & (**g_229)) < p_31) > g_264.f1.f5) ^ l_393.f1)), l_427[5]))))), p_27))) != p_30) >= g_264.f1.f5), l_427[6])));
        }
        for (g_102.f4 = 1; (g_102.f4 <= 5); g_102.f4 += 1)
        { 
            union U4 l_434 = {0xF1351027L};
            union U3 *l_436 = &g_350;
            int16_t *l_438 = (void*)0;
            int32_t l_439 = 0xC5DF6208L;
            uint16_t l_462 = 0x67FFL;
            uint32_t l_463 = 0xE926624CL;
            (*g_230) ^= (((l_439 = (safe_add_func_int64_t_s_s(g_199, (safe_div_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((l_434 , (~(&g_350 != l_436))), ((*l_40) &= (l_393.f1 ^ ((*l_310) >= (&g_306 != g_437)))))), 1L))))) , (-1L)) || g_110);
            for (g_102.f0 = 0; (g_102.f0 <= 5); g_102.f0 += 1)
            { 
                int8_t *l_450 = &g_110;
                int32_t l_461[4][2] = {{0x4F5CCC9CL,0x50FB7AA3L},{0x4F5CCC9CL,0x50FB7AA3L},{0x4F5CCC9CL,0x50FB7AA3L},{0x4F5CCC9CL,0x50FB7AA3L}};
                int i, j;
                if (p_27)
                    goto lbl_440;
                for (l_314 = 0; (l_314 <= 4); l_314 += 1)
                { 
                    union U5 ***l_443 = (void*)0;
                    union U5 ****l_442 = &l_443;
                    uint16_t *l_452[4] = {&g_264.f1.f3,&g_264.f1.f3,&g_264.f1.f3,&g_264.f1.f3};
                    int32_t l_453 = 0x78E7F567L;
                    int i, j;
                    (*l_311) = (l_462 = (+((*g_198) |= (l_439 = ((&g_305[g_102.f4][g_102.f4] == ((*l_442) = &g_305[5][0])) != ((safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((l_453 = ((-2L) > (&g_110 != (l_451 = l_450)))) || (!(safe_add_func_int64_t_s_s((g_102.f5 = ((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((g_264.f1 , (0UL && g_102.f2)), 11)), g_370)) <= 9UL)), l_434.f0)))), g_102.f0)), p_31)) && g_264.f1.f1) ^ g_102.f4), g_350.f0)) && l_461[3][1]))))));
                    l_463--;
                    (*l_308) = (l_316[3][0][0] = ((safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((((safe_lshift_func_uint8_t_u_u(((8L >= (((l_474 , (safe_mul_func_int16_t_s_s((l_54[4].f2 , ((safe_add_func_int16_t_s_s(1L, 0xFD9FL)) | p_30)), p_28))) & 0x99A4L) == g_62[4][2][1])) <= 0x6CL), 3)) || p_27) <= (*l_310)) && 0UL), 0UL)) && l_453), g_479)) < p_30));
                }
                (*l_312) &= (((safe_div_func_uint16_t_u_u(((l_482 = (void*)0) == (**l_330)), (g_264.f1.f0 && (65526UL >= ((((safe_div_func_uint32_t_u_u(((g_102.f3 & ((((*l_311) = ((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*g_230), 1L)), l_461[3][1])) && (**g_229))) & l_489) <= g_102.f4)) ^ p_30), g_199)) ^ (**g_328)) , l_461[3][1]) < l_461[0][0]))))) != 0UL) && l_54[4].f0);
            }
        }
    }
    if ((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((*g_198) = l_393.f0), ((safe_unary_minus_func_int8_t_s(0xE0L)) | ((((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(p_30, (((l_502 = (&l_315[4] == (void*)0)) , ((((g_264.f1.f3--) & ((safe_mod_func_uint32_t_u_u(((*l_507)++), (safe_lshift_func_int16_t_s_u((((g_112[1] , (((((*g_306) = (*g_306)) , l_54[4].f2) <= p_28) && p_29)) , (void*)0) != l_512), 6)))) < l_54[4].f1.f0)) | g_264.f1.f2) | p_28)) ^ l_516))), 5)) > g_350.f0) > (*g_230)) == l_46)))), g_264.f1.f2)))
    { 
        uint64_t l_517 = 18446744073709551609UL;
        uint64_t ***l_522 = (void*)0;
        uint64_t ****l_523 = &l_522;
        int16_t *l_524 = &g_370;
        int32_t l_527 = 1L;
        union U5 * const *l_532 = (void*)0;
        int32_t *l_533 = &l_316[3][0][0];
        int32_t l_558 = 4L;
        int32_t l_560[5][2][4] = {{{1L,1L,0xDE5A5934L,1L},{1L,0x8261DEF3L,0x8261DEF3L,1L}},{{0x8261DEF3L,1L,0x8261DEF3L,0x8261DEF3L},{1L,1L,0xDE5A5934L,1L}},{{1L,0x8261DEF3L,0x8261DEF3L,1L},{0x8261DEF3L,1L,0x8261DEF3L,0x8261DEF3L}},{{1L,1L,0xDE5A5934L,1L},{1L,0x8261DEF3L,0x8261DEF3L,1L}},{{0x8261DEF3L,1L,0x8261DEF3L,0x8261DEF3L},{1L,1L,0xDE5A5934L,1L}}};
        union U3 l_642 = {18446744073709551608UL};
        const uint16_t l_643 = 0xBD38L;
        uint32_t l_644 = 0xB13FEF8FL;
        union U5 *l_687 = &g_57;
        int32_t l_698[4] = {0x6CB0EB87L,0x6CB0EB87L,0x6CB0EB87L,0x6CB0EB87L};
        union U4 l_699 = {0x093A7507L};
        uint32_t l_727 = 2UL;
        int64_t *l_743 = &g_264.f1.f5;
        uint64_t l_745 = 0x31BC077FDBF57D18LL;
        int16_t l_768 = 1L;
        uint32_t l_810[2][2][7] = {{{0x132A2E04L,0x9A6B4043L,0x132A2E04L,18446744073709551615UL,1UL,1UL,18446744073709551615UL},{1UL,9UL,1UL,8UL,1UL,1UL,8UL}},{{0x132A2E04L,0x9A6B4043L,0x132A2E04L,18446744073709551615UL,1UL,1UL,18446744073709551615UL},{1UL,9UL,1UL,8UL,1UL,1UL,8UL}}};
        int i, j, k;
lbl_759:
        (*g_230) &= l_517;
        l_47 = (((*l_533) |= ((safe_lshift_func_int8_t_s_u(((l_60 && (safe_mod_func_int8_t_s_s((p_28 ^= (&g_328 == ((*l_523) = l_522))), (((((*l_524) = g_264.f1.f1) , ((**g_229) = ((g_102.f3 |= (safe_mod_func_uint16_t_u_u(((l_527 |= (&g_328 != (void*)0)) , (safe_add_func_uint64_t_u_u(((((safe_rshift_func_int16_t_s_u(p_31, 15)) <= l_527) , &g_306) == l_532), 0x17373DED3B7A3D3DLL))), g_264.f1.f3))) && l_517))) >= l_54[4].f0) , g_2)))) & l_517), g_264.f0)) != (*g_329))) , 0x47C85CA4L);
        for (l_46 = 8; (l_46 != 8); l_46 = safe_add_func_uint16_t_u_u(l_46, 5))
        { 
            int8_t l_542 = (-1L);
            const int8_t ***l_545 = &g_543;
            const int8_t **l_547 = &g_544[0][0][0];
            const int8_t ***l_546 = &l_547;
            int32_t l_556 = 0x62EECE4EL;
            int32_t l_557 = (-1L);
            int32_t l_559 = 0xA43802D7L;
            int32_t l_562 = 1L;
            int32_t l_563 = (-5L);
            int32_t l_565 = (-6L);
            int32_t l_567 = 0x40136ABDL;
            int32_t l_576 = 0xA10388F1L;
            int32_t l_578 = (-2L);
            int32_t l_580 = 5L;
            int32_t l_614 = 7L;
            uint64_t ***l_651 = &l_331;
            int16_t l_676 = 5L;
            union U3 l_691 = {18446744073709551615UL};
            int64_t **l_744[7] = {&l_743,&l_743,&l_743,&l_743,&l_743,&l_743,&l_743};
            int32_t l_769 = (-10L);
            int i;
            if (((((g_536 == g_536) >= l_393.f4) , (g_264.f1.f4 , (((*l_546) = ((*l_545) = ((8L < ((g_537 != (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(p_29, l_542)), 3))) | 0xFA9FA14F0D45F8FFLL)) , g_543))) != (void*)0))) == l_542))
            { 
                int32_t l_561 = 0xCE4497C1L;
                int32_t l_564 = 8L;
                int32_t l_566 = 0xD0475A97L;
                int32_t l_572[5] = {0x3EDD73FAL,0x3EDD73FAL,0x3EDD73FAL,0x3EDD73FAL,0x3EDD73FAL};
                int8_t l_573[1][4][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
                struct S2 l_588 = {0L,0xC18668CFL,{4UL,{0x48890E3EL,1UL,0L,65535UL,0x19L,8L},-3L},0xBE25D5FAL,0xEB137EDFL,0x61L,0x9F0A87C4L,0x10639965EF151134LL};
                const uint64_t ****l_605 = &g_604;
                union U4 l_611 = {0x0205EEA9L};
                uint8_t l_615[2][6] = {{0x04L,2UL,0x04L,2UL,0x04L,2UL},{0x04L,2UL,0x04L,2UL,0x04L,2UL}};
                int16_t *l_645 = &l_54[4].f2;
                uint64_t l_704 = 0xDFBD50065DE730CCLL;
                union U5 l_707 = {0x96252406L};
                int i, j, k;
                for (g_370 = (-10); (g_370 >= 16); g_370 = safe_add_func_uint8_t_u_u(g_370, 2))
                { 
                    int32_t *l_550 = &l_316[3][1][0];
                    int32_t *l_551 = &l_316[3][0][0];
                    int32_t *l_552 = &g_73[1][0];
                    int32_t *l_553 = &l_316[2][0][4];
                    int32_t *l_554 = &g_89;
                    int32_t *l_555[6] = {&l_316[3][0][0],(void*)0,&l_316[3][0][0],&l_316[3][0][0],(void*)0,&l_316[3][0][0]};
                    int32_t l_577 = 0x636C6DA1L;
                    int32_t l_579[1][5][5] = {{{0xD31B911FL,0x9BA5A1BDL,0x9BA5A1BDL,0xD31B911FL,0L},{0xD31B911FL,0x9BA5A1BDL,0x9BA5A1BDL,0xD31B911FL,0L},{0xD31B911FL,0x9BA5A1BDL,0x9BA5A1BDL,0xD31B911FL,0L},{0xD31B911FL,0x9BA5A1BDL,0x9BA5A1BDL,0xD31B911FL,0L},{0xD31B911FL,0x9BA5A1BDL,0x9BA5A1BDL,0xD31B911FL,0L}}};
                    struct S1 l_596[1] = {{0x98989A3F0BAD560BLL,{5UL,65528UL,0xCA0DD434L,7UL,255UL,0xA1C399E6739ED8E9LL},0x62F2L}};
                    uint16_t *l_597 = &l_588.f2.f1.f3;
                    int i, j, k;
                    ++l_568;
                    g_581++;
                    (*l_552) |= (((*l_451) = (safe_div_func_uint8_t_u_u((2L || (safe_div_func_uint8_t_u_u(((*l_40) &= (((((l_588 , ((safe_mul_func_uint8_t_u_u((((l_578 >= (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((((*g_351) , l_596[0]) , (((l_597 = g_536) == l_524) | p_31)) ^ 1L))), (*l_533))), 0xC21A5350L))) , (*l_550)) || l_588.f6), 0L)) > 0xBAL)) ^ g_370) || l_559) == (*l_550)) || p_29)), (*l_533)))), (*l_554)))) != l_588.f2.f1.f4);
                }
                if (l_502)
                    goto lbl_598;
                if ((((safe_add_func_int32_t_s_s((+l_572[2]), 0L)) || g_62[0][0][1]) > (safe_mul_func_uint8_t_u_u(g_370, (((**l_331) = (((((((*l_605) = g_604) != ((((safe_unary_minus_func_int16_t_s(l_588.f2.f1.f3)) , l_607) == g_609) , (*g_609))) || 9L) == l_556) , l_611) , 0xF545366B95CB8CB1LL)) == 6UL)))))
                { 
                    (*g_230) |= (-10L);
                    (*l_533) = (*g_230);
                }
                else
                { 
                    int32_t *l_612 = &l_575[0][4];
                    int32_t *l_613[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_613[i] = (void*)0;
                    l_615[0][1]++;
                    (*g_229) = &p_31;
                    (*g_230) = (**g_229);
                    (*l_533) = (safe_add_func_uint8_t_u_u((((1UL || (l_567 = p_30)) == (safe_sub_func_int32_t_s_s((**g_229), p_27))) & ((*l_451) |= (((((**g_437) = (**g_437)) , ((safe_unary_minus_func_int32_t_s((**g_229))) , (safe_div_func_uint32_t_u_u((g_102.f0 >= (*l_612)), p_27)))) , p_29) == 1UL))), p_28));
                    l_315[0] &= (*g_230);
                }
                if ((safe_mul_func_int8_t_s_s((p_27 > (((((*l_645) |= (safe_mul_func_int8_t_s_s(((*l_451) = ((safe_rshift_func_uint8_t_u_u(p_28, 5)) > (((*g_536) = (g_537 , 5UL)) > 0xAED4L))), (safe_rshift_func_uint8_t_u_s((!((*g_198)--)), (safe_div_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(((*l_507) = ((l_580 ^= ((safe_div_func_int8_t_s_s((p_28 > (((l_642 , p_27) & l_643) != g_370)), l_644)) < 1L)) ^ p_28)), (**g_229))) || g_479) <= p_29), 0x30L))))))) , l_556) , g_329) == l_646)), l_559)))
                { 
                    struct S0 l_659 = {0x5658D76CL,0x1F50L,0x92DBAA5DL,0x6F11L,0xC4L,-1L};
                    struct S2 *l_661 = &l_588;
                    struct S2 **l_660 = &l_661;
                    union U4 *l_678[3][3] = {{&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668}};
                    union U4 **l_677 = &l_678[2][0];
                    int i, j;
                    (*l_533) = ((*g_230) ^= (safe_div_func_uint16_t_u_u(0xA2FBL, (safe_mul_func_int8_t_s_s(((g_102 , l_651) == (g_652 = (void*)0)), (safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((*l_533), (&g_610 == &g_610))) || (*g_198)) > (**g_653)), p_29)))))));
                    (*l_660) = (l_659 , (void*)0);
                    (*l_677) = (((((*l_533) &= p_31) == (((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((-1L), (g_668 , (-1L)))), (((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((!(p_27 , p_27)), 12)) || g_57.f0) , p_27), 3UL)) <= (*g_230)), (-7L))) , l_615[0][1]) == p_29))) == 4294967295UL), (*g_536))) > 65528UL) >= 0x25B8FFF9L)) == l_676) , (void*)0);
                    (*g_230) = ((0x51EE4F7F99062D12LL <= (4294967290UL || (((0x2EL >= ((*l_451) |= (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u((g_264.f2 , (((safe_mul_func_uint16_t_u_u((l_687 == ((*g_437) = (*g_437))), (~((safe_mod_func_uint32_t_u_u(l_659.f1, (**g_229))) < p_30)))) , l_691) , 0x42DB026F36FF1C06LL)), (***g_604))) | p_28) <= (-10L)), l_588.f2.f2)) && 9UL), 0x96AAL)))) | (*l_533)) && (**g_653)))) >= 0x9AL);
                }
                else
                { 
                    int32_t *l_692[3][5] = {{&l_567,&l_559,&l_559,&l_567,&l_559},{&l_314,&l_314,&g_73[0][0],&l_314,&l_314},{&l_559,&l_567,&l_527,&l_527,&l_559}};
                    uint16_t l_693 = 0x1107L;
                    uint32_t l_701 = 18446744073709551608UL;
                    int i, j;
                    ++l_693;
                    if (g_199)
                        goto lbl_598;
                    (*g_230) = ((p_31 < (!(safe_unary_minus_func_int32_t_s(((g_264.f2 >= l_698[1]) , ((*g_536) , (*g_230))))))) ^ ((l_699 , (***l_605)) == (void*)0));
                    l_701--;
                    ++l_704;
                }
                l_708 = (l_707 , &p_31);
            }
            else
            { 
                uint32_t l_720 = 0xFE9559D0L;
                int32_t *l_725 = &l_567;
                int32_t *l_726[7][6] = {{&l_527,&g_62[4][2][1],&l_571[0],&l_315[0],&l_571[0],&l_576},{&l_574,&l_571[0],(void*)0,&l_315[0],&l_527,&l_527},{&l_527,(void*)0,(void*)0,&l_527,&l_562,&l_558},{&l_565,&l_574,&l_576,(void*)0,(void*)0,&l_575[0][4]},{&l_575[0][0],&l_315[0],&l_562,&l_562,(void*)0,&g_62[4][2][1]},{&l_562,&l_574,&l_527,&l_574,&l_562,&l_562},{&l_562,(void*)0,&l_580,&l_558,&l_527,&l_575[0][0]}};
                int i, j;
                l_708 = &p_31;
                l_557 = (safe_div_func_int64_t_s_s(g_350.f0, ((*l_708) = (**g_653))));
                for (g_700 = 0; (g_700 <= 2); g_700 += 1)
                { 
                    int8_t l_715 = (-3L);
                    (**g_229) = ((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((*l_646) = (l_715 > ((safe_mod_func_uint32_t_u_u(1UL, 0xEA4940ABL)) <= ((*g_198) & (((safe_div_func_int8_t_s_s(((l_720 > ((safe_lshift_func_int8_t_s_s((p_29 != (safe_sub_func_uint64_t_u_u(0x50C1EABC7AE49571LL, (*l_708)))), p_31)) && p_31)) && 9L), p_28)) <= 0xD978L) > p_28))))), p_27)), l_715)) > g_350.f0);
                }
                l_727--;
                (*g_229) = (*g_229);
            }
            if ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(g_264.f1.f5)) <= (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((*l_524) = l_557), 8)) , ((*l_40) = (safe_sub_func_int16_t_s_s(((*l_524) |= (((**g_604) == (l_54[4].f1 , (**l_651))) > (safe_lshift_func_int8_t_s_u((((*l_533) = (((l_646 = l_743) == (void*)0) != (*g_230))) & l_562), 3)))), g_264.f1.f3)))), 0))), l_565)), p_30)))
            { 
                if (p_27)
                { 
                    (*g_229) = &l_574;
                    if (l_745)
                        continue;
                }
                else
                { 
                    g_62[4][2][1] &= ((0L >= (*l_533)) == (l_758 = ((*l_646) = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((--(*l_40)), 3)), ((safe_mod_func_int64_t_s_s(0xF51F2C0ED54AA304LL, (*l_533))) ^ (-1L)))) <= (((+p_31) || (~(p_27 != p_30))) != g_110)))));
                    (*g_230) = (*g_230);
                    if ((**g_229))
                        break;
                    return (*l_514);
                }
                return (**l_513);
            }
            else
            { 
                const uint64_t ***l_760[4] = {&g_328,&g_328,&g_328,&g_328};
                const uint64_t ****l_761 = (void*)0;
                uint64_t **l_764 = &g_198;
                int32_t l_766 = 0x08CFC792L;
                int32_t l_770 = (-1L);
                int32_t l_771 = 0L;
                int32_t l_772 = 0x431EE317L;
                int16_t l_773 = 0xD76FL;
                int16_t l_774 = 0x8A85L;
                int32_t l_775[4] = {(-1L),(-1L),(-1L),(-1L)};
                uint32_t l_776 = 8UL;
                union U4 l_789 = {6UL};
                uint16_t l_803 = 1UL;
                union U5 l_806[6][6][4] = {{{{4294967286UL},{0x9E1631BBL},{4294967286UL},{7UL}},{{0x34FC2BBCL},{0x6A17AE77L},{4294967286UL},{9UL}},{{4294967286UL},{9UL},{4UL},{0x6A17AE77L}},{{0x34FC2BBCL},{7UL},{4UL},{0x9E1631BBL}},{{4294967286UL},{0xDEF52EB9L},{4294967286UL},{0x8DB9517FL}},{{0x34FC2BBCL},{0x2E3C760BL},{4294967286UL},{0x9E4A0748L}}},{{{4294967286UL},{0x9E4A0748L},{4UL},{0x2E3C760BL}},{{0x34FC2BBCL},{0x8DB9517FL},{4UL},{0xDEF52EB9L}},{{4294967286UL},{0x9E1631BBL},{4294967286UL},{7UL}},{{0x34FC2BBCL},{0x6A17AE77L},{4294967286UL},{9UL}},{{4294967286UL},{9UL},{4UL},{0x6A17AE77L}},{{0x34FC2BBCL},{7UL},{4UL},{0x9E1631BBL}}},{{{4294967286UL},{0xDEF52EB9L},{4294967286UL},{0x8DB9517FL}},{{0x34FC2BBCL},{0x2E3C760BL},{4294967286UL},{0x9E4A0748L}},{{4294967286UL},{0x9E4A0748L},{4UL},{0x2E3C760BL}},{{0x34FC2BBCL},{0x8DB9517FL},{4UL},{0xDEF52EB9L}},{{4294967286UL},{0x9E1631BBL},{4294967286UL},{7UL}},{{0x34FC2BBCL},{0x6A17AE77L},{4294967286UL},{9UL}}},{{{4294967286UL},{9UL},{4UL},{0x6A17AE77L}},{{0x34FC2BBCL},{7UL},{4UL},{0x9E1631BBL}},{{4294967286UL},{0xDEF52EB9L},{4294967286UL},{0x8DB9517FL}},{{0x34FC2BBCL},{0x2E3C760BL},{4294967286UL},{0x9E4A0748L}},{{4294967286UL},{0x9E4A0748L},{4UL},{0x2E3C760BL}},{{0x34FC2BBCL},{0x8DB9517FL},{4UL},{0xDEF52EB9L}}},{{{4294967286UL},{0x9E1631BBL},{4294967286UL},{7UL}},{{0x34FC2BBCL},{0x6A17AE77L},{4294967286UL},{9UL}},{{4294967286UL},{9UL},{4UL},{0x6A17AE77L}},{{0x34FC2BBCL},{7UL},{4UL},{0x9E1631BBL}},{{4294967286UL},{0xDEF52EB9L},{4294967286UL},{0x8DB9517FL}},{{0x34FC2BBCL},{0x2E3C760BL},{4294967286UL},{0x9E4A0748L}}},{{{4294967286UL},{0x9E4A0748L},{4UL},{0x2E3C760BL}},{{0x34FC2BBCL},{0x8DB9517FL},{4UL},{0xDEF52EB9L}},{{4294967286UL},{0x9E1631BBL},{4294967286UL},{7UL}},{{0x34FC2BBCL},{0x6A17AE77L},{4294967286UL},{9UL}},{{4294967286UL},{9UL},{4UL},{0x6A17AE77L}},{{0x34FC2BBCL},{7UL},{4UL},{0x9E1631BBL}}}};
                int i, j, k;
                if (g_102.f3)
                    goto lbl_759;
                if (((*l_390) , (((*g_609) = l_651) != (g_604 = l_760[2]))))
                { 
                    int32_t *l_765 = &l_560[0][0][1];
                    int32_t *l_767[6] = {&g_62[4][1][0],&g_62[4][1][0],&l_47,&g_62[4][1][0],&g_62[4][1][0],&l_47};
                    int i;
                    l_562 = ((*l_708) = ((*l_533) <= ((l_764 == (void*)0) != (l_651 == ((*l_523) = (*l_523))))));
                    ++l_776;
                    (*l_765) |= (l_772 &= (safe_mul_func_int8_t_s_s((((((0xFF6BL ^ (*l_533)) == ((safe_lshift_func_int16_t_s_u((-2L), ((safe_sub_func_uint64_t_u_u(((((((*g_230) = ((g_351 = &g_350) != ((((((*l_646) = ((safe_div_func_uint8_t_u_u(p_29, (((*l_40) = (((g_102.f4 <= (safe_div_func_uint16_t_u_u(((*g_536) = (p_27 < p_27)), g_112[1]))) > p_29) == (-10L))) | l_580))) && 0x1BL)) >= 0x3E0726CCF6599B0CLL) , l_789) , 0UL) , (void*)0))) , g_62[3][2][0]) && p_29) != l_773) == l_775[2]), 0xA2F207B58DEEC9C5LL)) <= p_27))) > 0x20D4871DL)) , 0x7EFC2EC477E78AEBLL) | g_264.f1.f1) | (*l_533)), p_28)));
                }
                else
                { 
                    int32_t *l_790 = &l_772;
                    int32_t *l_791 = (void*)0;
                    int32_t *l_792 = &l_571[0];
                    int32_t *l_793 = &l_527;
                    int32_t *l_794 = &l_315[0];
                    int32_t *l_795 = (void*)0;
                    int32_t *l_796 = &l_315[0];
                    int32_t *l_797 = (void*)0;
                    int32_t *l_798 = &l_567;
                    int32_t *l_799 = &l_565;
                    int32_t *l_800 = &l_580;
                    int32_t *l_801 = &l_559;
                    int32_t *l_802[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_802[i][j] = &l_560[0][0][1];
                    }
                    l_803--;
                    return l_806[0][3][1];
                }
                (*l_708) = (((*g_536) = (*g_536)) & ((g_264.f1 , (!(safe_lshift_func_int16_t_s_u(((*l_533) , ((1L | (*g_230)) == ((((*l_507) &= 9UL) | (l_774 || l_810[1][0][5])) == 0x92E6L))), 13)))) == p_27));
            }
        }
    }
    else
    { 
        union U5 l_811[7][6] = {{{0x5A4FC2D3L},{0x5A4FC2D3L},{0xE731F28DL},{0xB4CD1EF7L},{0xFA757870L},{0xB4CD1EF7L}},{{1UL},{0x5A4FC2D3L},{1UL},{4294967286UL},{0xE731F28DL},{0xE731F28DL}},{{1UL},{1UL},{1UL},{1UL},{0x5A4FC2D3L},{0xB4CD1EF7L}},{{0xB4CD1EF7L},{1UL},{0xE731F28DL},{1UL},{0xB4CD1EF7L},{4294967286UL}},{{1UL},{0xB4CD1EF7L},{4294967286UL},{4294967286UL},{0xB4CD1EF7L},{1UL}},{{1UL},{1UL},{0x5A4FC2D3L},{0xB4CD1EF7L},{0x5A4FC2D3L},{1UL}},{{0x5A4FC2D3L},{1UL},{4294967286UL},{0xE731F28DL},{0xE731F28DL},{4294967286UL}}};
        int i, j;
        return l_811[4][0];
    }
    (*l_513) = ((*g_437) = l_812);
    return (**l_513);
}



static int16_t  func_32(int32_t  p_33, int64_t  p_34, struct S0  p_35)
{ 
    int32_t * const l_61 = &g_62[4][2][1];
    int32_t **l_63 = (void*)0;
    int32_t *l_65 = &g_62[3][0][0];
    int32_t **l_64 = &l_65;
    union U5 *l_66 = &g_57;
    uint32_t *l_67[7][1] = {{&g_57.f0},{&g_57.f0},{&g_57.f0},{&g_57.f0},{&g_57.f0},{&g_57.f0},{&g_57.f0}};
    struct S1 l_70[1][4][4] = {{{{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL}},{{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL}},{{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL}},{{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL},{0x233F3924104B6A6BLL,{4294967292UL,9UL,1L,0UL,0x0FL,0x23F9BE956BE94C56LL},0x68EFL}}}};
    int32_t *l_72 = &g_73[4][0];
    uint8_t *l_90 = (void*)0;
    uint16_t l_178[7][5][1] = {{{0xAF03L},{65528UL},{0xAF03L},{0xB4DCL},{2UL}},{{65528UL},{2UL},{0xB4DCL},{0xAF03L},{65528UL}},{{0xAF03L},{0xB4DCL},{2UL},{65528UL},{2UL}},{{0xB4DCL},{0xAF03L},{65528UL},{0xAF03L},{0xB4DCL}},{{2UL},{65528UL},{2UL},{0xB4DCL},{0xAF03L}},{{65528UL},{0xAF03L},{0xB4DCL},{2UL},{65528UL}},{{2UL},{0xB4DCL},{0xAF03L},{65528UL},{0xAF03L}}};
    uint64_t *l_225 = &g_199;
    int32_t l_284 = 4L;
    int32_t l_287 = 1L;
    uint8_t l_290 = 8UL;
    int i, j, k;
    (*l_64) = l_61;
    (*l_64) = &g_62[4][0][2];
    (*l_72) ^= (((l_66 != l_66) == ((((g_62[1][0][2] && ((*l_64) == (*l_64))) == (++p_35.f0)) , g_2) && ((l_70[0][2][0] , 4L) < g_57.f0))) | g_71);
    for (p_33 = 0; (p_33 < 19); p_33 = safe_add_func_uint8_t_u_u(p_33, 1))
    { 
        int16_t l_86 = (-10L);
        int32_t *l_87 = (void*)0;
        int32_t *l_88 = &g_89;
        int8_t *l_121 = &g_110;
        int32_t l_138 = (-5L);
        uint64_t *l_197 = &l_70[0][2][0].f0;
        uint32_t l_271 = 0x395F33A8L;
        int32_t l_285[7] = {1L,1L,1L,1L,1L,1L,1L};
        int i;
    }
    return (*l_65);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_62[i][j][k], "g_62[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_73[i][j], "g_73[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_102.f2, "g_102.f2", print_hash_value);
    transparent_crc(g_102.f3, "g_102.f3", print_hash_value);
    transparent_crc(g_102.f4, "g_102.f4", print_hash_value);
    transparent_crc(g_102.f5, "g_102.f5", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);

    }
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_264.f0, "g_264.f0", print_hash_value);
    transparent_crc(g_264.f1.f0, "g_264.f1.f0", print_hash_value);
    transparent_crc(g_264.f1.f1, "g_264.f1.f1", print_hash_value);
    transparent_crc(g_264.f1.f2, "g_264.f1.f2", print_hash_value);
    transparent_crc(g_264.f1.f3, "g_264.f1.f3", print_hash_value);
    transparent_crc(g_264.f1.f4, "g_264.f1.f4", print_hash_value);
    transparent_crc(g_264.f1.f5, "g_264.f1.f5", print_hash_value);
    transparent_crc(g_264.f2, "g_264.f2", print_hash_value);
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_515.f0, "g_515.f0", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_668.f0, "g_668.f0", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_835.f0, "g_835.f0", print_hash_value);
    transparent_crc(g_835.f1, "g_835.f1", print_hash_value);
    transparent_crc(g_835.f2.f0, "g_835.f2.f0", print_hash_value);
    transparent_crc(g_835.f2.f1.f0, "g_835.f2.f1.f0", print_hash_value);
    transparent_crc(g_835.f2.f1.f1, "g_835.f2.f1.f1", print_hash_value);
    transparent_crc(g_835.f2.f1.f2, "g_835.f2.f1.f2", print_hash_value);
    transparent_crc(g_835.f2.f1.f3, "g_835.f2.f1.f3", print_hash_value);
    transparent_crc(g_835.f2.f1.f4, "g_835.f2.f1.f4", print_hash_value);
    transparent_crc(g_835.f2.f1.f5, "g_835.f2.f1.f5", print_hash_value);
    transparent_crc(g_835.f2.f2, "g_835.f2.f2", print_hash_value);
    transparent_crc(g_835.f3, "g_835.f3", print_hash_value);
    transparent_crc(g_835.f4, "g_835.f4", print_hash_value);
    transparent_crc(g_835.f5, "g_835.f5", print_hash_value);
    transparent_crc(g_835.f6, "g_835.f6", print_hash_value);
    transparent_crc(g_835.f7, "g_835.f7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_986[i][j][k], "g_986[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    transparent_crc(g_1104, "g_1104", print_hash_value);
    transparent_crc(g_1109.f0, "g_1109.f0", print_hash_value);
    transparent_crc(g_1109.f1, "g_1109.f1", print_hash_value);
    transparent_crc(g_1109.f2.f0, "g_1109.f2.f0", print_hash_value);
    transparent_crc(g_1109.f2.f1.f0, "g_1109.f2.f1.f0", print_hash_value);
    transparent_crc(g_1109.f2.f1.f1, "g_1109.f2.f1.f1", print_hash_value);
    transparent_crc(g_1109.f2.f1.f2, "g_1109.f2.f1.f2", print_hash_value);
    transparent_crc(g_1109.f2.f1.f3, "g_1109.f2.f1.f3", print_hash_value);
    transparent_crc(g_1109.f2.f1.f4, "g_1109.f2.f1.f4", print_hash_value);
    transparent_crc(g_1109.f2.f1.f5, "g_1109.f2.f1.f5", print_hash_value);
    transparent_crc(g_1109.f2.f2, "g_1109.f2.f2", print_hash_value);
    transparent_crc(g_1109.f3, "g_1109.f3", print_hash_value);
    transparent_crc(g_1109.f4, "g_1109.f4", print_hash_value);
    transparent_crc(g_1109.f5, "g_1109.f5", print_hash_value);
    transparent_crc(g_1109.f6, "g_1109.f6", print_hash_value);
    transparent_crc(g_1109.f7, "g_1109.f7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1110[i][j][k].f0, "g_1110[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_1122, "g_1122", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1302, "g_1302", print_hash_value);
    transparent_crc(g_1356.f0, "g_1356.f0", print_hash_value);
    transparent_crc(g_1445, "g_1445", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1449[i].f0, "g_1449[i].f0", print_hash_value);
        transparent_crc(g_1449[i].f1, "g_1449[i].f1", print_hash_value);
        transparent_crc(g_1449[i].f2, "g_1449[i].f2", print_hash_value);
        transparent_crc(g_1449[i].f3, "g_1449[i].f3", print_hash_value);
        transparent_crc(g_1449[i].f4, "g_1449[i].f4", print_hash_value);
        transparent_crc(g_1449[i].f5, "g_1449[i].f5", print_hash_value);

    }
    transparent_crc(g_1667, "g_1667", print_hash_value);
    transparent_crc(g_2132, "g_2132", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2174[i][j][k], "g_2174[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
