// SPDX-License-Identifier: MIT
// cctest_csmith_71acea3f.c --- cctest case csmith_71acea3f (csmith seed 1907157567)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5bebd1a4 */
/* @exp_ticks 0x6bad */

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

// Options:   -s 1907157567 -o /tmp/csmith_gen_jln33rqw/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
   const int8_t  f1;
   uint16_t  f2;
   const int16_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

struct S1 {
   uint16_t  f0;
   const uint32_t  f1;
   uint32_t  f2;
   const uint32_t  f3;
   const int64_t  f4;
};

union U2 {
   int8_t * f0;
   uint16_t  f1;
};


static int32_t g_3 = (-1L);
static const int8_t g_8 = 0x72L;
static int8_t g_24 = 0x0EL;
static uint8_t g_55 = 248UL;
static uint32_t g_79 = 0x619AEFA9L;
static int32_t g_90 = 0x6F28A7DEL;
static struct S0 g_104 = {0x39L,0x24L,0xF0F1L,0x2DB6L,1L};
static uint8_t g_106 = 8UL;
static uint8_t *g_105 = &g_106;
static uint64_t g_114 = 0x07D533FF6D77719BLL;
static uint64_t g_138 = 0x3400617AC7FE344FLL;
static uint32_t g_152 = 0xDDD1E68DL;
static union U2 g_157 = {0};
static int16_t g_170 = 1L;
static uint32_t g_190 = 0x691963C9L;
static int32_t g_206 = 0x73EBCEBBL;
static uint32_t g_222 = 9UL;
static int32_t *g_232 = &g_90;
static int32_t **g_231 = &g_232;
static uint8_t g_242 = 8UL;
static uint32_t g_259 = 0xB76DA429L;
static int64_t *g_266 = (void*)0;
static uint16_t *g_275 = (void*)0;
static int32_t g_327 = 0L;
static int16_t g_329 = (-6L);
static uint8_t g_330 = 4UL;
static uint64_t g_335 = 0x8E99261BDDF00D99LL;
static uint32_t *g_353 = &g_152;
static uint32_t **g_352[4] = {&g_353,&g_353,&g_353,&g_353};
static int32_t g_367[3][1][3] = {{{7L,7L,7L}},{{(-1L),1L,(-1L)}},{{7L,7L,7L}}};
static uint32_t g_372 = 0UL;
static struct S1 g_385 = {0x1309L,3UL,0x05F37A50L,0xC2C9570BL,0xD9E4C85BA2E1E8E7LL};
static uint8_t **g_393[2][1] = {{&g_105},{&g_105}};
static uint8_t ***g_392 = &g_393[0][0];
static uint8_t **** const g_391 = &g_392;
static const uint8_t g_437 = 0x05L;
static const uint8_t *g_436 = &g_437;
static struct S0 g_448 = {1UL,0x72L,4UL,0xB33BL,0x315AEA0100CADD5DLL};
static uint8_t g_452 = 255UL;
static uint64_t *g_470 = &g_138;
static uint64_t **g_469 = &g_470;
static struct S0 *g_476 = &g_448;
static struct S0 **g_475 = &g_476;
static const uint8_t g_491 = 0UL;
static const uint8_t *g_490 = &g_491;
static union U2 **g_568 = (void*)0;
static uint16_t **g_592[5] = {&g_275,&g_275,&g_275,&g_275,&g_275};
static uint16_t ***g_591 = &g_592[3];
static uint16_t ****g_590 = &g_591;
static int32_t g_616[4] = {(-10L),(-10L),(-10L),(-10L)};
static uint64_t g_619 = 0xFC84F9F72F300BC3LL;
static struct S1 **g_657[1] = {(void*)0};
static struct S0 *g_681 = &g_104;
static const int8_t g_686 = 0x4BL;
static int16_t g_703 = 0xD253L;
static uint16_t *g_718 = &g_104.f2;
static const uint8_t **g_729[3][6][6] = {{{&g_490,&g_436,&g_436,&g_490,&g_436,&g_436},{&g_436,&g_490,&g_436,&g_490,&g_436,&g_490},{(void*)0,&g_490,&g_436,(void*)0,&g_436,&g_490},{(void*)0,&g_436,&g_490,&g_490,&g_490,&g_490},{&g_490,&g_490,(void*)0,&g_490,&g_490,&g_490},{&g_490,&g_436,&g_436,&g_490,&g_436,(void*)0}},{{&g_490,&g_490,&g_436,&g_490,&g_490,&g_490},{&g_490,&g_490,(void*)0,&g_490,&g_436,&g_490},{&g_490,&g_436,&g_490,&g_490,&g_490,&g_490},{&g_490,&g_490,(void*)0,&g_490,&g_490,&g_490},{&g_490,&g_436,&g_436,&g_490,&g_436,(void*)0},{&g_490,&g_490,&g_436,&g_490,&g_490,&g_490}},{{&g_490,&g_490,(void*)0,&g_490,&g_436,&g_490},{&g_490,&g_436,&g_490,&g_490,&g_490,&g_490},{&g_490,&g_490,(void*)0,&g_490,&g_490,&g_490},{&g_490,&g_436,&g_436,&g_490,&g_436,(void*)0},{&g_490,&g_490,&g_436,&g_490,&g_490,&g_490},{&g_490,&g_490,(void*)0,&g_490,&g_436,&g_490}}};
static int64_t g_780[7] = {9L,9L,1L,9L,9L,1L,9L};
static uint64_t g_799 = 9UL;
static int16_t g_822 = (-1L);
static int32_t g_823[4] = {0xC5E1C1ECL,0xC5E1C1ECL,0xC5E1C1ECL,0xC5E1C1ECL};
static struct S1 *g_841 = &g_385;
static int8_t g_887 = (-1L);
static uint8_t ****g_901[1] = {&g_392};
static uint8_t *****g_900 = &g_901[0];
static struct S1 g_914 = {0xCE62L,18446744073709551609UL,0UL,18446744073709551608UL,0xE88AF5165B09F2BFLL};
static uint32_t **g_1012 = (void*)0;
static uint32_t ***g_1011[2] = {&g_1012,&g_1012};
static struct S0 g_1172 = {5UL,1L,0x8C2BL,0x54ACL,-6L};
static struct S0 ***g_1199[5] = {&g_475,&g_475,&g_475,&g_475,&g_475};
static struct S0 *** const * const g_1198 = &g_1199[2];
static struct S1 ***g_1239 = &g_657[0];
static struct S1 ****g_1238 = &g_1239;
static int8_t ****g_1390 = (void*)0;
static struct S0 g_1445 = {0UL,-1L,65528UL,0x37ADL,-8L};
static uint16_t g_1475 = 0x86C5L;
static int8_t * const g_1508 = &g_887;
static uint32_t g_1634[6] = {0xCCA200E3L,0xCCA200E3L,0xCCA200E3L,0xCCA200E3L,0xCCA200E3L,0xCCA200E3L};
static uint32_t ***g_1744[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static struct S1 *****g_1781 = &g_1238;
static uint64_t g_1790 = 0xA0AD4752A28E76BBLL;
static uint64_t g_1826[2][4][5] = {{{0x5324C448EC4EAD63LL,0x07EBF747D2A4FC66LL,0x5324C448EC4EAD63LL,18446744073709551615UL,18446744073709551615UL},{0xA06FE5F522F8B5BELL,1UL,18446744073709551615UL,1UL,0xA06FE5F522F8B5BELL},{0x5324C448EC4EAD63LL,1UL,0x07EBF747D2A4FC66LL,0xA06FE5F522F8B5BELL,0x07EBF747D2A4FC66LL},{0x07EBF747D2A4FC66LL,0x07EBF747D2A4FC66LL,18446744073709551615UL,0xA06FE5F522F8B5BELL,9UL}},{{1UL,0x5324C448EC4EAD63LL,0x5324C448EC4EAD63LL,1UL,0x07EBF747D2A4FC66LL},{1UL,0xA06FE5F522F8B5BELL,18446744073709551615UL,18446744073709551615UL,0xA06FE5F522F8B5BELL},{0x07EBF747D2A4FC66LL,0x5324C448EC4EAD63LL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x5324C448EC4EAD63LL,0x07EBF747D2A4FC66LL,0x5324C448EC4EAD63LL,18446744073709551615UL,18446744073709551615UL}}};
static int16_t g_1837 = 0x8B1DL;
static int64_t g_1878[1] = {0L};
static int32_t g_1892 = 0x7448A156L;
static struct S1 g_1909[2] = {{0x6CA8L,0xD4D9E8E3L,0xEFBFE9F3L,0xAD3A9676L,0L},{0x6CA8L,0xD4D9E8E3L,0xEFBFE9F3L,0xAD3A9676L,0L}};
static int8_t g_1921 = (-1L);
static const int32_t *g_1972[5] = {&g_3,&g_3,&g_3,&g_3,&g_3};
static struct S0 g_2019[6] = {{0x02L,0x09L,0x2E9CL,-4L,6L},{0x2FL,5L,0x877BL,0xE224L,-1L},{0x02L,0x09L,0x2E9CL,-4L,6L},{0x02L,0x09L,0x2E9CL,-4L,6L},{0x2FL,5L,0x877BL,0xE224L,-1L},{0x02L,0x09L,0x2E9CL,-4L,6L}};
static uint32_t g_2049 = 0xFEA67CC1L;
static int32_t g_2074 = 0x219D1759L;
static int32_t g_2109[6][4] = {{0x9F398C8DL,0x9F398C8DL,0x9F398C8DL,0x9F398C8DL},{0x9F398C8DL,0x9F398C8DL,0x9F398C8DL,0x9F398C8DL},{0x9F398C8DL,0x9F398C8DL,0x9F398C8DL,0x9F398C8DL},{0x9F398C8DL,0x9F398C8DL,0x9F398C8DL,0x9F398C8DL},{0x9F398C8DL,0x9F398C8DL,0x9F398C8DL,0x9F398C8DL},{0x9F398C8DL,0x9F398C8DL,0x9F398C8DL,0x9F398C8DL}};
static struct S0 g_2135 = {1UL,4L,0xE4E1L,-10L,-8L};



static uint64_t  func_1(void);
static uint32_t  func_9(const int8_t * p_10, const struct S0  p_11, int8_t * p_12, int8_t * const  p_13, int64_t  p_14);
static int8_t * func_17(int8_t * p_18);
static int8_t * func_19(int8_t * const  p_20, uint32_t  p_21, uint32_t  p_22);
static int8_t  func_27(int8_t * p_28, struct S0  p_29, int8_t * p_30, int8_t * p_31);
static uint16_t  func_41(int8_t * p_42, int8_t * p_43, int8_t * p_44);
static int8_t * func_45(uint32_t  p_46, uint64_t  p_47, const uint8_t  p_48, const uint16_t  p_49, int32_t  p_50);
static uint8_t  func_60(int16_t  p_61);




static uint64_t  func_1(void)
{ 
    int64_t l_2[2];
    const int8_t *l_7[6][7];
    const struct S0 l_16[7][4] = {{{0xD9L,0L,0UL,0xA137L,0x625AA9C4AD1532D4LL},{0x6EL,1L,65527UL,0x5F32L,0L},{1UL,-6L,0UL,0x1CF6L,-4L},{0xDFL,0xC9L,0UL,0L,0L}},{{0x96L,1L,65535UL,1L,0L},{0xC1L,0xA7L,0x09F5L,0x54E3L,-5L},{0x6EL,0xDCL,5UL,-9L,2L},{4UL,3L,0x289CL,7L,-5L}},{{1UL,-6L,0UL,0x1CF6L,-4L},{0xD9L,0L,0UL,0xA137L,0x625AA9C4AD1532D4LL},{1UL,1L,65526UL,0xE7BFL,0x99314E764939E63ALL},{1UL,1L,65526UL,0xE7BFL,0x99314E764939E63ALL}},{{1UL,-6L,0UL,0x1CF6L,-4L},{1UL,-6L,0UL,0x1CF6L,-4L},{0x6EL,0xDCL,5UL,-9L,2L},{0xCBL,1L,0UL,9L,-1L}},{{0x96L,1L,65535UL,1L,0L},{1UL,1L,65526UL,0xE7BFL,0x99314E764939E63ALL},{1UL,-6L,0UL,0x1CF6L,-4L},{0xC1L,0xA7L,0x09F5L,0x54E3L,-5L}},{{0xD9L,0L,0UL,0xA137L,0x625AA9C4AD1532D4LL},{252UL,0L,0xCBAAL,-6L,0xD832CB818EBCCE3FLL},{0UL,0xE8L,0x6EA0L,-6L,0x095D7C1543F36FC7LL},{1UL,-6L,0UL,0x1CF6L,-4L}},{{0xDFL,0xC9L,0UL,0L,0L},{252UL,0L,0xCBAAL,-6L,0xD832CB818EBCCE3FLL},{0xDFL,0xC9L,0UL,0L,0L},{0xC1L,0xA7L,0x09F5L,0x54E3L,-5L}}};
    uint16_t l_1903[5][4][5] = {{{0xF8C9L,0UL,0xF8C9L,0x0C6BL,0x3467L},{0x2D7EL,0xCDD8L,0xE375L,0x098BL,0xE8AAL},{0UL,0x70A8L,0x70A8L,0UL,0xF8C9L},{0xB671L,0x6E8AL,0xE375L,0UL,0x5550L}},{{65526UL,0xAB35L,0xF8C9L,0xAB35L,65526UL},{65526UL,0x098BL,0x2D7EL,0UL,0UL},{65533UL,4UL,0UL,0UL,4UL},{0xEB5BL,0x58B8L,0xB671L,0x098BL,0UL}},{{0xAB35L,0UL,65526UL,0x0C6BL,65526UL},{0UL,1UL,65526UL,0x74A5L,0x5550L},{0xAB35L,1UL,65533UL,0xF8C9L,0xF8C9L},{0xEB5BL,65535UL,0xEB5BL,0xC84FL,0xE8AAL}},{{65533UL,1UL,0xAB35L,4UL,0x3467L},{65526UL,1UL,0UL,0x6E8AL,0xEB5BL},{65526UL,0UL,0xAB35L,0x3467L,1UL},{0xB671L,0x58B8L,0xEB5BL,0x58B8L,0xB671L}},{{0UL,4UL,65533UL,0x3467L,0x70A8L},{0x2D7EL,0x098BL,65526UL,0x6E8AL,0xCF03L},{0xF8C9L,0xAB35L,65526UL,4UL,0x70A8L},{0xE375L,0x6E8AL,0xB671L,0xC84FL,0xB671L}}};
    int32_t l_1917 = 0L;
    int32_t l_1918 = 1L;
    int32_t l_1919 = 1L;
    int32_t l_1920 = 0xA4E22C0EL;
    uint8_t l_1922 = 0xD4L;
    union U2 l_1933[7] = {{0},{0},{0},{0},{0},{0},{0}};
    uint32_t l_1967[1][5] = {{0UL,0UL,0UL,0UL,0UL}};
    struct S1 l_1973 = {0xAFA4L,18446744073709551611UL,0xE8A2A33BL,0x6FEAEE64L,1L};
    int32_t l_1978 = 0x468C02F7L;
    uint16_t ** const *l_1990 = (void*)0;
    struct S1 ****l_2014 = &g_1239;
    int32_t l_2051 = 0xF28877D6L;
    int32_t l_2052[5][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
    struct S0 l_2069 = {0x35L,0xC1L,0xB97DL,0x52F0L,0xDF7FBF37D38A1760LL};
    uint8_t l_2081[2][2] = {{0x8AL,0x8AL},{0x8AL,0x8AL}};
    int64_t l_2115 = 3L;
    int32_t l_2116[2][6] = {{0x530420C7L,0x530420C7L,0x5D5EC94BL,(-5L),0x5D5EC94BL,0x530420C7L},{0x5D5EC94BL,0x093D5BD1L,(-5L),(-5L),0x093D5BD1L,0x5D5EC94BL}};
    uint16_t l_2118 = 0x09C9L;
    int8_t * const *l_2143 = &g_1508;
    int8_t * const **l_2142 = &l_2143;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2[i] = 3L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
            l_7[i][j] = &g_8;
    }
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { 
        const int8_t *l_15 = &g_8;
        int8_t * const l_23 = &g_24;
        int32_t l_1915[1][5];
        int32_t l_1944 = 0xF685231BL;
        uint16_t *l_1947 = &l_1903[0][0][4];
        int32_t l_1949 = 2L;
        union U2 l_1964 = {0};
        int32_t *l_1969 = &l_1915[0][0];
        int32_t *l_1970 = &l_1915[0][3];
        uint32_t l_1991[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int32_t * const *l_2041 = &l_1969;
        int64_t l_2048[4][6][5] = {{{0x38F414618F8E9781LL,0x504FC25B4BEAE67FLL,0L,(-10L),0x178625DA60875B38LL},{0x38F414618F8E9781LL,0x178625DA60875B38LL,(-1L),0L,0L},{(-10L),0x659894B5D77279CELL,(-10L),0x504FC25B4BEAE67FLL,0x178625DA60875B38LL},{0x290A21B7AD0DFD22LL,0L,0x7344E64ED4D6A42FLL,1L,0L},{0x7344E64ED4D6A42FLL,0xBA9C1A1897069223LL,(-1L),(-1L),0xBA9C1A1897069223LL},{0xBA9C1A1897069223LL,0L,0x7344E64ED4D6A42FLL,0L,0x475966CC438623CCLL}},{{0x38F414618F8E9781LL,0L,0L,0x659894B5D77279CELL,0x290A21B7AD0DFD22LL},{0x178625DA60875B38LL,0xBA9C1A1897069223LL,0xBA9C1A1897069223LL,0x178625DA60875B38LL,0x659894B5D77279CELL},{0x38F414618F8E9781LL,(-1L),0x475966CC438623CCLL,0x504FC25B4BEAE67FLL,0x659894B5D77279CELL},{0xBA9C1A1897069223LL,0x38F414618F8E9781LL,0x290A21B7AD0DFD22LL,0x7344E64ED4D6A42FLL,0x290A21B7AD0DFD22LL},{0x7344E64ED4D6A42FLL,0x7344E64ED4D6A42FLL,0x659894B5D77279CELL,0x504FC25B4BEAE67FLL,0x475966CC438623CCLL},{(-10L),1L,0x659894B5D77279CELL,0x178625DA60875B38LL,0xBA9C1A1897069223LL}},{{0L,0x659894B5D77279CELL,0x290A21B7AD0DFD22LL,0x659894B5D77279CELL,0L},{0x504FC25B4BEAE67FLL,1L,0x475966CC438623CCLL,0L,0x7344E64ED4D6A42FLL},{0x504FC25B4BEAE67FLL,0x7344E64ED4D6A42FLL,0xBA9C1A1897069223LL,(-1L),(-1L)},{0L,0x38F414618F8E9781LL,0L,1L,0x7344E64ED4D6A42FLL},{(-10L),(-1L),0x7344E64ED4D6A42FLL,1L,0L},{0x7344E64ED4D6A42FLL,0xBA9C1A1897069223LL,(-1L),(-1L),0xBA9C1A1897069223LL}},{{0xBA9C1A1897069223LL,0L,0x7344E64ED4D6A42FLL,0L,0x475966CC438623CCLL},{0x38F414618F8E9781LL,0L,0L,0x659894B5D77279CELL,0x290A21B7AD0DFD22LL},{0x178625DA60875B38LL,0xBA9C1A1897069223LL,0xBA9C1A1897069223LL,0x178625DA60875B38LL,0x659894B5D77279CELL},{0x38F414618F8E9781LL,(-1L),0x475966CC438623CCLL,0x504FC25B4BEAE67FLL,0x659894B5D77279CELL},{0xBA9C1A1897069223LL,0x38F414618F8E9781LL,0x290A21B7AD0DFD22LL,0x7344E64ED4D6A42FLL,0x290A21B7AD0DFD22LL},{0x7344E64ED4D6A42FLL,0x7344E64ED4D6A42FLL,0x659894B5D77279CELL,0x504FC25B4BEAE67FLL,0x475966CC438623CCLL}}};
        uint64_t l_2053 = 0UL;
        struct S1 *l_2070 = &g_385;
        int8_t l_2075 = 0x5CL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1915[i][j] = 0x84A61F38L;
        }
    }
    (**g_231) ^= (safe_rshift_func_int16_t_s_u((l_16[1][0].f0 != l_2081[1][1]), (*g_718)));
    for (l_1973.f2 = 0; (l_1973.f2 <= 18); l_1973.f2 = safe_add_func_uint64_t_u_u(l_1973.f2, 2))
    { 
        const uint32_t l_2097 = 1UL;
        int32_t l_2102[7] = {0xF5BF2E6BL,0xF5BF2E6BL,0xF5BF2E6BL,0xF5BF2E6BL,0xF5BF2E6BL,0xF5BF2E6BL,0xF5BF2E6BL};
        int32_t *l_2110 = &g_2109[4][1];
        int32_t *l_2111 = (void*)0;
        int32_t *l_2112 = &l_1978;
        int32_t *l_2113 = (void*)0;
        int32_t *l_2114[5][1][5] = {{{&g_823[1],&l_1978,&g_823[1],&g_823[1],&l_1978}},{{&l_1978,&g_823[1],&g_823[1],&l_1978,&g_823[1]}},{{&l_1978,&l_1978,&g_1892,&l_1978,&l_1978}},{{&g_823[1],&l_1978,&g_823[1],&g_823[1],&l_1978}},{{&l_1978,&g_823[1],&g_823[1],&l_1978,&g_823[1]}}};
        int64_t l_2117 = 0x429B25FF0C517AEDLL;
        int32_t l_2133[1];
        struct S0 *l_2134 = &g_2135;
        uint64_t l_2139 = 0x4098B9521CCB301ELL;
        int32_t *l_2158 = &g_90;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2133[i] = 0xD519FFF1L;
        (**g_231) |= ((safe_sub_func_uint64_t_u_u(0xB9E6B699A0DF4953LL, (((l_2097 == (0UL < ((safe_rshift_func_int16_t_s_s(((l_2102[1] > (0x70L <= ((safe_add_func_int8_t_s_s(l_2097, (safe_lshift_func_int8_t_s_s((*g_1508), 1)))) == g_55))) && l_2102[5]), g_2109[4][2])) > (*g_1508)))) <= 1L) == l_2081[1][1]))) <= 1L);
        --l_2118;
        if (((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((((((**g_469) , ((*g_590) == (*g_590))) , g_616[0]) == l_1920) > (((l_2111 != ((((l_1918 = (safe_lshift_func_int16_t_s_s(1L, g_491))) || 255UL) , (*l_2110)) , (void*)0)) & (**g_469)) ^ l_1978)), (**g_469))), 2)), l_2133[0])) > (*l_2110)), 12)), 18446744073709551608UL)) ^ 0x05C89A20517A4E88LL))
        { 
            uint8_t l_2147 = 0x88L;
            l_2134 = &l_2069;
            (***g_1198) = (***g_1198);
            for (g_619 = 0; (g_619 >= 40); g_619 = safe_add_func_uint32_t_u_u(g_619, 9))
            { 
                int16_t l_2138 = 0x9CA9L;
                int8_t * const ***l_2144 = &l_2142;
                int32_t l_2145 = 0xB349471AL;
                int32_t l_2146 = 0x78264BD5L;
                ++l_2139;
                (**g_231) = (*g_232);
                (*l_2144) = l_2142;
                --l_2147;
            }
        }
        else
        { 
            uint16_t l_2156 = 65530UL;
            uint32_t *l_2157 = &g_372;
            int32_t **l_2159 = &l_2158;
            (*l_2110) ^= (((****g_1198) , ((*l_2157) |= (((safe_div_func_uint64_t_u_u(0xE9E99159E0EFAAE4LL, (safe_sub_func_uint16_t_u_u(((*g_718) = ((*g_231) != (void*)0)), g_686)))) >= ((safe_rshift_func_uint16_t_u_s((*l_2112), ((void*)0 == (*g_1198)))) >= l_2156)) >= l_1978))) <= (*g_232));
            (*l_2159) = ((*g_231) = l_2158);
        }
        for (g_448.f2 = 0; (g_448.f2 != 41); ++g_448.f2)
        { 
            return l_1973.f3;
        }
    }
    return l_16[1][0].f4;
}



static uint32_t  func_9(const int8_t * p_10, const struct S0  p_11, int8_t * p_12, int8_t * const  p_13, int64_t  p_14)
{ 
    struct S1 *l_1906[4];
    int i;
    for (i = 0; i < 4; i++)
        l_1906[i] = (void*)0;
    for (g_170 = 10; (g_170 < (-6)); --g_170)
    { 
        struct S1 **l_1907 = &l_1906[3];
        struct S1 *l_1908 = &g_1909[1];
        l_1908 = ((*l_1907) = l_1906[3]);
        if (p_14)
            continue;
    }
    return p_11.f1;
}



static int8_t * func_17(int8_t * p_18)
{ 
    uint16_t l_26 = 0xE9C7L;
    struct S0 l_32 = {248UL,0xC4L,0UL,0x7434L,0L};
    int8_t * const l_33 = (void*)0;
    const int16_t l_40 = 0L;
    int32_t l_1901[6][6][6] = {{{0xEE1E2E3CL,0x33F0409CL,1L,0x15E2D397L,(-10L),0x225E878AL},{0xF79EA923L,1L,0xD52E9D36L,1L,1L,0L},{1L,0x4034DA52L,0x318C8A08L,1L,0xCFFCEE5AL,0xCEDF4B9BL},{0xAAE5DE8CL,1L,1L,7L,(-1L),1L},{8L,0x428A6C3EL,1L,6L,1L,(-2L)},{9L,(-1L),0x7CE68E43L,1L,0xEE1E2E3CL,(-4L)}},{{0xCE7B1246L,(-10L),0xF8017D09L,0x7C02ECE1L,0xA5FBF434L,0xBD3FBF2BL},{(-1L),(-1L),0x136083AEL,1L,4L,0xE57DA2A6L},{0L,0xFA99E42FL,5L,0xAAE5DE8CL,1L,0L},{0x33F0409CL,4L,0xB6E3DD01L,(-10L),1L,0xD716305EL},{7L,(-1L),4L,0xBD3FBF2BL,4L,(-1L)},{0x499A12E3L,0xA5FBF434L,(-1L),0xFEAC7213L,0xCE7B1246L,(-10L)}},{{0xE9293EB4L,0x4034DA52L,0L,0L,1L,0L},{0xDB72AC3BL,0x4034DA52L,0xBD3FBF2BL,1L,0xCE7B1246L,0xD52E9D36L},{1L,0xA5FBF434L,0xCD4A2C25L,(-1L),4L,0xAAE5DE8CL},{0x1F2BA8C8L,(-1L),(-4L),0xCEDF4B9BL,1L,0L},{(-1L),0x318C8A08L,0xFA99E42FL,1L,0x225E878AL,8L},{5L,8L,0xAAE5DE8CL,0xF8017D09L,0x318C8A08L,0x1F2BA8C8L}},{{0x136083AEL,1L,0xCE7B1246L,0L,0x62A690B0L,0L},{0xF8017D09L,0xFEAC7213L,1L,0x7C02ECE1L,0xF10DC88EL,0xE9293EB4L},{0x7CE68E43L,0xB6E3DD01L,7L,5L,0x428A6C3EL,0L},{1L,0L,7L,0x4034DA52L,1L,0x232BD17BL},{1L,(-4L),(-1L),8L,1L,(-1L)},{0x318C8A08L,(-10L),0x83111C54L,1L,0xCEDF4B9BL,1L}},{{0xD52E9D36L,(-2L),0x225E878AL,0L,0xFEAC7213L,9L},{1L,0x1D598234L,0x232BD17BL,0x232BD17BL,0x1D598234L,1L},{0x0AFB2A00L,0xD52E9D36L,0xDB72AC3BL,0xE9293EB4L,0xE57DA2A6L,0xCB5FFC40L},{9L,9L,0x136083AEL,0xA59B07D5L,1L,(-3L)},{9L,0L,0xA59B07D5L,0xE9293EB4L,0xFB162B62L,0x499A12E3L},{0x0AFB2A00L,0xE57DA2A6L,0L,0x232BD17BL,(-1L),0L}},{{1L,0x58E97A8AL,(-4L),0L,(-1L),0xF10DC88EL},{0xD52E9D36L,0xBD3FBF2BL,0x1D598234L,1L,9L,3L},{0x318C8A08L,0xDB72AC3BL,0x33F0409CL,8L,7L,0x0AFB2A00L},{1L,0xF8017D09L,6L,0x4034DA52L,0L,0xFB162B62L},{1L,(-1L),0L,5L,0L,0x15E2D397L},{0x7CE68E43L,3L,0L,0x7C02ECE1L,1L,(-1L)}}};
    int8_t *l_1902 = &g_24;
    int i, j, k;
    l_1901[2][1][5] = (l_26 > (func_27(p_18, l_32, func_19(l_33, (((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(g_8, (((l_32.f0 | (-1L)) && 255UL) > l_40))) , &g_24) != &g_8), g_8)), g_3)) , l_32.f3) ^ l_26), l_32.f0), &g_24) || (*p_18)));
    return l_1902;
}



static int8_t * func_19(int8_t * const  p_20, uint32_t  p_21, uint32_t  p_22)
{ 
    int8_t *l_25 = &g_24;
    return l_25;
}



static int8_t  func_27(int8_t * p_28, struct S0  p_29, int8_t * p_30, int8_t * p_31)
{ 
    uint8_t *l_53 = (void*)0;
    uint8_t *l_54[2];
    int32_t l_56 = 1L;
    int32_t l_57[5];
    uint32_t **l_496 = &g_353;
    const int32_t l_497 = (-7L);
    int8_t *l_886 = &g_887;
    int32_t *l_1891 = (void*)0;
    uint16_t ****l_1894 = (void*)0;
    uint16_t ****l_1895 = (void*)0;
    uint16_t ***l_1896[5][7] = {{&g_592[1],&g_592[3],&g_592[1],(void*)0,(void*)0,&g_592[1],&g_592[3]},{(void*)0,&g_592[3],&g_592[3],&g_592[3],&g_592[3],(void*)0,&g_592[3]},{&g_592[1],(void*)0,(void*)0,&g_592[1],&g_592[3],&g_592[1],(void*)0},{&g_592[3],&g_592[3],(void*)0,&g_592[3],(void*)0,&g_592[3],&g_592[3]},{&g_592[3],(void*)0,&g_592[3],&g_592[1],(void*)0,(void*)0,&g_592[1]}};
    int32_t *l_1897[4][7][7] = {{{&g_90,&g_327,&g_90,&g_327,&g_90,&g_327,&g_90},{(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0],&g_823[0]},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{(void*)0,(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0]},{&g_90,&g_327,&g_90,&g_327,&g_90,&g_327,&g_90},{(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0],&g_823[0]},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327,&g_327}},{{(void*)0,(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0]},{&g_90,&g_327,&g_90,&g_327,&g_90,&g_327,&g_90},{(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0],&g_823[0]},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{(void*)0,(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0]},{&g_90,&g_327,&g_90,&g_327,&g_90,&g_327,&g_90},{(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0],&g_823[0]}},{{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{(void*)0,(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0]},{&g_90,&g_327,&g_90,&g_327,&g_90,&g_327,&g_90},{(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0],&g_823[0]},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{(void*)0,(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0]},{&g_90,&g_327,&g_90,&g_327,&g_90,&g_327,&g_90}},{{(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0],&g_823[0]},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{(void*)0,(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0]},{&g_90,&g_327,&g_90,&g_327,&g_90,&g_327,&g_90},{(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0],&g_823[0]},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{(void*)0,(void*)0,&g_823[0],&g_823[0],(void*)0,(void*)0,&g_823[0]}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_54[i] = &g_55;
    for (i = 0; i < 5; i++)
        l_57[i] = 0x80C48983L;
    g_1892 |= (((func_41(p_30, func_45((p_29.f4 , ((safe_rshift_func_uint8_t_u_u((g_55++), func_60(l_56))) || ((((((((((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((-1L), 12)), l_57[0])) , l_496) == &g_353) == 0x00026F99FF59B3E7LL) ^ (-8L)) | (*g_105)) == 0x232EAA1C88886144LL) , l_57[0]) < (*g_232)) >= p_29.f4))), p_29.f1, p_29.f3, l_497, p_29.f2), l_886) >= p_29.f1) || p_29.f0) || p_29.f4);
    g_823[2] ^= ((*g_718) < ((((safe_unary_minus_func_int32_t_s((-9L))) == ((l_1896[2][3] = (void*)0) != (void*)0)) && p_29.f3) <= (*g_1508)));
    g_1892 = (safe_unary_minus_func_uint8_t_u(((*****g_900) = (safe_add_func_int16_t_s_s(g_1445.f2, g_385.f4)))));
    return (*p_31);
}



static uint16_t  func_41(int8_t * p_42, int8_t * p_43, int8_t * p_44)
{ 
    int32_t l_912[2];
    struct S1 *l_913 = &g_914;
    int32_t l_950 = 0xF753518CL;
    uint8_t *l_968 = &g_242;
    uint64_t l_1046 = 0UL;
    union U2 *l_1049 = (void*)0;
    union U2 **l_1048 = &l_1049;
    uint32_t **l_1106 = (void*)0;
    uint8_t l_1149 = 8UL;
    int32_t l_1157 = 0L;
    int32_t l_1212[2][6] = {{(-1L),(-1L),0x9E688155L,(-1L),(-1L),0x9E688155L},{(-1L),(-1L),0x9E688155L,(-1L),(-1L),0x9E688155L}};
    int16_t l_1220 = 0x505CL;
    int16_t l_1225 = (-1L);
    int32_t l_1226[4][7][3] = {{{0xF0D1B258L,0x46A8D598L,1L},{0x58A4E0AEL,3L,0x2A400C80L},{8L,0x46A8D598L,0xB2D6CE28L},{0x58A4E0AEL,0x58A4E0AEL,0x2A400C80L},{0xF0D1B258L,0x46A8D598L,1L},{0x58A4E0AEL,3L,0x2A400C80L},{8L,0x46A8D598L,0xB2D6CE28L}},{{0x58A4E0AEL,0x58A4E0AEL,0x2A400C80L},{0xF0D1B258L,0x46A8D598L,1L},{0x58A4E0AEL,3L,0x2A400C80L},{8L,0x46A8D598L,0xB2D6CE28L},{0x58A4E0AEL,0x58A4E0AEL,0x2A400C80L},{0xF0D1B258L,0x46A8D598L,1L},{0x58A4E0AEL,3L,0x2A400C80L}},{{8L,0x46A8D598L,0xB2D6CE28L},{0x58A4E0AEL,0x58A4E0AEL,0x2A400C80L},{0xF0D1B258L,0x46A8D598L,1L},{0x58A4E0AEL,3L,0x2A400C80L},{8L,0x46A8D598L,0xB2D6CE28L},{0x58A4E0AEL,0x58A4E0AEL,0x2A400C80L},{0xF0D1B258L,0x46A8D598L,1L}},{{0x58A4E0AEL,3L,0x2A400C80L},{8L,0x46A8D598L,0xB2D6CE28L},{0x58A4E0AEL,0x58A4E0AEL,0x2A400C80L},{0xF0D1B258L,0x46A8D598L,1L},{0x58A4E0AEL,3L,0x2A400C80L},{8L,0x46A8D598L,0xB2D6CE28L},{0x58A4E0AEL,0x58A4E0AEL,0x2A400C80L}}};
    uint64_t l_1228 = 18446744073709551609UL;
    struct S0 ***l_1240 = (void*)0;
    uint32_t **l_1263[1];
    int32_t *l_1315[5];
    int16_t l_1450 = (-10L);
    struct S1 ****l_1472 = &g_1239;
    struct S1 *****l_1480 = &l_1472;
    struct S0 *l_1563 = &g_448;
    uint32_t l_1567[7][2];
    uint32_t *** const *l_1577 = &g_1011[1];
    uint32_t *** const **l_1576 = &l_1577;
    uint16_t ***l_1596 = &g_592[3];
    uint16_t ***l_1597 = &g_592[1];
    uint32_t l_1598[5][6] = {{6UL,6UL,6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL,6UL,6UL}};
    uint8_t l_1626 = 1UL;
    int8_t *l_1640[1];
    int8_t **l_1639[4] = {&l_1640[0],&l_1640[0],&l_1640[0],&l_1640[0]};
    int8_t ***l_1638 = &l_1639[0];
    int8_t ****l_1637[4];
    uint32_t l_1659 = 18446744073709551609UL;
    uint32_t ***l_1748[5][1];
    uint32_t l_1762[2];
    int32_t ***l_1765[5];
    const uint8_t l_1785 = 0x7EL;
    int32_t l_1807[7];
    int64_t *l_1865 = &g_780[3];
    struct S1 ****l_1871[6][2][4] = {{{&g_1239,&g_1239,&g_1239,&g_1239},{(void*)0,&g_1239,(void*)0,&g_1239}},{{&g_1239,&g_1239,(void*)0,&g_1239},{&g_1239,&g_1239,&g_1239,&g_1239}},{{&g_1239,&g_1239,&g_1239,&g_1239},{&g_1239,&g_1239,&g_1239,&g_1239}},{{&g_1239,(void*)0,&g_1239,&g_1239},{&g_1239,&g_1239,&g_1239,&g_1239}},{{&g_1239,&g_1239,(void*)0,&g_1239},{&g_1239,&g_1239,(void*)0,&g_1239}},{{(void*)0,&g_1239,&g_1239,(void*)0},{&g_1239,&g_1239,&g_1239,&g_1239}}};
    const uint8_t ***l_1889[7][1];
    uint64_t l_1890 = 3UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_912[i] = (-7L);
    for (i = 0; i < 1; i++)
        l_1263[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_1315[i] = &l_950;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_1567[i][j] = 4294967286UL;
    }
    for (i = 0; i < 1; i++)
        l_1640[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_1637[i] = &l_1638;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1748[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_1762[i] = 8UL;
    for (i = 0; i < 5; i++)
        l_1765[i] = &g_231;
    for (i = 0; i < 7; i++)
        l_1807[i] = 0x64AE7922L;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1889[i][j] = &g_729[1][1][2];
    }
lbl_1613:
    for (g_327 = 4; (g_327 >= 0); g_327 -= 1)
    { 
        struct S1 *l_915[1][1];
        uint8_t * const *l_935[6][3][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,&g_105,&g_105,&g_105,&g_105},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_105,&g_105,&g_105,&g_105,&g_105},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,&g_105,&g_105,&g_105,&g_105}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,&g_105,&g_105,&g_105,&g_105},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_105,&g_105,&g_105,&g_105,&g_105},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,&g_105,&g_105,&g_105,&g_105}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,&g_105,&g_105,&g_105,&g_105},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_105,&g_105,&g_105,&g_105,&g_105},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,&g_105,&g_105,&g_105,&g_105}}};
        uint8_t * const **l_934 = &l_935[0][0][2];
        uint8_t * const ***l_933 = &l_934;
        uint8_t * const **** const l_932 = &l_933;
        union U2 l_940 = {0};
        int32_t l_985 = 0xCCA28934L;
        uint16_t ***l_1017 = (void*)0;
        const uint8_t * const *l_1080 = &g_436;
        const uint8_t * const **l_1079[2];
        const uint8_t * const ***l_1078 = &l_1079[0];
        int64_t *l_1096 = &g_448.f4;
        uint32_t *** const *l_1134[7][5] = {{(void*)0,&g_1011[0],&g_1011[0],(void*)0,&g_1011[0]},{&g_1011[1],&g_1011[1],&g_1011[1],&g_1011[1],&g_1011[1]},{&g_1011[0],(void*)0,&g_1011[0],&g_1011[0],(void*)0},{&g_1011[1],&g_1011[1],&g_1011[1],&g_1011[1],&g_1011[1]},{(void*)0,(void*)0,&g_1011[1],(void*)0,(void*)0},{&g_1011[1],&g_1011[1],&g_1011[1],&g_1011[1],&g_1011[1]},{(void*)0,&g_1011[0],&g_1011[0],(void*)0,&g_1011[0]}};
        const uint8_t l_1159 = 2UL;
        int32_t l_1183 = 6L;
        uint32_t *l_1202 = (void*)0;
        int32_t l_1211[5];
        int8_t l_1227[2];
        struct S0 *l_1231 = &g_1172;
        const uint8_t l_1236 = 0x72L;
        struct S1 ****l_1358[2][2][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&g_1239,(void*)0,&g_1239},{&g_1239,(void*)0,&g_1239,&g_1239,&g_1239,&g_1239,(void*)0}},{{&g_1239,&g_1239,&g_1239,&g_1239,(void*)0,&g_1239,&g_1239},{&g_1239,&g_1239,&g_1239,&g_1239,&g_1239,&g_1239,(void*)0}}};
        uint16_t **** const *l_1449 = &g_590;
        struct S0 ****l_1455 = (void*)0;
        struct S0 *****l_1454 = &l_1455;
        uint32_t l_1463 = 0UL;
        struct S1 *****l_1481 = &l_1358[1][1][5];
        uint16_t *****l_1485 = &g_590;
        uint16_t *****l_1520 = &g_590;
        int64_t l_1527 = 1L;
        int32_t l_1528 = (-2L);
        uint16_t l_1529 = 0x70DCL;
        const int64_t l_1560 = 0xDF33B3340BC6A337LL;
        int8_t *****l_1573 = &g_1390;
        uint32_t *** const **l_1575[6][5] = {{(void*)0,&l_1134[1][0],&l_1134[1][0],(void*)0,&l_1134[1][0]},{&l_1134[1][0],(void*)0,&l_1134[1][0],&l_1134[1][0],&l_1134[1][0]},{(void*)0,(void*)0,(void*)0,&l_1134[1][0],(void*)0},{&l_1134[1][0],&l_1134[1][0],&l_1134[1][0],&l_1134[1][0],&l_1134[1][0]},{&l_1134[1][0],&l_1134[1][0],&l_1134[1][0],(void*)0,&l_1134[1][0]},{(void*)0,&l_1134[1][0],&l_1134[1][0],&l_1134[1][0],&l_1134[1][0]}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_915[i][j] = (void*)0;
        }
        for (i = 0; i < 2; i++)
            l_1079[i] = &l_1080;
        for (i = 0; i < 5; i++)
            l_1211[i] = 7L;
        for (i = 0; i < 2; i++)
            l_1227[i] = 8L;
        if ((safe_div_func_uint16_t_u_u((g_780[(g_327 + 1)] , 0xA619L), (safe_lshift_func_int16_t_s_s(0x7228L, (safe_rshift_func_uint16_t_u_u(g_780[(g_327 + 1)], 5)))))))
        { 
            return g_780[(g_327 + 1)];
        }
        else
        { 
            uint8_t * const ****l_902 = (void*)0;
            int32_t l_907 = (-1L);
            l_907 = (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x4C87L, ((g_900 = g_900) == l_902))), ((safe_lshift_func_int8_t_s_s(1L, (safe_sub_func_uint32_t_u_u(l_907, (safe_add_func_int32_t_s_s(1L, ((l_913 = (((((safe_add_func_int8_t_s_s((*p_43), g_780[(g_327 + 1)])) , l_912[1]) && g_780[(g_327 + 1)]) > l_907) , (void*)0)) != l_915[0][0]))))))) , 0x46L))), g_780[(g_327 + 1)]));
        }
        for (g_79 = 1; (g_79 <= 4); g_79 += 1)
        { 
            uint32_t l_917[4] = {0x0FFEDE90L,0x0FFEDE90L,0x0FFEDE90L,0x0FFEDE90L};
            int32_t l_920 = 0x99A8DDB3L;
            struct S1 l_939 = {0UL,0xE4B30225L,0xAE6DEC31L,0xB75FC142L,0x4AFD936DFB95224DLL};
            int32_t l_969 = 0xE5D7BFA7L;
            union U2 l_970 = {0};
            struct S0 l_983 = {0x1EL,9L,0x4391L,0xF833L,0L};
            const int32_t **l_996 = (void*)0;
            int32_t l_1002 = 9L;
            uint32_t *l_1010 = &g_222;
            uint32_t ** const l_1009 = &l_1010;
            uint32_t ** const *l_1008 = &l_1009;
            uint32_t l_1067 = 6UL;
            uint8_t ***l_1135 = (void*)0;
            const int64_t l_1158[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            union U2 ** const *l_1206[4][4] = {{&l_1048,&l_1048,&l_1048,&l_1048},{&l_1048,&l_1048,&l_1048,&l_1048},{&l_1048,&l_1048,&l_1048,&l_1048},{&l_1048,&l_1048,&l_1048,&l_1048}};
            int32_t l_1215 = (-6L);
            int32_t l_1218 = 0L;
            int32_t l_1219 = 9L;
            int32_t l_1221 = (-6L);
            int32_t l_1222 = 0x5D89A25DL;
            int32_t l_1223 = 0x85C854CBL;
            int32_t l_1224[5] = {0xCC28EB7AL,0xCC28EB7AL,0xCC28EB7AL,0xCC28EB7AL,0xCC28EB7AL};
            int i, j;
            for (g_329 = 0; (g_329 <= 4); g_329 += 1)
            { 
                int32_t *l_916 = &g_327;
                union U2 *l_919 = &g_157;
                union U2 **l_918 = &l_919;
                (*g_231) = l_916;
                for (g_385.f2 = 0; (g_385.f2 <= 4); g_385.f2 += 1)
                { 
                    if (l_917[2])
                        break;
                    return (*l_916);
                }
                (*l_918) = &g_157;
                return g_780[(g_327 + 1)];
            }
            if ((l_920 = 0xFF05639EL))
            { 
                struct S0 l_931 = {0x28L,0L,5UL,0xA751L,0L};
                int32_t *l_938 = &l_920;
                union U2 *l_941[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_941[i] = &l_940;
                (*l_938) = (safe_lshift_func_int16_t_s_s((l_917[2] || (+(safe_unary_minus_func_uint64_t_u((255UL <= (((safe_rshift_func_int8_t_s_s(((*p_42) != ((safe_add_func_uint8_t_u_u((&g_901[0] == (l_931 , l_932)), (((safe_lshift_func_int16_t_s_s(0x0DFDL, l_931.f2)) | l_917[2]) | l_920))) & 0xDBC9A0E5D7890B2BLL)), (*p_42))) ^ l_912[0]) == g_616[2])))))), 5));
                l_950 &= (8L != ((-1L) >= ((l_939 , ((((g_157 = l_940) , (0x98E5L < (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(6L, (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(l_912[0], g_104.f0)) < 0xB7L), l_912[1])))), 0xC45F55DBL)))) ^ (*l_938)) & 0x0CL)) ^ g_372)));
                for (g_242 = 0; (g_242 <= 4); g_242 += 1)
                { 
                    return l_912[1];
                }
                for (g_242 = 1; (g_242 <= 4); g_242 += 1)
                { 
                    int32_t *l_951 = &l_920;
                    uint8_t *l_967 = (void*)0;
                    union U2 l_971 = {0};
                    int64_t *l_984[1];
                    int32_t *l_986 = &g_823[1];
                    int32_t l_987[1][7] = {{0L,0L,0L,0L,0L,0L,0L}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_984[i] = &g_104.f4;
                    (*g_231) = l_951;
                    (*l_938) = (safe_mod_func_int32_t_s_s((((g_780[(g_327 + 1)] == g_104.f3) < 0UL) , (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(l_939.f1, (safe_div_func_int64_t_s_s((((~(65535UL && (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(0UL, (l_967 == l_968))) >= l_969), (*l_951))), 255UL)) || l_939.f4) || (*l_938)))) & l_939.f1) <= 4294967289UL), g_780[(g_327 + 1)])))) , g_335), 13))), g_780[3]));
                    if (g_780[(g_327 + 1)])
                        continue;
                    (*l_986) &= ((*l_938) = (l_970 , (l_971 , (l_985 = (((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((**g_469), (g_448.f4 ^= (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((+(1UL <= (l_983 , (&l_969 == ((*g_231) = (*g_231)))))), 6)), l_920))))), (*l_938))) | (*p_43)), l_939.f0)) != (*l_938)) | g_822)))));
                    if (l_987[0][0])
                        break;
                }
            }
            else
            { 
                int32_t l_1003[6] = {(-1L),8L,(-1L),(-1L),8L,(-1L)};
                uint32_t **l_1006 = (void*)0;
                uint32_t ***l_1005 = &l_1006;
                uint32_t ****l_1004 = &l_1005;
                union U2 **l_1050 = (void*)0;
                uint64_t l_1069 = 0x0D8C4F463B3F1CE3LL;
                int i;
                l_920 |= ((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_912[1], (safe_lshift_func_int8_t_s_s((l_996 != (void*)0), 1)))), (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*g_470) , 0x780E3C7EL), (0x508DA541L & (safe_unary_minus_func_uint16_t_u(l_1002))))), 0xD4D1L)))), 0x2A278106L)) , l_1003[2]);
                (*l_1004) = (void*)0;
                for (g_242 = 0; (g_242 <= 4); g_242 += 1)
                { 
                    uint8_t l_1018 = 255UL;
                    l_1003[2] = (!((*g_105) = ((((*g_681) , (l_1008 == g_1011[1])) >= (((safe_add_func_int64_t_s_s((((-1L) == (safe_mul_func_int16_t_s_s(((g_372 , l_1017) == (l_1003[2] , &g_592[3])), l_1003[5]))) < l_1018), (-1L))) >= l_1018) < l_1003[1])) <= 1L)));
                    return g_780[(g_327 + 1)];
                }
                for (g_190 = 1; (g_190 <= 4); g_190 += 1)
                { 
                    uint32_t l_1045[2];
                    const int32_t l_1047 = 0L;
                    int32_t *l_1051 = (void*)0;
                    int32_t *l_1052 = &l_969;
                    uint64_t *l_1068 = &g_799;
                    int8_t *l_1072 = &g_24;
                    int8_t **l_1071 = &l_1072;
                    int8_t ***l_1070 = &l_1071;
                    int8_t ****l_1073 = &l_1070;
                    const uint8_t * const ****l_1081[2];
                    int64_t *l_1084 = &g_780[3];
                    union U2 l_1092 = {0};
                    int32_t *l_1097 = &l_950;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1045[i] = 0xFBB1877CL;
                    for (i = 0; i < 2; i++)
                        l_1081[i] = &l_1078;
                    (*l_1052) ^= (((safe_mod_func_int8_t_s_s(((((safe_add_func_int64_t_s_s(((l_985 >= (safe_add_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_s(((*p_44) = (((-1L) >= (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((~(safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((p_42 != (void*)0) , (((safe_rshift_func_uint8_t_u_u((l_912[1] != ((*l_1010) = (+(safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((((8L != (l_912[1] , (**g_469))) , (void*)0) != (void*)0) ^ l_1045[0]), l_1046)), 0x80E0C8AEL))))), l_1047)) , &l_968) != (void*)0)), 0x1C3A3192L)), l_1045[0]))), 1)), l_1003[2]))) , 0x1AL)), (*p_43))) , l_1003[2]) , l_1048) == l_1050) & l_1045[0]), g_822)) , l_950) , l_1045[1]) , (*p_43)), 0UL))) ^ (*g_470)), 8L)) | l_985) > 18446744073709551607UL) <= g_780[(g_327 + 1)]), l_912[1])) , g_780[(g_327 + 1)]) & (-4L));
                    (*g_231) = ((safe_add_func_uint8_t_u_u(((0x3AL & (safe_rshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s(l_985, l_1003[2])) != (safe_div_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u(((254UL ^ ((((((*g_353) = (l_1067 != (l_1068 != ((*g_469) = l_1068)))) , l_1003[2]) || (*l_1052)) , l_985) , l_985)) | l_1003[3]), (*l_1052))) && l_1003[2]) <= l_1069) | 255UL), 0x0339L)), l_1046)) && 0x7A70L) <= g_780[(g_327 + 1)]), g_385.f4))), 14))) & g_780[5]), (-1L))) , &g_823[1]);
                    (*l_1073) = l_1070;
                    (*l_1097) &= (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_1069 || 0xCDA6L), ((l_1078 = l_1078) != ((((*l_1084) = (safe_rshift_func_int8_t_s_u(0xBEL, 7))) > (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((++(*****g_900)), ((*p_44) ^= (((~(l_1092 , ((safe_unary_minus_func_int32_t_s((*g_232))) && ((*l_1052) |= (((*p_43) = ((safe_div_func_uint32_t_u_u(((((**g_231) , l_1096) == g_266) > (**g_469)), 0x7EFB87A9L)) | (-1L))) || 1UL))))) > 0xDEL) & l_985)))) , l_1003[5]), l_1046))) , (void*)0)))), l_1003[3]));
                }
                for (g_106 = 0; (g_106 <= 4); g_106 += 1)
                { 
                    uint32_t ***l_1104 = (void*)0;
                    uint32_t ***l_1105[5][1][1];
                    const uint8_t *** const l_1122 = &g_729[1][4][1];
                    const uint8_t *** const *l_1121 = &l_1122;
                    const int32_t l_1136 = (-5L);
                    int32_t *l_1137 = &l_920;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1105[i][j][k] = &g_1012;
                        }
                    }
                    (*l_1137) |= (((safe_mod_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((*l_1008) != (l_1106 = (void*)0)), (-8L))), ((*l_1010) = ((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_1121 == (*g_900)), ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0L, (((((safe_unary_minus_func_int32_t_s(((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((((**g_469) = ((void*)0 != l_1134[1][0])) != l_912[1]) , l_1135) != (*l_1078)), l_912[1])), g_780[(g_327 + 1)])), l_1136)) , g_385.f1))) ^ l_1003[2]) >= 0xB83D9F6D32EF9CF4LL) , l_912[0]) | 4294967295UL))), 8L)) , 4294967287UL))), 15)), 2)), l_1136)) , 0x82L), 4)), (*****g_900))), l_1136)) == g_385.f4)))) <= l_1046) , l_1136), g_448.f3)) , 0UL) < g_780[(g_327 + 1)]);
                }
            }
            if (((safe_mod_func_uint8_t_u_u((((*g_490) <= (safe_rshift_func_uint16_t_u_s((++(*g_718)), (safe_mod_func_uint16_t_u_u((~((safe_mod_func_uint8_t_u_u(l_1149, (safe_div_func_uint16_t_u_u(((~(l_939 , (safe_div_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((*g_470), (18446744073709551615UL | (l_1002 = l_1149)))), (((((l_985 ^= l_912[0]) & l_939.f4) , l_940) , g_780[0]) , l_920))))) < l_1157), l_1046)))) , l_1158[2])), l_1159))))) == l_912[1]), l_1159)) == (*p_43)))
            { 
                uint64_t l_1164 = 18446744073709551613UL;
                struct S0 *l_1171 = &g_1172;
                g_823[1] = ((l_939 , 0xE2E8L) ^ (safe_mod_func_uint8_t_u_u((4294967295UL & (safe_mul_func_uint16_t_u_u(l_1164, ((((g_780[(g_327 + 1)] | (safe_rshift_func_int8_t_s_s((&l_1135 == (*g_900)), (*p_43)))) >= l_1159) && l_1149) < l_985)))), (*p_43))));
                if ((0L == (safe_rshift_func_uint8_t_u_u((*g_490), (safe_rshift_func_uint8_t_u_u((****g_391), 0))))))
                { 
                    (*g_475) = (l_1171 = (*g_475));
                }
                else
                { 
                    int32_t *l_1173 = &l_950;
                    (*l_1173) = 0x7D93AAD7L;
                }
                for (g_259 = 0; (g_259 <= 4); g_259 += 1)
                { 
                    return g_780[(g_327 + 1)];
                }
            }
            else
            { 
                uint32_t l_1193 = 2UL;
                int32_t l_1196 = (-7L);
                for (g_372 = 0; (g_372 <= 4); g_372 += 1)
                { 
                    int32_t *l_1174 = &g_823[1];
                    int32_t *l_1175 = &g_90;
                    int32_t *l_1176 = &g_90;
                    int32_t *l_1177 = &l_969;
                    int32_t *l_1178 = &l_920;
                    int32_t *l_1179 = &g_823[2];
                    int32_t *l_1180 = &l_969;
                    int32_t *l_1181 = &l_1157;
                    int32_t *l_1182 = &l_1002;
                    int32_t *l_1184 = &l_985;
                    int32_t *l_1185 = &l_969;
                    int32_t *l_1186 = &g_823[1];
                    int32_t *l_1187 = &l_1157;
                    int32_t *l_1188 = &l_969;
                    int32_t *l_1189 = &l_985;
                    int32_t *l_1190 = &l_950;
                    int32_t *l_1191 = &g_823[2];
                    int32_t l_1192[4] = {0xD5301F0AL,0xD5301F0AL,0xD5301F0AL,0xD5301F0AL};
                    int i;
                    (*g_231) = &l_1157;
                    ++l_1193;
                }
                l_1196 |= 0L;
            }
            for (g_887 = 4; (g_887 >= 0); g_887 -= 1)
            { 
                struct S0 *** const *l_1201 = &g_1199[2];
                struct S0 *** const **l_1200 = &l_1201;
                union U2 ** const *l_1205 = (void*)0;
                int32_t l_1207 = (-1L);
                int32_t l_1213 = 0x42D44F34L;
                int32_t l_1216 = 0xF9B2F137L;
                int32_t l_1217[1][6][5] = {{{(-1L),8L,0x168C7BE6L,1L,1L},{(-3L),(-7L),(-3L),(-9L),0x2F6495AFL},{0x54040802L,4L,1L,4L,0x54040802L},{(-3L),0xF6D40C62L,(-7L),0x64B0839AL,(-7L)},{(-1L),(-1L),1L,0x54040802L,(-8L)},{0xF6D40C62L,(-3L),(-3L),0xF6D40C62L,(-7L)}}};
                int32_t *l_1241 = &g_90;
                int i, j, k;
                for (g_104.f4 = 3; (g_104.f4 >= 1); g_104.f4 -= 1)
                { 
                    int32_t *l_1197[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1197[i] = &l_969;
                    l_1157 = l_985;
                }
                (*l_1200) = g_1198;
                for (g_24 = 4; (g_24 >= 0); g_24 -= 1)
                { 
                    int32_t *l_1203 = &g_823[1];
                    int32_t *l_1204 = &l_969;
                    int32_t *l_1208 = &l_1002;
                    int32_t *l_1209 = &g_823[1];
                    int32_t *l_1210[7][6] = {{&g_327,&g_823[1],(void*)0,&g_327,&g_3,&l_1002},{&g_327,&g_3,&l_1002,&g_823[1],&g_823[1],&l_1002},{&l_1157,&l_1157,(void*)0,&l_1002,&g_823[1],&l_1002},{&g_823[1],&g_3,(void*)0,&l_1002,&g_3,(void*)0},{&l_1157,&g_823[1],(void*)0,&g_823[1],&l_1157,&l_1002},{&g_327,&g_823[1],(void*)0,&g_327,&g_3,&l_1002},{&g_327,&g_3,&l_1002,&g_823[1],&g_823[1],&l_1002}};
                    int16_t l_1214[7][2][3] = {{{0x186FL,0x186FL,0L},{0x4320L,(-1L),(-1L)}},{{0L,1L,7L},{0x4320L,0xCAC9L,0x4320L}},{{0x186FL,0L,7L},{0x9C63L,0x9C63L,(-1L)}},{{1L,0L,0L},{(-1L),0xCAC9L,(-5L)}},{{1L,1L,1L},{0x9C63L,(-1L),(-5L)}},{{0x186FL,0x186FL,0L},{0x4320L,(-1L),(-1L)}},{{0L,1L,7L},{0x4320L,0xCAC9L,0x4320L}}};
                    int i, j, k;
                    (*l_1204) = (((void*)0 == l_1202) >= ((*l_1203) = l_1159));
                    l_1206[2][1] = l_1205;
                    --l_1228;
                    l_1231 = l_1231;
                }
                (*l_1241) = (safe_mul_func_int16_t_s_s((l_1211[1] = l_917[3]), (((safe_mod_func_uint32_t_u_u((l_1236 & (~(((((((l_1207 , (((g_1238 = g_1238) != &g_1239) && l_1217[0][0][1])) <= ((*g_1198) == l_1240)) && g_222) >= l_1046) | l_1207) != l_1183) && (-1L)))), (-1L))) | l_1217[0][0][1]) & g_780[(g_327 + 1)])));
                return g_780[(g_327 + 1)];
            }
        }
        if ((l_1212[1][2] != l_1228))
        { 
            const int32_t l_1252 = 0xF95ACF7DL;
            uint32_t l_1259 = 0xB48B8C35L;
            const int32_t l_1260 = 0x8B04937EL;
            uint32_t **l_1264 = &l_1202;
            int32_t l_1271 = 0x6C5D5ADFL;
            int32_t l_1272[4][4][2] = {{{1L,0x7A14EA94L},{0x3E122D73L,1L},{0x3E122D73L,0x7A14EA94L},{1L,0x3C8CF23FL}},{{0x7A14EA94L,0xE8F99736L},{0x79C6F667L,0x8E71592EL},{0x3C8CF23FL,0x1A8649BCL},{0x1A8649BCL,0x1A8649BCL}},{{0x3C8CF23FL,0x8E71592EL},{0x79C6F667L,0xE8F99736L},{0x7A14EA94L,0x3C8CF23FL},{1L,0x7A14EA94L}},{{0x3E122D73L,1L},{0x3E122D73L,0x7A14EA94L},{1L,0x3C8CF23FL},{0x7A14EA94L,0xE8F99736L}}};
            int32_t l_1273[3][7][5] = {{{0x31469F81L,(-9L),0x1BD7E2F6L,0x1BD7E2F6L,(-9L)},{0L,2L,(-10L),(-1L),0x49E26BF7L},{1L,0x8EB91DACL,6L,0x31469F81L,(-1L)},{(-1L),(-1L),0L,0x640C5587L,0x640C5587L},{1L,0L,1L,(-9L),1L},{0x0EFB118BL,0x500C6F00L,2L,(-1L),0xA89B239AL},{(-5L),0x31469F81L,0x1BD7E2F6L,6L,(-1L)}},{{1L,0xA89B239AL,2L,0xA89B239AL,1L},{0x5E5B0C2CL,0x685797F8L,1L,0x8EB91DACL,6L},{0L,0x49E26BF7L,0L,0x6E604D3FL,9L},{0xD7B81806L,1L,6L,0x685797F8L,6L},{0x6E604D3FL,0x6E604D3FL,0x500C6F00L,0L,1L},{6L,(-1L),(-1L),0x1BD7E2F6L,(-1L)},{2L,(-9L),9L,(-1L),0xA89B239AL}},{{0xC3859785L,(-1L),(-1L),0xC3859785L,1L},{0x49E26BF7L,0x6E604D3FL,(-10L),1L,0x640C5587L},{(-1L),1L,0xB4FAF036L,0xD7B81806L,(-1L)},{(-9L),0x49E26BF7L,1L,1L,0x49E26BF7L},{(-1L),0x685797F8L,0L,0xC3859785L,0x5E5B0C2CL},{(-8L),0xA89B239AL,0x6E604D3FL,(-1L),(-10L)},{0x685797F8L,0x31469F81L,(-9L),0x1BD7E2F6L,0x1BD7E2F6L}}};
            uint32_t l_1274 = 0x24302612L;
            union U2 *l_1306[1];
            struct S1 *l_1318 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1306[i] = &g_157;
            for (g_372 = 0; (g_372 <= 4); g_372 += 1)
            { 
                int16_t l_1244 = 1L;
                int32_t l_1261 = (-1L);
                int32_t l_1265[2];
                uint16_t l_1284 = 0x3C97L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1265[i] = (-4L);
                (*g_231) = &l_985;
                if ((**g_231))
                    continue;
                (*g_231) = &l_1157;
                for (l_1228 = 0; (l_1228 <= 4); l_1228 += 1)
                { 
                    int32_t l_1258[7][4] = {{0x478BF31DL,4L,0x478BF31DL,0x00959FAAL},{0x478BF31DL,0x00959FAAL,0x00959FAAL,0x478BF31DL},{0L,0x00959FAAL,3L,0x00959FAAL},{0x00959FAAL,4L,3L,3L},{0L,0L,0x00959FAAL,3L},{0x478BF31DL,4L,0x478BF31DL,0x00959FAAL},{0x478BF31DL,0x00959FAAL,0x00959FAAL,0x478BF31DL}};
                    int i, j;
                    l_1261 &= ((safe_lshift_func_uint8_t_u_s(l_1212[1][2], ((*p_43) = ((l_1244 > ((0x1708074DL || 9L) != (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_s((((*g_232) , ((((!(l_1252 && (!(l_1226[2][0][1] = (safe_rshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(l_1258[4][2], l_1220)) == g_616[2]), l_1228)))))) , (void*)0) != &g_232) && l_1259)) >= (**g_469)), l_1252)) ^ 0L) >= l_1149) , g_780[3]) ^ g_329), l_1260)), (*p_43))))) && l_1159)))) != 0xA4L);
                    (*g_232) = (+(l_1263[0] != l_1264));
                    (**g_231) = l_950;
                    (*g_231) = (*g_231);
                }
                for (l_1228 = 0; (l_1228 <= 4); l_1228 += 1)
                { 
                    int32_t *l_1266 = (void*)0;
                    int32_t *l_1267 = &l_1212[1][2];
                    int32_t *l_1268 = &l_1265[1];
                    int32_t *l_1269 = &l_985;
                    int32_t *l_1270[5][3][4] = {{{&l_1226[3][4][2],&l_1226[3][4][2],&l_1157,&l_1226[3][4][2]},{&l_1226[3][4][2],(void*)0,(void*)0,&l_1226[3][4][2]},{(void*)0,&l_1226[3][4][2],(void*)0,(void*)0}},{{&l_1226[3][4][2],&l_1226[3][4][2],&l_1157,&l_1226[3][4][2]},{&l_1226[3][4][2],(void*)0,(void*)0,&l_1226[3][4][2]},{(void*)0,&l_1226[3][4][2],(void*)0,(void*)0}},{{&l_1226[3][4][2],&l_1226[3][4][2],&l_1157,&l_1226[3][4][2]},{&l_1226[3][4][2],(void*)0,(void*)0,&l_1226[3][4][2]},{(void*)0,&l_1226[3][4][2],(void*)0,(void*)0}},{{&l_1226[3][4][2],&l_1226[3][4][2],&l_1157,&l_1226[3][4][2]},{&l_1226[3][4][2],(void*)0,(void*)0,&l_1226[3][4][2]},{(void*)0,&l_1226[3][4][2],(void*)0,(void*)0}},{{&l_1226[3][4][2],&l_1226[3][4][2],&l_1157,&l_1226[3][4][2]},{&l_1226[3][4][2],(void*)0,(void*)0,&l_1226[3][4][2]},{(void*)0,&l_1226[3][4][2],(void*)0,(void*)0}}};
                    int i, j, k;
                    --l_1274;
                    (*g_232) = l_1225;
                    (*g_232) = ((g_448.f2 , (((*l_1267) == (l_1252 == 0x0DL)) >= (g_822 = (safe_mod_func_int32_t_s_s((*g_232), (safe_sub_func_uint16_t_u_u(((*l_1268) || (((safe_mul_func_uint8_t_u_u(((~l_1244) ^ (-1L)), l_1284)) , &l_1078) == &l_933)), l_1265[1]))))))) > l_1157);
                }
            }
            if ((safe_sub_func_uint32_t_u_u(0x7A8C2503L, (safe_rshift_func_uint8_t_u_s(0xB5L, 5)))))
            { 
                struct S1 l_1289 = {0x0804L,0x5DBFED3FL,0x9FABC8E0L,18446744073709551611UL,0x1883F8DDCCC35F2FLL};
                int16_t *l_1293 = &g_703;
                int16_t *l_1294 = &l_1225;
                int16_t *l_1295 = (void*)0;
                int16_t *l_1296[6] = {&g_329,&g_329,&g_329,&g_329,&g_329,&g_329};
                int32_t *l_1303 = &l_1272[3][2][1];
                union U2 **l_1307 = &l_1306[0];
                int i;
                (*g_231) = (void*)0;
                (*l_1303) &= ((l_1289 , (+0x23EA7335L)) && ((l_1211[4] = ((safe_mod_func_int16_t_s_s(l_1252, l_1289.f0)) , ((*l_1294) |= ((*l_1293) &= g_780[(g_327 + 1)])))) <= (((safe_sub_func_uint16_t_u_u(((0x3AD8L | ((safe_mul_func_uint8_t_u_u(l_1289.f2, 253UL)) < 0UL)) , g_780[(g_327 + 1)]), g_914.f3)) ^ l_1273[2][4][4]) == 0xC2EEL)));
                if ((safe_mod_func_uint64_t_u_u((((*g_841) , (*l_1303)) != (((*p_44) ^= (*l_1303)) > (((*l_1048) != ((*l_1307) = l_1306[0])) >= (((((l_1260 == (safe_div_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0xC3L, l_1227[0])) == l_1228), l_1236)) >= 65531UL), (*l_1303)))) == 254UL) & 0UL) | 0x1CL) && 0x3C8EL)))), l_1046)))
                { 
                    union U2 *l_1314 = &g_157;
                    (*l_1307) = l_1314;
                    l_1273[2][4][4] = 0x40A706F7L;
                }
                else
                { 
                    struct S1 **l_1316 = (void*)0;
                    struct S1 **l_1317[7] = {&l_915[0][0],&l_915[0][0],&l_915[0][0],&l_915[0][0],&l_915[0][0],&l_915[0][0],&l_915[0][0]};
                    int i;
                    l_1315[1] = (*g_231);
                    l_913 = l_913;
                    l_1318 = l_913;
                }
                return l_1183;
            }
            else
            { 
                uint16_t l_1328 = 0UL;
                int32_t l_1329 = 1L;
                l_1273[2][4][4] = (safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((~(255UL & (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((l_1329 = l_1328) , 0x85L), (0UL & ((safe_div_func_int16_t_s_s(5L, l_1252)) < 65534UL)))) , l_1328), 6UL)))), l_1259)), g_138));
                (*g_231) = &l_1211[2];
            }
            (*g_231) = (*g_231);
        }
        else
        { 
            uint32_t l_1332 = 18446744073709551613UL;
            uint32_t l_1359 = 0xBB0D05ABL;
            uint32_t *l_1362 = &g_259;
            uint32_t **l_1361 = &l_1362;
            int32_t l_1386 = 0x7AB16B77L;
            struct S1 ***l_1389 = &g_657[0];
            uint32_t l_1435 = 0xA7364182L;
            struct S0 *l_1444 = &g_1445;
            int32_t l_1479 = 0x8CCBCFAEL;
            uint16_t **l_1488 = &g_718;
            struct S0 ** const *l_1523[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            struct S0 *** const l_1524 = &g_475;
            int i;
            (*g_231) = &l_1226[3][4][2];
            for (l_985 = 4; (l_985 >= 0); l_985 -= 1)
            { 
                union U2 l_1350[6][4] = {{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}};
                int32_t l_1351 = 0xF1A089F2L;
                struct S1 ****l_1357[5][1][3] = {{{&g_1239,&g_1239,&g_1239}},{{&g_1239,&g_1239,&g_1239}},{{&g_1239,&g_1239,&g_1239}},{{&g_1239,&g_1239,&g_1239}},{{&g_1239,&g_1239,&g_1239}}};
                int8_t *l_1394 = &g_887;
                int8_t **l_1393 = &l_1394;
                int8_t ***l_1392 = &l_1393;
                int8_t ****l_1391 = &l_1392;
                int32_t l_1395 = 0x6CF58B2BL;
                int32_t l_1396 = 0x2C791FA4L;
                const uint8_t l_1412 = 5UL;
                struct S0 l_1418 = {0xFFL,0L,0xB9FAL,-1L,0L};
                uint16_t ***l_1448 = &g_592[3];
                uint16_t **** const l_1447 = &l_1448;
                uint16_t **** const *l_1446 = &l_1447;
                int i, j, k;
                if ((**g_231))
                    break;
                l_1332--;
                (*g_232) = (l_1332 & l_1227[1]);
                if (l_1332)
                { 
                    uint64_t l_1343[5] = {0xE5D91C2B80828829LL,0xE5D91C2B80828829LL,0xE5D91C2B80828829LL,0xE5D91C2B80828829LL,0xE5D91C2B80828829LL};
                    struct S1 *l_1352[2][5][3] = {{{&g_914,&g_914,&g_914},{(void*)0,&g_914,(void*)0},{&g_914,&g_914,&g_385},{(void*)0,&g_914,&g_914},{&g_385,&g_914,&g_385}},{{(void*)0,&g_914,(void*)0},{&g_914,&g_385,&g_385},{(void*)0,(void*)0,&g_914},{&g_914,&g_385,&g_385},{&g_914,&g_914,(void*)0}}};
                    uint32_t *l_1354[7] = {&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79};
                    uint32_t **l_1353 = &l_1354[4];
                    int16_t *l_1360 = &g_329;
                    uint32_t **l_1363 = &l_1362;
                    int32_t l_1364 = 2L;
                    int32_t l_1409 = 0x23EEA55EL;
                    int i, j, k;
                    (*g_232) = (safe_lshift_func_int8_t_s_s((*p_42), (safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_1343[2] < (safe_lshift_func_int8_t_s_s((((l_1183 >= (l_1332 > ((((--(*g_470)) || (((*g_105) ^= (((l_1350[4][1] , (&g_470 != &g_470)) && (**g_231)) == 0xA84F16FCL)) < l_1351)) , (void*)0) != l_1352[1][2][0]))) == l_985) | l_1343[2]), 3))), 0x2306L)), 1L)), l_1343[1]))));
                    g_90 &= (l_1353 == (l_1363 = (((l_985 != (0x684CDC79L >= (((safe_mul_func_int16_t_s_s(5L, ((*l_1360) = (((((&l_1149 != p_42) , l_1357[1][0][2]) != l_1358[1][1][5]) ^ 0x6C8726B812D5C3ABLL) > l_1359)))) , (*g_232)) && l_1343[0]))) == 1L) , l_1361)));
                    l_1364 |= (**g_231);
                    g_823[3] = (safe_div_func_int32_t_s_s((((!((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((**g_469), (safe_rshift_func_int16_t_s_u((((((safe_sub_func_uint8_t_u_u((l_1395 = ((((*l_1096) &= ((safe_div_func_uint8_t_u_u(((*g_105) ^= (safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((((safe_mul_func_int16_t_s_s((((((((**g_231) = ((l_1351 = (safe_mod_func_int32_t_s_s((65532UL >= ((g_619--) , ((void*)0 == l_1389))), 0x1A94549AL))) | ((g_1390 != l_1391) || 0x29L))) ^ l_1332) | l_1386) || 18446744073709551615UL) ^ l_1395) ^ 0x04L), 4L)) >= 0xB56FF9A98C024000LL) & l_1396), l_1396)), 3L))), 247UL)) || l_1332)) == 0x812E9684673CB4C3LL) ^ (-1L))), l_1332)) <= (*p_43)) <= 0x1E27L) , 3UL) && l_1351), 5)))), (*p_42))) | l_1396)) ^ 18446744073709551615UL) > 1L), l_1396));
                    (**g_231) ^= (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((((void*)0 != p_44) >= ((*l_1096) ^= (safe_add_func_uint64_t_u_u((l_1364 = (l_1396 , l_1359)), l_1343[2])))), ((((((((l_1395 && ((safe_lshift_func_uint16_t_u_u(((*g_718)++), 9)) != 65535UL)) , (-1L)) , (*p_42)) ^ (*p_44)) <= l_1351) <= 1L) ^ l_1386) || l_1412))), l_1409)), l_1351));
                }
                else
                { 
                    uint8_t l_1413 = 0UL;
                    return l_1413;
                }
                if ((safe_mul_func_uint8_t_u_u(((l_1350[4][1] , (&g_469 != &g_469)) > ((((safe_mod_func_uint16_t_u_u((l_1418 , 0UL), ((safe_add_func_uint16_t_u_u(l_1236, l_1183)) ^ 4L))) >= l_1211[1]) , (void*)0) != (*g_231))), l_1236)))
                { 
                    (*g_232) = (safe_add_func_uint8_t_u_u(8UL, (safe_div_func_uint16_t_u_u(l_1395, (safe_mul_func_uint8_t_u_u(l_1332, l_1386))))));
                    (*g_232) ^= (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((**g_469) &= (safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(0x48L, 6)) == (l_1227[1] <= (l_1332 , l_1386))), l_1435))), (safe_mod_func_uint8_t_u_u(((***g_392)--), 0x99L)))), (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((g_448.f3 && l_1418.f3), (*p_44))) && (*p_42)), 4L))));
                    return (*g_718);
                }
                else
                { 
                    l_1444 = &l_1418;
                    l_1449 = (l_1446 = &g_590);
                    return l_1359;
                }
            }
            if ((l_1435 == (**g_231)))
            { 
                uint8_t l_1451[7];
                int32_t * const l_1482 = &l_1211[2];
                uint16_t ** const ***l_1484 = (void*)0;
                int i;
                for (i = 0; i < 7; i++)
                    l_1451[i] = 0xBBL;
                l_1451[2]--;
                if (((void*)0 != l_1454))
                { 
                    uint64_t l_1456 = 18446744073709551606UL;
                    struct S1 *****l_1473 = (void*)0;
                    struct S1 *****l_1474 = &l_1358[1][0][0];
                    uint16_t l_1478 = 0x04F1L;
                    (*g_231) = &l_1386;
                    l_1456++;
                    l_1479 = ((*g_232) = (safe_add_func_uint16_t_u_u(0x9A6FL, (safe_mul_func_uint16_t_u_u(((l_1463 <= (0xCF0E279BA80446FCLL ^ (l_1451[4] == (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u((**g_469), ((((*l_1474) = l_1472) != ((g_1475++) , &g_1239)) , 4UL))), l_1478)), g_452)), g_190))))) == g_914.f0), l_1332)))));
                    l_1481 = (l_1480 = (void*)0);
                }
                else
                { 
                    int32_t **l_1483 = &l_1315[1];
                    struct S1 ***l_1486 = &g_657[0];
                    uint16_t **l_1489 = &g_275;
                    int i;
                    (*l_1483) = l_1482;
                    (*g_232) = (((l_1484 != (l_1485 = l_1485)) < (((*p_43) |= (((*g_1238) != l_1486) > (!((l_1488 == (g_592[g_327] = l_1489)) & ((+(safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(1L, 1)), (*l_1482)))) < l_1332))))) && l_1435)) >= (*g_470));
                    if ((**g_231))
                        continue;
                }
                for (g_822 = 0; (g_822 <= 0); g_822 += 1)
                { 
                    int32_t l_1495 = 8L;
                    return l_1495;
                }
            }
            else
            { 
                for (g_79 = 0; (g_79 > 48); g_79 = safe_add_func_int16_t_s_s(g_79, 9))
                { 
                    uint64_t l_1498 = 1UL;
                    l_1211[2] |= l_1227[1];
                    if ((**g_231))
                        break;
                    l_1498--;
                }
            }
            for (g_914.f2 = (-22); (g_914.f2 > 48); ++g_914.f2)
            { 
                uint32_t l_1505[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                uint16_t *****l_1518 = &g_590;
                uint32_t l_1526[7][6] = {{0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L},{0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L},{0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L},{0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L},{0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L},{0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L},{0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L,0x12BC3629L}};
                int i, j;
                for (l_1359 = 21; (l_1359 <= 16); --l_1359)
                { 
                    uint16_t *****l_1519[6][3][2] = {{{&g_590,&g_590},{&g_590,&g_590},{&g_590,(void*)0}},{{(void*)0,&g_590},{&g_590,&g_590},{&g_590,&g_590}},{{(void*)0,(void*)0},{&g_590,&g_590},{&g_590,&g_590}},{{&g_590,(void*)0},{(void*)0,&g_590},{&g_590,&g_590}},{{&g_590,&g_590},{(void*)0,(void*)0},{&g_590,&g_590}},{{&g_590,&g_590},{&g_590,(void*)0},{(void*)0,&g_590}}};
                    const int32_t l_1525 = (-1L);
                    int i, j, k;
                    l_1505[1]++;
                    (**g_231) = ((g_157 , func_19(func_19(g_1508, ((+((((**l_1488) = ((((safe_rshift_func_uint16_t_u_u((((g_242 | (((~4294967295UL) && (safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((l_1519[0][1][0] = l_1518) == l_1520))), (safe_add_func_uint32_t_u_u((l_1523[0] != l_1524), l_1525)))) == 0x0E82L), (*g_718)))) , 0x733D0BC677CE1DF5LL)) && l_1505[1]) && 0x80L), 12)) | l_1525) == (**g_469)) != 4294967295UL)) | l_1526[3][0]) , l_1525)) >= l_1526[3][0]), l_1463), l_1463, l_1525)) != (void*)0);
                }
                if (l_1386)
                    continue;
                return l_1505[1];
            }
            g_823[3] |= (**g_231);
        }
        l_1529++;
        for (g_452 = 8; (g_452 <= 60); ++g_452)
        { 
            uint32_t **l_1547 = (void*)0;
            int32_t l_1548 = (-2L);
            struct S0 ****l_1562 = &l_1240;
            uint16_t *****l_1570 = (void*)0;
            for (g_619 = 27; (g_619 < 7); g_619--)
            { 
                int8_t l_1536[7][1][1] = {{{0x31L}},{{9L}},{{0x31L}},{{9L}},{{0x31L}},{{9L}},{{0x31L}}};
                uint32_t **l_1545 = &l_1202;
                uint32_t ***l_1546[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1546[i] = &g_352[1];
                if (l_1536[3][0][0])
                    break;
                l_985 = (safe_mul_func_int16_t_s_s(0x872BL, (((1UL >= (safe_mul_func_uint16_t_u_u((*g_718), ((safe_mul_func_uint8_t_u_u(6UL, (0xE6L | ((*g_718) >= ((((l_1547 = l_1545) != &g_353) && l_1527) == 0x9C5AL))))) <= l_1548)))) == (*p_42)) | l_1536[3][0][0])));
            }
            for (l_1463 = 0; (l_1463 > 50); l_1463 = safe_add_func_uint8_t_u_u(l_1463, 8))
            { 
                int16_t l_1551 = 0x62A3L;
                int32_t l_1564 = 1L;
                int32_t l_1565 = 0L;
                int32_t l_1566 = (-1L);
                if (l_1551)
                    break;
                for (g_152 = 0; (g_152 <= 46); ++g_152)
                { 
                    int32_t l_1556[4] = {0L,0L,0L,0L};
                    int16_t *l_1559 = &g_170;
                    struct S0 ****l_1561 = &g_1199[2];
                    int i;
                    (*g_231) = &l_1212[1][2];
                    l_1183 &= (((((*g_232) = (safe_sub_func_int16_t_s_s(0xE802L, g_1445.f4))) != (l_1556[3] , (((l_1548 = ((safe_add_func_int16_t_s_s(((*l_1559) &= l_1556[1]), l_1211[0])) , (l_1560 ^ l_1548))) && l_1556[3]) | l_1560))) , l_1561) != l_1562);
                    (*g_232) = ((***l_1561) == l_1563);
                }
                --l_1567[0][1];
            }
            if (l_1548)
            { 
                l_1211[2] = (l_1548 < ((void*)0 == l_1570));
                for (g_55 = 0; (g_55 <= 10); ++g_55)
                { 
                    uint16_t l_1574 = 65535UL;
                    l_1573 = &g_1390;
                    return l_1574;
                }
                l_1576 = l_1575[0][3];
                for (g_1445.f2 = 16; (g_1445.f2 != 9); g_1445.f2--)
                { 
                    (*g_231) = &l_1211[2];
                }
            }
            else
            { 
                int32_t l_1580 = 1L;
                return l_1580;
            }
            for (g_385.f0 = (-25); (g_385.f0 >= 13); g_385.f0 = safe_add_func_uint32_t_u_u(g_385.f0, 9))
            { 
                uint32_t l_1587 = 0x43BE92CFL;
                int32_t l_1590[6] = {0xE9AA9A35L,0xE9AA9A35L,0x35E2E194L,0xE9AA9A35L,0xE9AA9A35L,0xE9AA9A35L};
                int i;
                for (g_703 = 23; (g_703 < (-27)); g_703 = safe_sub_func_int32_t_s_s(g_703, 5))
                { 
                    (*g_231) = &g_823[1];
                }
                l_1183 = ((void*)0 == &g_352[2]);
                if (l_1548)
                    continue;
                if (l_1548)
                    continue;
                for (l_1228 = (-23); (l_1228 < 49); l_1228++)
                { 
                    l_1587++;
                    l_1590[0] = l_1587;
                }
            }
        }
    }
lbl_1767:
    if ((safe_sub_func_int8_t_s_s(((*g_841) , ((g_327 != (safe_sub_func_int64_t_s_s(((((255UL && ((+(((l_1596 = l_1596) != l_1597) | (-7L))) || (g_448.f1 < (*g_718)))) <= (*g_718)) , (***g_392)) ^ (*p_43)), g_448.f2))) >= l_1598[4][3])), 5UL)))
    { 
        struct S1 **l_1603 = (void*)0;
        const union U2 l_1606 = {0};
        struct S0 ****l_1608 = &g_1199[2];
        struct S0 *****l_1607 = &l_1608;
        const int32_t l_1609[3] = {0L,0L,0L};
        union U2 *l_1610 = &g_157;
        const int32_t *l_1614[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1614[i] = (void*)0;
        g_90 &= ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((((((**l_1472) = l_1603) == (void*)0) & ((safe_lshift_func_uint8_t_u_s((l_1606 , ((***g_392) |= (l_1607 != (void*)0))), 5)) , (l_1609[0] || l_1609[2]))) == 2UL) || 0UL), l_1609[1])), 0x498F9817L)) , l_1609[2]);
        l_1610 = (*l_1048);
        for (g_55 = 0; (g_55 <= 1); g_55 += 1)
        { 
            g_823[1] = (safe_div_func_uint16_t_u_u((&g_1390 != (void*)0), 0x5C9DL));
            if (g_448.f4)
                goto lbl_1613;
            if (g_327)
                continue;
        }
        l_1614[0] = &l_1609[0];
        if (g_104.f4)
            goto lbl_1613;
    }
    else
    { 
        uint32_t l_1615 = 0x888AA2E0L;
        l_1615++;
    }
    for (g_914.f0 = 6; (g_914.f0 <= 23); g_914.f0 = safe_add_func_int16_t_s_s(g_914.f0, 8))
    { 
        uint16_t l_1620 = 0x6A7BL;
        int32_t l_1625 = 0xD61B2D0EL;
        int32_t l_1631 = 0x33437DF4L;
        int8_t l_1654 = 1L;
        int32_t l_1656[1][7][5] = {{{0x0A548141L,0x0A548141L,0x0A548141L,0x0A548141L,0x0A548141L},{1L,1L,1L,1L,1L},{0x0A548141L,0x0A548141L,0x0A548141L,0x0A548141L,0x0A548141L},{1L,1L,1L,1L,1L},{0x0A548141L,0x0A548141L,0x0A548141L,0x0A548141L,0x0A548141L},{1L,1L,1L,1L,1L},{0x0A548141L,0x0A548141L,0x0A548141L,0x0A548141L,0x0A548141L}}};
        int32_t ***l_1662 = &g_231;
        int8_t l_1699 = 0x0CL;
        int32_t l_1704 = 0x56AC4377L;
        struct S1 l_1722 = {0UL,1UL,18446744073709551615UL,6UL,0x5364AACE51E9778BLL};
        int32_t *l_1725 = &l_1157;
        int32_t l_1777 = (-4L);
        struct S1 *****l_1780 = &l_1472;
        int8_t l_1818 = 0x6AL;
        int8_t l_1819[5][4][6] = {{{0xA3L,1L,1L,(-1L),0xC3L,1L},{0xC3L,0xA3L,(-3L),1L,(-4L),0x0AL},{0xC3L,1L,1L,(-1L),0x68L,0x23L},{0xA3L,0xC3L,0L,(-3L),(-4L),(-4L)}},{{1L,0L,0L,1L,0xC3L,0x23L},{(-1L),1L,1L,1L,(-1L),0x0AL},{1L,0x23L,(-3L),0x0AL,(-1L),1L},{0xA3L,1L,1L,0x23L,0xC3L,1L}},{{0xC3L,0L,(-3L),(-4L),(-4L),(-3L)},{0xC3L,0xC3L,1L,0x23L,0x68L,(-1L)},{0xA3L,1L,0L,0x0AL,(-4L),1L},{1L,0xA3L,0L,1L,0xC3L,(-1L)}},{{(-1L),1L,1L,1L,(-1L),(-3L)},{1L,(-1L),(-3L),(-3L),(-1L),1L},{0xA3L,1L,1L,(-1L),0xC3L,1L},{0xC3L,0xA3L,(-3L),1L,(-4L),0x0AL}},{{0xC3L,1L,1L,(-1L),0x68L,0x23L},{0xA3L,0xC3L,0L,(-3L),(-4L),(-4L)},{1L,0L,0L,1L,0xC3L,0x23L},{(-1L),1L,1L,1L,(-1L),0x0AL}}};
        union U2 l_1825 = {0};
        int8_t l_1842 = 0xEDL;
        uint8_t l_1843 = 0xE2L;
        int64_t l_1877[5] = {0xCEF2B6523884CE97LL,0xCEF2B6523884CE97LL,0xCEF2B6523884CE97LL,0xCEF2B6523884CE97LL,0xCEF2B6523884CE97LL};
        uint64_t l_1886[4][6] = {{8UL,8UL,0x40D0EF7BB31DB93DLL,0x243AA36A84012D95LL,0UL,1UL},{0xF56EC8C60C142D9CLL,0x40D0EF7BB31DB93DLL,0UL,1UL,0UL,0x40D0EF7BB31DB93DLL},{0x243AA36A84012D95LL,0xF56EC8C60C142D9CLL,0UL,0x45A392F82F96CDECLL,8UL,1UL},{0UL,0x45A392F82F96CDECLL,0x40D0EF7BB31DB93DLL,0x40D0EF7BB31DB93DLL,0x45A392F82F96CDECLL,0UL}};
        uint16_t l_1888 = 65535UL;
        int i, j, k;
        if (l_1620)
            break;
        if (l_1620)
        { 
            int16_t l_1621 = 0x1691L;
            uint8_t ****l_1629 = &g_392;
            int32_t l_1633 = 0xD17883E4L;
            int32_t l_1657[5][1][5] = {{{0xF965F226L,0x8AEBDB95L,0x8AEBDB95L,0x8AEBDB95L,(-1L)}},{{0x8AEBDB95L,0x8AEBDB95L,0xF965F226L,0x8AEBDB95L,0x8AEBDB95L}},{{(-1L),0x8AEBDB95L,(-1L),(-1L),0x8AEBDB95L}},{{0x8AEBDB95L,(-1L),(-1L),0x8AEBDB95L,(-1L)}},{{0x8AEBDB95L,0x8AEBDB95L,0xF965F226L,0x8AEBDB95L,0x8AEBDB95L}}};
            struct S1 **** const *l_1669 = &l_1472;
            int32_t l_1694 = 0xAA618615L;
            int32_t l_1705 = (-4L);
            uint32_t l_1711[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1711[i] = 3UL;
            if ((l_1621 = 0x5D1DA09CL))
            { 
                int32_t l_1624 = 1L;
                int8_t *****l_1641 = &l_1637[0];
                int8_t *****l_1642 = &g_1390;
                int16_t l_1645[3][6] = {{1L,(-1L),0xAFAAL,0xAFAAL,(-1L),1L},{1L,0x366CL,(-10L),0xAFAAL,0x366CL,0xAFAAL},{1L,0L,1L,0xAFAAL,0L,(-10L)}};
                struct S0 l_1650[7] = {{0x47L,0xF4L,1UL,0x257EL,0L},{0x47L,0xF4L,1UL,0x257EL,0L},{0x47L,0xF4L,1UL,0x257EL,0L},{0x47L,0xF4L,1UL,0x257EL,0L},{0x47L,0xF4L,1UL,0x257EL,0L},{0x47L,0xF4L,1UL,0x257EL,0L},{0x47L,0xF4L,1UL,0x257EL,0L}};
                struct S0 *** const *l_1667 = &g_1199[2];
                struct S0 *** const **l_1666 = &l_1667;
                uint32_t l_1671 = 0x7EAB36A2L;
                struct S1 l_1684 = {0x8AD4L,0xA847BCF7L,0xF86D352CL,0x5CA9E062L,1L};
                int32_t l_1695 = 0x2346E22CL;
                int32_t l_1696 = 0x9B0F975EL;
                int32_t l_1697 = 0x2D847520L;
                int32_t l_1698 = 8L;
                int32_t l_1701 = (-3L);
                int32_t l_1702 = 0xDCB84FE8L;
                int32_t l_1703 = (-1L);
                int32_t l_1706 = 0L;
                int32_t l_1707 = 0x9088DA8DL;
                int32_t l_1708 = 9L;
                int32_t l_1709[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1709[i] = 0x66D9002DL;
                for (g_104.f4 = (-13); (g_104.f4 >= (-18)); g_104.f4--)
                { 
                    l_1626++;
                    if (l_1624)
                        break;
                    (*g_900) = l_1629;
                }
                for (g_79 = 0; (g_79 <= 3); g_79 += 1)
                { 
                    int64_t l_1630 = 0xD89E36C802A406B8LL;
                    int32_t l_1632 = 0x4D7E15CAL;
                    int i;
                    --g_1634[3];
                }
                (*l_1642) = ((*l_1641) = l_1637[0]);
                if (((safe_div_func_uint8_t_u_u(((void*)0 == (***g_1198)), l_1645[1][2])) && (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((*g_470), ((l_1650[4] , ((((safe_mul_func_int16_t_s_s((((*g_1508) = 0xFDL) > (*p_42)), l_1633)) , l_1620) , 0xC94CL) , l_1633)) || l_1633))), g_1634[3]))))
                { 
                    int16_t l_1653[7];
                    int32_t l_1655 = 0xE852574AL;
                    int32_t l_1658[2];
                    int32_t ****l_1663 = &l_1662;
                    struct S0 ***l_1664 = (void*)0;
                    struct S0 ****l_1665[2];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1653[i] = (-1L);
                    for (i = 0; i < 2; i++)
                        l_1658[i] = 0x00116212L;
                    for (i = 0; i < 2; i++)
                        l_1665[i] = &g_1199[1];
                    --l_1659;
                    (*l_1663) = l_1662;
                    g_1199[3] = l_1664;
                    l_1666 = ((&g_157 == (void*)0) , l_1666);
                }
                else
                { 
                    int8_t l_1668[4] = {0x42L,0x42L,0x42L,0x42L};
                    uint64_t *l_1670[7] = {&g_799,&g_799,&g_799,&g_799,&g_799,&g_799,&g_799};
                    int i;
                    l_1671 = ((0UL || ((l_1668[2] <= l_1645[0][3]) != (l_1669 == &l_1472))) > ((((g_335 ^= (**g_469)) && l_1621) , l_1668[2]) | l_1650[4].f3));
                }
                for (l_1220 = (-30); (l_1220 >= (-5)); ++l_1220)
                { 
                    int64_t *l_1691[6][7] = {{(void*)0,(void*)0,(void*)0,&g_448.f4,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_448.f4,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_448.f4,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_448.f4,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_448.f4,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_448.f4,(void*)0,(void*)0,(void*)0}};
                    int16_t *l_1692 = &g_822;
                    int32_t l_1693[5][4][2];
                    int8_t l_1700 = (-1L);
                    int8_t l_1710 = (-3L);
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1693[i][j][k] = 0xF1EBAD12L;
                        }
                    }
                    l_1694 &= (safe_mul_func_int16_t_s_s(g_1445.f1, (((l_1693[1][0][1] = (((*g_470) && (((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((6L == ((((((safe_rshift_func_int16_t_s_u((l_1684 , ((*l_1692) = (safe_mod_func_int64_t_s_s((g_104.f4 = ((*g_470) ^ (((safe_rshift_func_uint16_t_u_s(l_1684.f2, (safe_div_func_uint16_t_u_u(l_1657[0][0][0], g_385.f0)))) < (-1L)) & 65530UL))), g_259)))), l_1693[3][3][0])) & l_1633) <= l_1684.f0) & l_1684.f3) >= l_1621) , 0x811BAF0FF954FA03LL)), l_1621)), (-8L))), l_1633)) >= 4UL) , l_1693[4][0][1])) == l_1693[4][3][0])) < 0x90L) ^ (-1L))));
                    l_1711[0]++;
                }
            }
            else
            { 
                uint32_t l_1723 = 1UL;
                uint32_t *l_1724 = &l_1711[0];
                (**g_391) = (**l_1629);
                for (l_1450 = 29; (l_1450 == 3); l_1450 = safe_sub_func_int16_t_s_s(l_1450, 5))
                { 
                    if (g_242)
                        goto lbl_1613;
                    (*g_231) = &l_1633;
                    (*g_232) = (((void*)0 != &l_1620) >= (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(65528UL, (***l_1662))), ((****g_391) = (****g_391)))), g_914.f0)));
                }
                l_1705 |= ((l_1722 , (l_1723 < ((*l_1724) |= l_1633))) & (l_1724 != (void*)0));
            }
            (**l_1662) = l_1725;
        }
        else
        { 
            struct S0 ****l_1726 = &l_1240;
            int32_t l_1727 = 0x27B786DAL;
            uint32_t ***l_1746[6] = {&l_1263[0],&g_352[0],&l_1263[0],&l_1263[0],&g_352[0],&l_1263[0]};
            int64_t l_1750 = 0x38D59F6F69754861LL;
            int32_t l_1751 = 0xFF03B03EL;
            int32_t l_1754 = (-1L);
            int32_t l_1760 = 1L;
            int32_t l_1761[4] = {(-3L),(-3L),(-3L),(-3L)};
            int16_t *l_1770[6] = {&l_1220,&l_1220,(void*)0,&l_1220,&l_1220,(void*)0};
            int32_t ***l_1814 = &g_231;
            uint32_t * const *l_1821 = &g_353;
            uint32_t * const **l_1820 = &l_1821;
            uint32_t * const ***l_1822 = &l_1820;
            int32_t l_1827 = 0x5AEA79A3L;
            struct S1 l_1830 = {65535UL,7UL,0UL,1UL,-1L};
            struct S0 l_1873[5][3][5] = {{{{1UL,1L,8UL,0x16D7L,-2L},{1UL,1L,8UL,0x16D7L,-2L},{0xC2L,0L,0x5798L,2L,-1L},{1UL,1L,8UL,0x16D7L,-2L},{1UL,1L,8UL,0x16D7L,-2L}},{{0UL,0x85L,0UL,-4L,2L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0UL,0x85L,0UL,-4L,2L},{0UL,0x85L,0UL,-4L,2L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL}},{{1UL,1L,8UL,0x16D7L,-2L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{1UL,1L,8UL,0x16D7L,-2L},{249UL,-1L,0x2DF7L,0x9E54L,-1L}}},{{{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0x5EL,0x88L,0x33B0L,0x7B2FL,0L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL}},{{249UL,-1L,0x2DF7L,0x9E54L,-1L},{1UL,1L,8UL,0x16D7L,-2L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{1UL,1L,8UL,0x16D7L,-2L}},{{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0UL,0x85L,0UL,-4L,2L},{0UL,0x85L,0UL,-4L,2L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0UL,0x85L,0UL,-4L,2L}}},{{{1UL,1L,8UL,0x16D7L,-2L},{1UL,1L,8UL,0x16D7L,-2L},{0xC2L,0L,0x5798L,2L,-1L},{1UL,1L,8UL,0x16D7L,-2L},{1UL,1L,8UL,0x16D7L,-2L}},{{0UL,0x85L,0UL,-4L,2L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0UL,0x85L,0UL,-4L,2L},{0UL,0x85L,0UL,-4L,2L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL}},{{1UL,1L,8UL,0x16D7L,-2L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{1UL,1L,8UL,0x16D7L,-2L},{249UL,-1L,0x2DF7L,0x9E54L,-1L}}},{{{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0x5EL,0x88L,0x33B0L,0x7B2FL,0L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL}},{{249UL,-1L,0x2DF7L,0x9E54L,-1L},{1UL,1L,8UL,0x16D7L,-2L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{1UL,1L,8UL,0x16D7L,-2L}},{{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0UL,0x85L,0UL,-4L,2L},{0UL,0x85L,0UL,-4L,2L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0UL,0x85L,0UL,-4L,2L}}},{{{1UL,1L,8UL,0x16D7L,-2L},{1UL,1L,8UL,0x16D7L,-2L},{0xC2L,0L,0x5798L,2L,-1L},{1UL,1L,8UL,0x16D7L,-2L},{1UL,1L,8UL,0x16D7L,-2L}},{{0UL,0x85L,0UL,-4L,2L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL},{0UL,0x85L,0UL,-4L,2L},{0UL,0x85L,0UL,-4L,2L},{0xD9L,-2L,0xD0ECL,1L,0x7FABAE470559490FLL}},{{1UL,1L,8UL,0x16D7L,-2L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{249UL,-1L,0x2DF7L,0x9E54L,-1L},{1UL,1L,8UL,0x16D7L,-2L},{0xC2L,0L,0x5798L,2L,-1L}}}};
            int i, j, k;
            (*l_1726) = l_1240;
            (*l_1725) ^= (g_823[1] = 0xCCD15DD4L);
            for (g_190 = 0; (g_190 <= 4); g_190 += 1)
            { 
                uint64_t l_1730[4] = {0x66EEA989DAB2D4FELL,0x66EEA989DAB2D4FELL,0x66EEA989DAB2D4FELL,0x66EEA989DAB2D4FELL};
                struct S1 l_1745 = {1UL,0x8FB7B321L,0UL,18446744073709551615UL,-7L};
                int32_t *l_1749 = (void*)0;
                int32_t l_1755 = 5L;
                int32_t l_1756 = (-1L);
                int32_t l_1757 = 0x29AF031FL;
                int32_t l_1759[5] = {0L,0L,0L,0L,0L};
                int i;
                for (l_1625 = 0; (l_1625 >= 0); l_1625 -= 1)
                { 
                    int32_t l_1728 = 3L;
                    int32_t l_1729 = 0xD5F7B04FL;
                    uint32_t ***l_1743 = &g_352[0];
                    uint32_t ****l_1747[5][2] = {{&l_1746[0],&l_1746[0]},{&l_1746[0],&l_1746[0]},{&l_1746[0],&l_1746[0]},{&l_1746[0],&l_1746[0]},{&l_1746[0],&l_1746[0]}};
                    int32_t l_1752 = 0x8770A851L;
                    int32_t l_1753[6] = {(-8L),0x0B1FC236L,0x0B1FC236L,(-8L),0x0B1FC236L,0x0B1FC236L};
                    int32_t l_1758[5] = {0x6CD6F0CDL,0x6CD6F0CDL,0x6CD6F0CDL,0x6CD6F0CDL,0x6CD6F0CDL};
                    int i, j, k;
                    ++l_1730[0];
                    if (l_1598[(l_1625 + 1)][(l_1625 + 2)])
                        continue;
                    (***g_1198) = ((g_170 &= (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((&g_8 == p_43), (((safe_rshift_func_int8_t_s_u(1L, ((g_1744[3] = l_1743) == (l_1745 , (l_1748[4][0] = l_1746[0]))))) >= g_1445.f4) , l_1727))) >= 0x01C9L), (*l_1725))), 0x1926L)), (*g_1508)))) , (void*)0);
                    (*g_231) = l_1749;
                    ++l_1762[0];
                }
                for (l_1450 = 0; (l_1450 <= 0); l_1450 += 1)
                { 
                    int32_t ****l_1766 = &l_1765[2];
                    int i, j;
                    (*l_1766) = l_1765[1];
                    (***l_1766) = &l_1757;
                    (**l_1662) = (*g_231);
                    return l_1598[(l_1450 + 2)][(g_190 + 1)];
                }
                for (g_330 = 1; (g_330 <= 4); g_330 += 1)
                { 
                    int i, j;
                    (*l_1725) = 0xA6501442L;
                    if (l_1598[g_190][g_190])
                        continue;
                    if (l_1598[g_330][(g_330 + 1)])
                        continue;
                    if (g_327)
                        goto lbl_1767;
                }
            }
            if ((safe_lshift_func_int16_t_s_s((g_703 = l_1750), 7)))
            { 
                struct S1 * const ***l_1779 = (void*)0;
                struct S1 * const ****l_1778 = &l_1779;
                int32_t l_1782 = (-1L);
                int32_t l_1786[5][1][6] = {{{0xB48A148AL,0xB48A148AL,1L,0xB48A148AL,0xB48A148AL,1L}},{{0xB48A148AL,0xB48A148AL,1L,0xB48A148AL,0xB48A148AL,1L}},{{0xB48A148AL,0xB48A148AL,1L,0xB48A148AL,0xB48A148AL,1L}},{{0xB48A148AL,0xB48A148AL,1L,0xB48A148AL,0xB48A148AL,1L}},{{0xB48A148AL,0xB48A148AL,1L,0xB48A148AL,0xB48A148AL,1L}}};
                int i, j, k;
                if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((*l_1725) == ((*g_718) = (0x32A2L < ((0UL != (-6L)) || ((safe_rshift_func_uint16_t_u_s(((l_1777 , l_1778) == (g_1781 = l_1780)), 0)) <= l_1782))))), g_616[1])), (*p_43))))
                { 
                    union U2 *l_1783 = &g_157;
                    int32_t *l_1784[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1784[i] = &l_1782;
                    (*l_1048) = l_1783;
                    l_1784[2] = l_1784[1];
                }
                else
                { 
                    (*l_1725) = g_1172.f0;
                }
                if (l_1785)
                { 
                    uint32_t l_1787 = 4294967292UL;
                    ++l_1787;
                    if (g_1445.f4)
                        goto lbl_1767;
                    (**l_1662) = &g_90;
                    if (l_1786[1][0][1])
                        break;
                }
                else
                { 
                    return g_1790;
                }
            }
            else
            { 
                uint32_t l_1793 = 1UL;
                union U2 l_1794 = {0};
                int8_t * const l_1795 = &g_887;
                uint8_t l_1799[1];
                int32_t * const **l_1815[3];
                int i;
                for (i = 0; i < 1; i++)
                    l_1799[i] = 0UL;
                for (i = 0; i < 3; i++)
                    l_1815[i] = (void*)0;
                for (g_90 = (-13); (g_90 >= (-14)); g_90--)
                { 
                    int8_t **l_1796 = &l_1640[0];
                    uint32_t l_1797 = 0xBA94924AL;
                    uint8_t l_1798 = 0xB2L;
                    int32_t l_1802[2][6][5] = {{{1L,0x2F8B74AAL,1L,0x2F8B74AAL,1L},{(-2L),5L,5L,(-2L),(-2L)},{1L,0x2F8B74AAL,1L,0x2F8B74AAL,1L},{(-2L),(-2L),5L,5L,(-2L)},{1L,0x2F8B74AAL,1L,0x2F8B74AAL,1L},{(-2L),5L,5L,(-2L),(-2L)}},{{1L,0x2F8B74AAL,1L,0x2F8B74AAL,1L},{(-2L),(-2L),5L,5L,(-2L)},{1L,0x2F8B74AAL,1L,0x2F8B74AAL,1L},{(-2L),5L,5L,(-2L),(-2L)},{1L,0x2F8B74AAL,1L,0x2F8B74AAL,1L},{(-2L),(-2L),5L,5L,(-2L)}}};
                    uint32_t *l_1816 = &g_259;
                    int16_t l_1817 = 0xFDD1L;
                    int i, j, k;
                    l_1798 |= ((*l_1725) |= ((p_44 != (l_1793 , func_19(((*l_1796) = (l_1794 , l_1795)), l_1761[2], l_1797))) != l_1797));
                    if (l_1727)
                        break;
                    if (l_1799[0])
                        continue;
                    (**l_1662) = &l_1761[0];
                    l_1819[0][1][4] |= (safe_div_func_int16_t_s_s((l_1802[0][5][3] = l_1797), ((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_1807[2] == (***g_392)) > ((safe_rshift_func_int8_t_s_s(((((((*l_1816) &= ((safe_mod_func_uint64_t_u_u((l_1799[0] < ((65529UL >= (***l_1662)) == (safe_add_func_int32_t_s_s((l_1814 == l_1815[2]), (*g_232))))), 0x59C2C48B2C57965FLL)) == 0x14L)) >= 0xC379D01DL) || (*g_470)) ^ (***l_1662)) & l_1817), (*p_43))) , (***l_1814))), (*g_1508))), 1L)) & (**g_231)) == l_1818) , g_114)));
                }
            }
            if ((((*l_1822) = l_1820) != ((safe_sub_func_int16_t_s_s((18446744073709551615UL > (((l_1825 , (((((g_1826[0][2][4] = ((*p_43) = ((*p_44) = (*g_1508)))) , (l_1827 < ((*l_1725) | (safe_lshift_func_int16_t_s_u(((l_1830 , (**g_469)) < 0UL), 11))))) , (*l_1725)) == 1L) != 0x76L)) & (*l_1725)) < l_1760)), 0xAF55L)) , &l_1263[0])))
            { 
                int32_t l_1833 = 0x6A00FB3BL;
                int32_t l_1834[3];
                int16_t l_1838[1];
                int16_t l_1840 = (-1L);
                uint8_t **** const *l_1857 = (void*)0;
                int8_t *l_1858 = (void*)0;
                int64_t *l_1863 = &g_780[5];
                int i;
                for (i = 0; i < 3; i++)
                    l_1834[i] = 3L;
                for (i = 0; i < 1; i++)
                    l_1838[i] = (-8L);
                if ((safe_lshift_func_int8_t_s_u(((*p_44) = (-1L)), 7)))
                { 
                    int64_t l_1835 = 1L;
                    int32_t l_1836 = (-4L);
                    int32_t l_1839[3][6][7] = {{{1L,0L,(-1L),(-1L),0x82AC7491L,8L,0xB09F980EL},{(-1L),(-1L),(-1L),(-8L),0L,(-1L),0xC9FDAD5BL},{0xED27FBD2L,(-1L),1L,(-1L),0xBE36ECB1L,(-1L),0x2034BF03L},{0x5709FE1AL,0L,0x945F4B22L,0L,0L,8L,0L},{0x70C972F2L,0L,0L,0x70C972F2L,0x25FA3A98L,0x2034BF03L,0L},{0x2034BF03L,0L,0L,0L,1L,0x25FA3A98L,0xD4FE4A2AL}},{{0L,0L,0x467E05ADL,(-1L),(-1L),0L,0L},{0xBE36ECB1L,(-1L),(-5L),0x82AC7491L,0x2034BF03L,(-1L),0L},{(-9L),0xC9FDAD5BL,0L,0x2034BF03L,1L,0xED27FBD2L,0x2034BF03L},{0L,0L,0L,0xE0B769FDL,4L,0x437EDE1AL,0xC9FDAD5BL},{0x25FA3A98L,0x467E05ADL,(-1L),(-9L),0x945F4B22L,3L,0xD4FE4A2AL},{4L,0L,0L,0L,0L,4L,0xFDBD4A20L}},{{0L,0x74311A35L,(-1L),(-5L),0L,0xE0B769FDL,1L},{(-1L),4L,8L,(-9L),0x467E05ADL,0x437EDE1AL,0L},{(-1L),0x74311A35L,3L,0x0ED87544L,(-5L),2L,8L},{0xED27FBD2L,0L,0xBE36ECB1L,0x74311A35L,0L,0L,1L},{(-5L),0x467E05ADL,0L,0x2034BF03L,0L,(-1L),0xED27FBD2L},{0L,(-1L),0L,3L,0x2034BF03L,3L,4L}}};
                    int8_t l_1841[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1841[i] = 0x50L;
                    l_1843--;
                    return l_1839[0][4][6];
                }
                else
                { 
                    uint32_t l_1846 = 18446744073709551609UL;
                    if (g_887)
                        goto lbl_1767;
                    if ((*l_1725))
                        break;
                    l_1846++;
                }
                if ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_1834[0], ((****g_391) |= (safe_rshift_func_int16_t_s_s(((void*)0 != l_1857), 8))))), (0xA93DBFEA00E5FC38LL <= ((*g_470) = ((void*)0 == l_1858))))) <= (safe_rshift_func_int16_t_s_s(((l_1833 = 1L) != 0x23F2L), 4))), l_1838[0])))
                { 
                    int64_t **l_1864[3][3][3] = {{{&l_1863,&l_1863,&g_266},{&g_266,&g_266,(void*)0},{&l_1863,&l_1863,&g_266}},{{&g_266,&g_266,(void*)0},{&l_1863,&l_1863,&g_266},{&g_266,&g_266,(void*)0}},{{&l_1863,&l_1863,&g_266},{&g_266,&g_266,(void*)0},{&l_1863,&l_1863,&g_266}}};
                    int i, j, k;
                    g_90 = (-1L);
                    g_823[3] |= (safe_sub_func_int16_t_s_s(((l_1865 = l_1863) == ((*g_436) , &g_780[3])), (safe_mul_func_int8_t_s_s(((*l_1725) , (*p_43)), ((*p_44) = (*p_42))))));
                }
                else
                { 
                    struct S0 l_1868[7] = {{3UL,0x5AL,0xF2DAL,2L,0x4F706B37E1EFD951LL},{3UL,0x5AL,0xF2DAL,2L,0x4F706B37E1EFD951LL},{3UL,0x5AL,0xF2DAL,2L,0x4F706B37E1EFD951LL},{3UL,0x5AL,0xF2DAL,2L,0x4F706B37E1EFD951LL},{3UL,0x5AL,0xF2DAL,2L,0x4F706B37E1EFD951LL},{3UL,0x5AL,0xF2DAL,2L,0x4F706B37E1EFD951LL},{3UL,0x5AL,0xF2DAL,2L,0x4F706B37E1EFD951LL}};
                    int i;
                    (*l_1725) = (l_1868[6] , (((safe_div_func_int32_t_s_s((l_1834[0] || l_1834[1]), l_1833)) , l_1472) != (l_1871[3][0][3] = ((*g_470) , (*g_1781)))));
                    if (l_1868[6].f3)
                        continue;
                }
            }
            else
            { 
                int32_t l_1872 = 1L;
                int8_t l_1879 = 0xE7L;
                int32_t l_1880 = 1L;
                int32_t l_1881 = 3L;
                int32_t l_1882 = 1L;
                if (l_1872)
                    break;
                if ((l_1873[0][0][1] , ((*l_1725) = (((l_1872 & ((l_1825 , 0x5E60132AC01A1245LL) && g_448.f3)) >= (safe_mul_func_int16_t_s_s(0xF826L, ((*l_1725) == l_1827)))) | 0x85L))))
                { 
                    int32_t *l_1876 = &g_367[0][0][2];
                    (**l_1814) = (((*l_1876) = l_1872) , &g_327);
                }
                else
                { 
                    uint32_t l_1883 = 9UL;
                    l_1877[2] = ((*l_1725) = 9L);
                    l_1883--;
                }
                if (l_1886[1][0])
                    continue;
                (**l_1662) = &l_1827;
            }
        }
        for (g_385.f2 = 0; (g_385.f2 <= 0); g_385.f2 += 1)
        { 
            for (g_259 = 0; (g_259 <= 0); g_259 += 1)
            { 
                uint32_t l_1887[6][3] = {{18446744073709551614UL,0xCE9EEE56L,18446744073709551615UL},{0xCE9EEE56L,18446744073709551614UL,18446744073709551614UL},{18446744073709551615UL,18446744073709551614UL,1UL},{18446744073709551615UL,0xCE9EEE56L,0x7BB16865L},{18446744073709551615UL,18446744073709551615UL,0x7BB16865L},{0xCE9EEE56L,18446744073709551615UL,1UL}};
                int i, j;
                if (l_1887[2][2])
                    break;
                return l_1887[0][0];
            }
        }
        return l_1888;
    }
    g_327 |= ((g_729[1][0][2] = (void*)0) != (**g_391));
    (*g_231) = &g_90;
    return l_1890;
}



static int8_t * func_45(uint32_t  p_46, uint64_t  p_47, const uint8_t  p_48, const uint16_t  p_49, int32_t  p_50)
{ 
    int32_t *l_498[2][3][2];
    const uint64_t l_515 = 0xB223BC8A3F6CF749LL;
    const struct S1 l_539 = {0UL,0x24F87E7DL,0x45ECBD3CL,0xBAC041A8L,0xDB7FA4C102F4E37DLL};
    int8_t *l_542[1];
    uint32_t l_571 = 4294967291UL;
    union U2 *l_574 = &g_157;
    union U2 **l_573 = &l_574;
    struct S0 l_578[6] = {{0x0CL,0x3FL,0UL,0x3AB1L,4L},{0x0CL,0x3FL,0UL,0x3AB1L,4L},{0x0CL,0x3FL,0UL,0x3AB1L,4L},{0x0CL,0x3FL,0UL,0x3AB1L,4L},{0x0CL,0x3FL,0UL,0x3AB1L,4L},{0x0CL,0x3FL,0UL,0x3AB1L,4L}};
    union U2 *l_626 = &g_157;
    uint32_t **l_656 = (void*)0;
    uint64_t l_723[5] = {0UL,0UL,0UL,0UL,0UL};
    struct S1 ***l_733 = &g_657[0];
    uint16_t ****l_744[6];
    uint64_t *** const l_755 = &g_469;
    const uint16_t l_840 = 0xEA64L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_498[i][j][k] = &g_3;
        }
    }
    for (i = 0; i < 1; i++)
        l_542[i] = &g_24;
    for (i = 0; i < 6; i++)
        l_744[i] = &g_591;
lbl_593:
    (*g_231) = l_498[0][0][1];
    for (g_329 = 0; (g_329 <= 1); g_329 += 1)
    { 
        int8_t l_502[6] = {0x6AL,0x6AL,0x6AL,0x6AL,0x6AL,0x6AL};
        uint64_t ***l_511 = &g_469;
        int32_t l_518 = 0x8F5A80E5L;
        int32_t l_540[4][2];
        struct S0 *l_575 = &g_448;
        int32_t l_612 = 0L;
        uint32_t l_634[3][7][1] = {{{18446744073709551608UL},{1UL},{9UL},{1UL},{18446744073709551608UL},{0xDCF11DCEL},{0xDCF11DCEL}},{{18446744073709551608UL},{1UL},{9UL},{1UL},{18446744073709551608UL},{0xDCF11DCEL},{0xDCF11DCEL}},{{18446744073709551608UL},{1UL},{9UL},{1UL},{18446744073709551608UL},{0xDCF11DCEL},{0xDCF11DCEL}}};
        union U2 l_648 = {0};
        uint8_t l_706 = 253UL;
        uint16_t *l_719[4];
        int8_t *l_748 = &l_502[2];
        union U2 **l_752 = &l_626;
        int32_t *l_778 = &g_327;
        const struct S1 * const l_852 = &g_385;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_540[i][j] = 8L;
        }
        for (i = 0; i < 4; i++)
            l_719[i] = &l_648.f1;
        if (p_48)
        { 
            int16_t l_512 = 0x7BCDL;
            uint8_t ****l_514[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t **** const *l_513 = &l_514[0];
            int i;
            for (g_335 = 0; (g_335 <= 0); g_335 += 1)
            { 
                uint8_t l_499 = 0x45L;
                union U2 l_503 = {0};
                uint32_t **l_510[2][6][1] = {{{&g_353},{&g_353},{&g_353},{&g_353},{&g_353},{&g_353}},{{&g_353},{&g_353},{&g_353},{&g_353},{&g_353},{&g_353}}};
                int i, j, k;
                for (g_448.f2 = 0; (g_448.f2 <= 1); g_448.f2 += 1)
                { 
                    int i, j, k;
                    l_499++;
                }
                for (g_327 = 0; (g_327 <= 0); g_327 += 1)
                { 
                    union U2 *l_504 = &g_157;
                    int32_t l_505[3][1][3];
                    uint32_t ***l_506 = (void*)0;
                    uint32_t ***l_507 = &g_352[1];
                    uint32_t ***l_508 = &g_352[g_329];
                    uint32_t ***l_509[7];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_505[i][j][k] = (-1L);
                        }
                    }
                    for (i = 0; i < 7; i++)
                        l_509[i] = &g_352[2];
                    l_513 = ((l_502[2] , ((*l_504) = l_503)) , (((0x4F1EFE64L == l_505[1][0][1]) & ((l_510[1][5][0] = (void*)0) == ((((*g_470) , ((void*)0 == l_511)) & l_512) , (void*)0))) , (void*)0));
                    if (p_46)
                        break;
                }
            }
            if (l_515)
            { 
                for (g_190 = 0; (g_190 <= 1); g_190 += 1)
                { 
                    int64_t l_527 = 0xF06794BC7D744A78LL;
                    struct S1 l_533 = {0x5339L,0xCF96F58BL,0x6BEDCEC4L,1UL,-1L};
                    uint16_t *l_541[5][3];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_541[i][j] = (void*)0;
                    }
                }
                return &g_24;
            }
            else
            { 
                return l_542[0];
            }
        }
        else
        { 
            uint32_t l_548 = 0x107DB140L;
            int16_t l_549 = 1L;
            int32_t l_550 = 0L;
            int16_t l_585[4];
            uint8_t ***l_610 = &g_393[1][0];
            int32_t l_614 = (-5L);
            int32_t l_618 = 0L;
            int i;
            for (i = 0; i < 4; i++)
                l_585[i] = (-1L);
            (*g_231) = (*g_231);
            l_550 = (((safe_rshift_func_int8_t_s_s(((-1L) > ((!l_548) >= p_50)), 3)) & (l_549 == 1L)) >= ((*g_391) == (void*)0));
            if (((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u(p_46, ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((~(safe_lshift_func_int8_t_s_s((p_47 ^ ((!(0x79DFF110D44A5810LL | (safe_lshift_func_uint16_t_u_u((p_48 <= (safe_mul_func_uint16_t_u_u((g_568 != (void*)0), ((safe_mul_func_uint8_t_u_u(p_48, (****g_391))) | (****g_391))))), p_50)))) & g_259)), 2))) < g_448.f3), l_548)) , 0x7556L), 0)) ^ (-5L)), l_571)) & g_152))))) | 1L))
            { 
                uint8_t l_572 = 0x21L;
                int32_t l_583[7] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
                int i;
                if (l_572)
                    break;
                if ((l_573 != (void*)0))
                { 
                    uint16_t *l_581 = &g_385.f0;
                    uint8_t *l_582[2];
                    int32_t l_584[3][6][3] = {{{0x4D6524E6L,(-1L),0x4D6524E6L},{0xAB556509L,(-1L),0xAB556509L},{0x4D6524E6L,(-1L),0x4D6524E6L},{0xAB556509L,(-1L),0xAB556509L},{0x4D6524E6L,(-1L),0x4D6524E6L},{0xAB556509L,(-1L),0xAB556509L}},{{0x4D6524E6L,(-1L),0x4D6524E6L},{0xAB556509L,0x475DDABBL,0xA456DF00L},{0x48B8C142L,0x4D6524E6L,0x48B8C142L},{0xA456DF00L,0x475DDABBL,0xA456DF00L},{0x48B8C142L,0x4D6524E6L,0x48B8C142L},{0xA456DF00L,0x475DDABBL,0xA456DF00L}},{{0x48B8C142L,0x4D6524E6L,0x48B8C142L},{0xA456DF00L,0x475DDABBL,0xA456DF00L},{0x48B8C142L,0x4D6524E6L,0x48B8C142L},{0xA456DF00L,0x475DDABBL,0xA456DF00L},{0x48B8C142L,0x4D6524E6L,0x48B8C142L},{0xA456DF00L,0x475DDABBL,0xA456DF00L}}};
                    int32_t l_586 = (-5L);
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_582[i] = &g_55;
                    (*g_475) = l_575;
                    p_50 = ((l_586 ^= (((((****g_391) = 255UL) <= ((safe_lshift_func_int16_t_s_s(g_242, 3)) > (0x68L != (((((l_540[0][1] = ((l_578[2] , ((safe_lshift_func_int16_t_s_s(1L, 8)) || (l_583[3] |= ((((*l_581) &= p_46) , 18446744073709551608UL) | l_572)))) <= l_584[0][1][2])) <= 0x4877CFFDL) < p_47) ^ l_585[3]) > p_47)))) > g_8) & p_46)) < 0UL);
                    if ((**g_231))
                        continue;
                }
                else
                { 
                    uint16_t **l_589 = (void*)0;
                    uint16_t ***l_588 = &l_589;
                    uint16_t **** const l_587 = &l_588;
                    g_590 = l_587;
                    if (l_502[5])
                        break;
                }
                if (l_515)
                    goto lbl_593;
                if ((*g_232))
                    continue;
            }
            else
            { 
                int32_t l_609 = 0L;
                int8_t l_611[7];
                int32_t l_613 = 0xE3723473L;
                int32_t l_615 = 9L;
                int32_t l_617[6] = {0L,8L,0L,0L,8L,0L};
                int i;
                for (i = 0; i < 7; i++)
                    l_611[i] = 0x8DL;
                l_612 |= (l_609 = (9UL && (safe_unary_minus_func_int32_t_s(((safe_sub_func_uint8_t_u_u(0x03L, l_540[2][0])) | (safe_mod_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(l_518, (l_611[5] = (safe_rshift_func_int16_t_s_s(3L, (safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((((l_550 & ((safe_mod_func_uint16_t_u_u((((*g_470) = ((&g_352[(g_329 + 2)] == (void*)0) != p_47)) < l_550), l_548)) > l_609)) , 0xC6094B7D2A30328ELL) , (void*)0) != l_610), 8)) < (-4L)), l_502[2]))))))) >= 4L), g_3)))))));
                g_619--;
                return &g_24;
            }
        }
        for (g_138 = 0; (g_138 <= 1); g_138 += 1)
        { 
            struct S1 *l_623 = (void*)0;
            struct S1 **l_622 = &l_623;
            uint8_t l_632 = 1UL;
            uint32_t l_633[2][2] = {{0x9E93191DL,0x9E93191DL},{0x9E93191DL,0x9E93191DL}};
            int32_t l_635 = 7L;
            const union U2 l_660 = {0};
            int32_t l_704 = 0x86EFE2FBL;
            int32_t *l_705[7][4][2] = {{{&l_635,&g_3},{&l_635,(void*)0},{(void*)0,&l_704},{(void*)0,&l_704}},{{&l_540[2][0],&l_518},{&l_635,&l_540[3][0]},{&l_540[3][0],(void*)0},{(void*)0,(void*)0}},{{&l_540[3][0],&l_540[3][0]},{&l_635,&l_518},{&l_540[2][0],&l_704},{(void*)0,&l_704}},{{(void*)0,(void*)0},{&l_635,&g_3},{&l_635,(void*)0},{(void*)0,&l_704}},{{(void*)0,&l_704},{&l_540[2][0],&l_518},{&l_635,&l_540[3][0]},{&l_540[3][0],(void*)0}},{{(void*)0,(void*)0},{&l_540[3][0],&l_540[3][0]},{&l_635,&l_518},{&l_540[2][0],&l_704}},{{(void*)0,&l_704},{(void*)0,(void*)0},{&l_635,&g_3},{&l_635,(void*)0}}};
            int8_t l_724 = (-1L);
            uint8_t **l_728 = &g_105;
            int i, j, k;
            (*l_622) = &g_385;
            if ((l_612 &= ((l_635 = (safe_mul_func_uint8_t_u_u((g_104.f1 != ((0UL | (((*l_573) = (void*)0) != l_626)) , ((l_634[1][0][0] = ((safe_mul_func_int16_t_s_s(((p_47 | g_367[1][0][1]) & (~(((safe_rshift_func_uint16_t_u_u((l_632 <= 0x34L), 11)) <= l_633[0][0]) < p_47))), 0x986FL)) != 1L)) , l_502[5]))), p_50))) != p_50)))
            { 
                int8_t l_649 = 1L;
                int16_t *l_658 = &g_170;
                int32_t l_659[1][5][7] = {{{1L,0xBB1C40FAL,0xBB1C40FAL,1L,0x9BFD21A4L,0x9AF0FC67L,0x9BFD21A4L},{1L,0xBB1C40FAL,0xBB1C40FAL,1L,0x9BFD21A4L,0x9AF0FC67L,0x9BFD21A4L},{1L,0xBB1C40FAL,0xBB1C40FAL,1L,0x9BFD21A4L,0x9AF0FC67L,0x9BFD21A4L},{1L,0xBB1C40FAL,0xBB1C40FAL,1L,0x9BFD21A4L,0x9AF0FC67L,0x9BFD21A4L},{1L,0xBB1C40FAL,0xBB1C40FAL,1L,0x9BFD21A4L,0x9AF0FC67L,0x9BFD21A4L}}};
                uint64_t l_680[3][2] = {{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}};
                int32_t l_682 = 0x29A1BE9DL;
                const uint16_t *l_684 = &l_539.f0;
                const uint16_t **l_683[5][7] = {{&l_684,&l_684,(void*)0,&l_684,&l_684,&l_684,&l_684},{(void*)0,&l_684,&l_684,&l_684,(void*)0,&l_684,&l_684},{&l_684,(void*)0,&l_684,&l_684,&l_684,&l_684,&l_684},{&l_684,&l_684,(void*)0,&l_684,(void*)0,&l_684,&l_684},{&l_684,&l_684,(void*)0,(void*)0,&l_684,&l_684,&l_684}};
                uint16_t *l_720 = &l_648.f1;
                int i, j, k;
                l_659[0][3][5] &= (safe_lshift_func_int8_t_s_u(l_502[2], ((safe_rshift_func_int16_t_s_u(((*l_658) = ((((*g_470) <= (safe_rshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s((((((safe_lshift_func_int8_t_s_s((g_138 & (safe_div_func_uint64_t_u_u((((l_648 = ((*l_626) = l_648)) , l_649) == ((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(((((&g_353 == l_656) , g_657[0]) != (void*)0) < (-1L)), (**g_469))) >= (**g_231)), (**g_231))), 5)) && l_649)), 9L))), 4)) == (*g_232)) < 0xD427FCA6L) < (-1L)) > 0x3BL), p_49)) >= (*g_232)), 6))) , 0xFACEFACBL) && 4294967295UL)), 7)) > p_48)));
                for (g_242 = 0; (g_242 <= 0); g_242 += 1)
                { 
                    const int32_t l_685 = 0x20C74DB7L;
                    int i, j, k;
                    p_50 = ((((void*)0 != &p_49) < ((p_47 = ((l_660 , (0x0B9F5595L < (((((((safe_add_func_int32_t_s_s(p_48, (safe_lshift_func_uint16_t_u_s((~(safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s(0xA6328E51A6143047LL, ((((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((((((safe_lshift_func_uint8_t_u_s(((l_502[(g_329 + 2)] = p_50) >= 0x6BL), g_367[0][0][2])) && p_49) == l_680[2][1]) , (void*)0) == g_681) ^ (*g_232)), p_46)), p_46)), 3L)) & p_49) || l_634[1][1][0]) , l_633[0][0]))) > g_259), 13)) & g_448.f0), l_682))), 4)))) , l_683[2][2]) != (void*)0) && 0x9891934CL) <= 18446744073709551612UL) != p_48) & l_685))) >= p_49)) >= (**g_469))) & (**g_231));
                    if ((**g_231))
                        break;
                    if (p_49)
                        goto lbl_593;
                    return &g_24;
                }
                g_327 = l_682;
                if (g_686)
                { 
                    return &g_24;
                }
                else
                { 
                    uint16_t l_693 = 0UL;
                    int16_t *l_702 = &g_703;
                    uint32_t *l_713[1];
                    int8_t l_725 = 1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_713[i] = (void*)0;
                    l_704 |= ((safe_mod_func_int64_t_s_s((0x4A39AA89L | (safe_lshift_func_int8_t_s_u(p_47, (safe_sub_func_uint64_t_u_u(0x5DA8ED6653F61AF4LL, l_693))))), (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((l_635 = ((0xBE0EFB71L <= (((((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((*l_658) = 0x2564L), ((*l_702) &= (0x5FE2L && 65535UL)))), 0xF63409F1L)) , l_633[0][0]) > (**g_231)) >= (*g_470)) < 0x2BCB135B71153ABFLL)) >= p_49)), 0x234DBD2DA56174DCLL)), 3)))) == (*g_436));
                    l_705[4][0][1] = &p_50;
                    if ((*g_232))
                        continue;
                    g_327 = (l_725 = ((((l_706 , (**g_469)) || (safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((g_372 = 4294967289UL), (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((((**g_591) = l_658) != (l_720 = (l_719[1] = g_718))) <= p_49), (safe_mod_func_int32_t_s_s((p_49 == l_723[1]), g_367[0][0][2])))) | l_502[2]), (**g_231))) > l_659[0][3][5]) | l_724))), (*g_490))) <= l_612), 1))) && p_50) >= (-5L)));
                    (*g_231) = l_713[0];
                }
                return &g_24;
            }
            else
            { 
                uint8_t l_732 = 0x08L;
                uint16_t **l_737 = &l_719[1];
                int32_t l_747 = 0x806FCBCEL;
                if ((safe_mul_func_int8_t_s_s((l_518 == (p_50 , (((**g_391) = l_728) != g_729[1][0][2]))), ((l_539 , &g_353) == ((safe_mul_func_uint8_t_u_u(((*g_476) , 1UL), l_732)) , &g_353)))))
                { 
                    struct S1 ****l_734 = &l_733;
                    int32_t l_745 = 0L;
                    int64_t *l_746[5] = {&g_448.f4,&g_448.f4,&g_448.f4,&g_448.f4,&g_448.f4};
                    int i;
                    (*l_734) = l_733;
                    if (g_686)
                        goto lbl_593;
                    l_747 |= (safe_add_func_uint64_t_u_u(((void*)0 == l_737), (safe_add_func_uint64_t_u_u(7UL, (((g_448.f4 ^= (safe_rshift_func_int16_t_s_u(((((safe_lshift_func_int8_t_s_u((l_744[3] != ((&g_8 != l_542[0]) , &g_591)), 6)) , 0x9C61B267L) | p_47) , 0x5695L), l_745))) ^ (*g_470)) == p_50)))));
                    return l_542[0];
                }
                else
                { 
                    int8_t l_749 = 0x9AL;
                    if (l_724)
                        goto lbl_593;
                    if (l_749)
                        continue;
                    return l_542[0];
                }
            }
        }
        g_327 = ((((safe_rshift_func_uint16_t_u_s(((*g_718) |= (0xA0C41F23A4D71A5DLL == 0xBA5F6FDC8B9CCA3BLL)), (((l_752 != g_568) & ((l_755 != (l_511 = &g_469)) > (((safe_sub_func_uint64_t_u_u((!l_540[2][0]), 1L)) , g_448.f4) < g_703))) < 0x6FA573A6L))) == l_612) | p_48) ^ p_50);
        for (g_242 = 0; (g_242 <= 1); g_242 += 1)
        { 
            int32_t l_762 = 0x9246D200L;
            int32_t l_763 = 0xBA00CE19L;
            const int8_t l_776 = 0x27L;
            int32_t **l_777[4][7] = {{&l_498[1][2][1],&l_498[0][1][1],&l_498[0][0][1],&l_498[0][0][1],&l_498[0][1][1],&l_498[1][2][1],&l_498[0][1][1]},{&l_498[0][1][0],&l_498[1][2][1],&l_498[1][2][1],&l_498[0][1][0],&l_498[0][1][1],&l_498[0][0][1],&l_498[0][1][0]},{&l_498[1][2][1],&l_498[1][2][1],&l_498[0][1][0],&l_498[0][1][1],&l_498[0][1][0],&l_498[1][2][1],&l_498[1][2][1]},{&l_498[1][2][1],&l_498[0][1][0],&l_498[0][1][1],&l_498[0][1][0],&l_498[1][2][1],&l_498[1][2][1],&l_498[0][1][0]}};
            uint8_t ****l_791 = &g_392;
            uint8_t *****l_790 = &l_791;
            int16_t l_798 = 0x7CDDL;
            struct S1 l_807 = {65534UL,0x4C37086BL,3UL,0x6606F048L,0L};
            uint16_t l_819 = 1UL;
            int32_t l_821[4][4] = {{0L,0x9AA17109L,0L,0x7FCA81CCL},{0L,0x7FCA81CCL,0x7FCA81CCL,0L},{0x18392E50L,0x7FCA81CCL,(-1L),0x7FCA81CCL},{0x7FCA81CCL,0x9AA17109L,(-1L),(-1L)}};
            int i, j;
            for (g_90 = 0; (g_90 <= 1); g_90 += 1)
            { 
                int32_t l_761 = (-1L);
                uint32_t l_764 = 4294967295UL;
                int16_t *l_773 = (void*)0;
                int16_t *l_774 = (void*)0;
                int16_t *l_775 = &g_703;
                for (p_50 = 3; (p_50 >= 0); p_50 -= 1)
                { 
                    int i, j, k;
                    l_762 = (l_540[(g_329 + 1)][g_329] <= (l_612 ^= (safe_mod_func_int64_t_s_s(g_619, l_761))));
                    if (l_761)
                        break;
                    if ((**g_231))
                        break;
                    if ((*g_232))
                        break;
                }
                if ((**g_231))
                    continue;
                if ((**g_231))
                { 
                    l_764--;
                    (*g_231) = l_498[1][1][0];
                }
                else
                { 
                    (*g_231) = &p_50;
                    (**g_231) = (-1L);
                }
                p_50 = (((p_48 || p_48) , l_764) < (((((*l_775) = (0x82601891L && (safe_mul_func_uint16_t_u_u((((p_46 , ((***g_392) |= (~1UL))) < (((g_327 = (+(safe_lshift_func_uint8_t_u_s((*g_490), g_385.f3)))) && (**g_231)) ^ l_761)) && 0UL), p_46)))) & 4L) || (-5L)) != l_776));
            }
            l_778 = (g_157 , ((*g_231) = (*g_231)));
            for (g_385.f2 = 0; (g_385.f2 <= 3); g_385.f2 += 1)
            { 
                int32_t l_779 = 6L;
                uint8_t ***l_789 = &g_393[0][0];
                uint8_t **** const l_788 = &l_789;
                uint8_t **** const *l_787 = &l_788;
                int8_t *l_802 = &g_24;
                struct S1 **l_803 = (void*)0;
                uint16_t *** const *l_804 = (void*)0;
                int64_t l_820 = 0x1AD8548EB4513F7BLL;
                int32_t l_824 = 3L;
                int32_t l_825 = (-2L);
                struct S1 l_832 = {1UL,0xF46A4FC1L,0xF2FA10ABL,3UL,0xE1653F9320634555LL};
                int i;
                if (((l_779 == g_780[3]) > (safe_lshift_func_uint8_t_u_u((((((p_50 = (**g_231)) & (g_79 | p_46)) != (((g_90 = (g_327 ^= 0L)) || ((((safe_add_func_uint64_t_u_u((--(*g_470)), (((l_787 = &g_391) != l_790) >= (-1L)))) , 1UL) <= (****g_391)) < 1UL)) != p_47)) >= g_448.f0) && (*l_778)), 4))))
                { 
                    union U2 *l_794[3];
                    int32_t l_797 = 0x8146809BL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_794[i] = &l_648;
                    l_797 |= (p_50 > (safe_sub_func_uint64_t_u_u((((((*l_573) = &g_157) == l_794[2]) , (safe_lshift_func_uint16_t_u_s((0x2B77L > (0x76D0DE27L > ((l_779 >= ((*l_748) = (*l_778))) & l_779))), 14))) , 0UL), 0UL)));
                    g_799--;
                    return l_802;
                }
                else
                { 
                    uint32_t *l_818 = (void*)0;
                    uint32_t l_826 = 0x571C6765L;
                    (*l_733) = l_803;
                    g_90 = (p_50 & ((&g_591 != l_804) & (safe_mod_func_int8_t_s_s(((((*****l_787) = 0x14L) || (l_807 , 253UL)) && (safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((*l_802) = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((g_222 = (safe_mul_func_uint8_t_u_u(p_49, g_367[0][0][2]))) >= (**g_231)) ^ p_46), p_46)), l_819))), p_47)) > (*l_778)), l_820))), (*l_778)))));
                    l_821[3][3] = (*l_778);
                    l_826--;
                    (*g_231) = &p_50;
                }
                l_779 ^= (+(safe_lshift_func_int8_t_s_u((l_832 , (safe_sub_func_int8_t_s_s(p_46, ((*l_778) && (~((safe_add_func_uint64_t_u_u((p_48 <= ((*l_778) , (l_825 ^= (safe_mod_func_uint32_t_u_u(((*l_575) , (*l_778)), g_452))))), (*l_778))) <= l_840)))))), p_48)));
            }
        }
        for (g_242 = 0; g_242 < 1; g_242 += 1)
        {
            g_657[g_242] = &g_841;
        }
        for (g_822 = 0; (g_822 <= 3); g_822 += 1)
        { 
            int64_t l_859 = (-9L);
            int32_t l_861[7];
            uint32_t l_862 = 0xB0A7379DL;
            int32_t l_883 = 0xA9DFFC8DL;
            int8_t *l_884 = &g_24;
            int i;
            for (i = 0; i < 7; i++)
                l_861[i] = 0x7849409EL;
            if ((((*g_718) ^= (safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_50, (*l_778))), ((((void*)0 == (*l_511)) , (g_24 |= (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_852 != ((safe_div_func_uint64_t_u_u(p_46, (safe_rshift_func_uint16_t_u_u(p_46, 1)))) , (void*)0)), (*g_105))), 0L)), 0xF835L)))) == 0UL)))) | (*l_778)))
            { 
                const struct S1 *l_858 = &l_539;
                const struct S1 **l_857 = &l_858;
                int32_t l_860 = 0x4378DE46L;
                (*l_857) = l_852;
                l_862--;
            }
            else
            { 
                int16_t *l_867[6] = {&g_822,&g_329,&g_329,&g_822,&g_329,&g_329};
                int32_t l_875 = (-1L);
                int32_t l_882 = 0x989A80C7L;
                int i;
                l_861[4] ^= (((p_47 , (g_170 = (((*g_681) , 0UL) | ((*l_748) = (safe_rshift_func_uint8_t_u_s(((*g_105) |= p_49), 2)))))) >= (+((*g_470) ^ (safe_mod_func_int8_t_s_s((((l_882 &= (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((l_875 < (safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((*l_778), p_46)), g_385.f3)) , p_48), g_491))) >= p_49) && p_49) ^ 5UL), 0)), (-1L)))) < l_883) > p_49), l_875))))) || (***g_392));
                if (g_104.f0)
                    goto lbl_593;
                return l_884;
            }
            for (g_79 = 0; (g_79 <= 1); g_79 += 1)
            { 
                uint32_t l_885 = 1UL;
                int i, j, k;
                p_50 = (**g_231);
                if (l_885)
                    continue;
            }
        }
    }
    p_50 ^= 1L;
    return l_542[0];
}



static uint8_t  func_60(int16_t  p_61)
{ 
    uint8_t l_71 = 0x23L;
    int32_t l_76 = 0x72A9630AL;
    int64_t l_88 = 1L;
    uint64_t l_153 = 18446744073709551614UL;
    int32_t l_171 = (-1L);
    int64_t *l_205 = &l_88;
    int32_t *l_230[1];
    int32_t * const *l_229 = &l_230[0];
    uint16_t *l_241 = &g_104.f2;
    uint8_t **l_261 = (void*)0;
    uint64_t *l_268 = (void*)0;
    uint64_t **l_267[4][4][2] = {{{&l_268,&l_268},{&l_268,&l_268},{&l_268,&l_268},{&l_268,&l_268}},{{&l_268,&l_268},{&l_268,&l_268},{&l_268,&l_268},{&l_268,&l_268}},{{&l_268,&l_268},{&l_268,&l_268},{&l_268,&l_268},{&l_268,&l_268}},{{&l_268,&l_268},{&l_268,&l_268},{&l_268,&l_268},{&l_268,&l_268}}};
    struct S0 l_282 = {255UL,8L,0x4B25L,0x55DEL,0x4BFC915AAD51AD78LL};
    const int32_t l_293[5] = {0xA512CE60L,0xA512CE60L,0xA512CE60L,0xA512CE60L,0xA512CE60L};
    uint32_t *l_350 = &g_152;
    uint32_t **l_349 = &l_350;
    struct S1 l_360 = {0x8A8FL,18446744073709551606UL,18446744073709551611UL,0x50F02E34L,0x03400E4BA2902BD3LL};
    int32_t *l_397 = &g_90;
    int64_t l_464 = (-1L);
    int8_t * const l_481 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_230[i] = &g_90;
lbl_226:
    for (g_24 = 0; (g_24 != (-25)); g_24 = safe_sub_func_int16_t_s_s(g_24, 5))
    { 
        int32_t l_68 = 0x8B1DFEB8L;
        int8_t *l_77[1][3][5] = {{{&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,&g_24,&g_24}}};
        int32_t l_78 = (-1L);
        int32_t *l_80 = &l_68;
        uint8_t *l_103 = &l_71;
        int32_t **l_118 = (void*)0;
        int32_t **l_119 = &l_80;
        union U2 *l_156 = &g_157;
        int i, j, k;
        (*l_80) = (0x93L || (((p_61 <= (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((9L | l_68) < 9UL), 1)), (g_79 = (safe_sub_func_int16_t_s_s((l_71 >= (l_78 = ((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(l_68, 0)) && 0xFF331764L), l_76)) > 0x4F1FL) , (void*)0) == (void*)0))), 0xD8D3L)))))) >= (-1L)) == 0xA09FL));
        for (l_78 = 0; (l_78 >= (-24)); --l_78)
        { 
            int64_t *l_107 = (void*)0;
            int64_t *l_108[4][3][4] = {{{&l_88,&l_88,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88}},{{&l_88,&l_88,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88}},{{&l_88,&l_88,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88}},{{&l_88,&l_88,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88},{&l_88,&l_88,&l_88,&l_88}}};
            int32_t l_109[3];
            uint64_t *l_113 = &g_114;
            int32_t l_117 = 0x59C8172FL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_109[i] = 0x18FE19D4L;
            for (g_79 = 0; (g_79 <= 0); g_79 += 1)
            { 
                return p_61;
            }
            for (l_68 = 0; (l_68 != 24); l_68++)
            { 
                const uint32_t l_87 = 6UL;
                int32_t *l_89 = &g_90;
                if (p_61)
                    break;
                (*l_89) = ((((safe_lshift_func_uint8_t_u_u(p_61, (0x8DD8L == ((0x74A040150F896C2ALL & ((void*)0 != &g_3)) || g_8)))) != l_87) != l_88) && 0x85EF4C81L);
                (*l_89) = 0L;
            }
            g_90 = (safe_mul_func_uint8_t_u_u(((p_61 < ((void*)0 != &g_90)) >= (g_3 & ((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((l_88 , l_88), 4)), ((safe_lshift_func_uint16_t_u_s(g_79, 0)) || 6L))), 0L)) && 0UL))), 0x4BL));
            (*l_80) = ((((((l_103 = (void*)0) != (g_104 , g_105)) == (l_109[2] = 0x14BAAC2EC31A0A76LL)) > (safe_lshift_func_uint16_t_u_s(((+(((*l_113) ^= 0xE0C2A5ADA2C71B4ALL) | (((safe_mod_func_int32_t_s_s(p_61, 1UL)) == g_104.f4) , l_117))) < p_61), 11))) && 0x559458B2590F8A91LL) > g_104.f1);
            (*l_80) &= (255UL & (l_117 ^= p_61));
        }
        (*l_119) = &l_78;
        for (g_114 = 24; (g_114 >= 35); g_114 = safe_add_func_int8_t_s_s(g_114, 1))
        { 
            uint64_t l_126 = 0xA11419659B86C8B6LL;
            uint64_t **l_131 = (void*)0;
            uint64_t *l_133 = &g_114;
            uint64_t **l_132 = &l_133;
            uint64_t *l_135 = &l_126;
            uint64_t **l_134 = &l_135;
            uint64_t *l_136 = (void*)0;
            uint64_t *l_137 = &g_138;
            uint32_t *l_151 = &g_152;
            if ((safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(l_126, (safe_mul_func_uint16_t_u_u(0x1A5EL, (safe_rshift_func_uint16_t_u_u(1UL, ((((*l_132) = (void*)0) != ((*l_134) = &g_114)) >= (++(*l_137))))))))), (safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((*l_151) = (4UL != (p_61 & g_8))) , l_153), 10)), p_61)) , 6UL), l_126)), l_76)), (*g_105))))))
            { 
                union U2 *l_154 = (void*)0;
                union U2 **l_155[2][6] = {{(void*)0,&l_154,&l_154,&l_154,&l_154,(void*)0},{(void*)0,(void*)0,&l_154,(void*)0,(void*)0,(void*)0}};
                int32_t l_168 = 0x40059362L;
                int16_t *l_169[1];
                int64_t *l_172 = &l_88;
                int32_t *l_173 = (void*)0;
                int32_t *l_174 = &g_90;
                uint32_t l_175 = 0x9CB0568AL;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_169[i] = &g_170;
                l_156 = l_154;
                if (((*l_174) &= (safe_lshift_func_uint8_t_u_u((((9UL > (((safe_rshift_func_uint8_t_u_s(((void*)0 == &l_80), (((*l_172) = (l_168 = (p_61 & (g_170 = (safe_div_func_int32_t_s_s((((((safe_mod_func_uint64_t_u_u(((**l_119) || (((safe_mul_func_uint16_t_u_u(((l_171 = l_168) && ((p_61 & l_71) , p_61)), 0UL)) == 0x644EA386FE3A8412LL) <= 0x502D142CL)), (**l_119))) <= l_126) , (*l_80)) > l_126) , g_3), (**l_119))))))) ^ p_61))) > 9UL) >= p_61)) != p_61) == l_71), p_61))))
                { 
                    (*l_119) = &g_3;
                    return p_61;
                }
                else
                { 
                    return l_175;
                }
            }
            else
            { 
                for (g_152 = 0; (g_152 <= 0); g_152 += 1)
                { 
                    int32_t *l_176 = &l_78;
                    (*l_119) = l_176;
                    if (g_104.f0)
                        continue;
                    (**l_119) = 0x1D254183L;
                    if (g_104.f2)
                        break;
                }
                if (g_104.f1)
                    break;
                return p_61;
            }
        }
        (**l_119) ^= (safe_rshift_func_uint8_t_u_u((*g_105), 6));
    }
    for (g_138 = 0; (g_138 != 0); g_138 = safe_add_func_uint8_t_u_u(g_138, 5))
    { 
        uint8_t l_181 = 0UL;
        int32_t *l_193[3];
        int8_t l_208 = 1L;
        uint8_t **l_263 = (void*)0;
        uint64_t **l_269 = &l_268;
        uint8_t ***l_285 = &l_263;
        const union U2 l_290 = {0};
        int64_t l_346 = 0xFA7BA6158B85164FLL;
        int i;
        for (i = 0; i < 3; i++)
            l_193[i] = &g_90;
        l_171 = (0x7F97FFC2L < (l_181 < ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((4294967295UL ^ (safe_sub_func_uint64_t_u_u(g_190, (safe_div_func_int32_t_s_s(((((254UL == (*g_105)) || 0x61L) || l_71) != 0x9A48L), 1UL))))), 1UL)), 0x3FL)), g_114)) > g_3)));
        l_171 = (l_193[1] != (void*)0);
        l_171 = 0x8D028DA7L;
        if (p_61)
        { 
            int32_t l_197 = 0x031FFEBAL;
            int64_t *l_204 = &g_104.f4;
            uint8_t **l_210[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,(void*)0,&g_105,(void*)0,&g_105,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,(void*)0,&g_105,(void*)0,&g_105,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_105,(void*)0,&g_105,(void*)0,&g_105,(void*)0}};
            int32_t *l_215 = (void*)0;
            int32_t l_225 = 0x16806315L;
            int i, j;
            for (l_153 = 0; (l_153 <= 21); l_153 = safe_add_func_int64_t_s_s(l_153, 3))
            { 
                int32_t **l_196 = &l_193[2];
                uint64_t *l_207[5] = {&g_114,&g_114,&g_114,&g_114,&g_114};
                int32_t l_209[6];
                const int32_t *l_212[4];
                uint32_t *l_238 = (void*)0;
                uint32_t **l_237 = &l_238;
                int i;
                for (i = 0; i < 6; i++)
                    l_209[i] = 0x82A203DCL;
                for (i = 0; i < 4; i++)
                    l_212[i] = (void*)0;
                (*l_196) = &g_90;
            }
            for (g_24 = 0; (g_24 > (-7)); --g_24)
            { 
                uint64_t l_245[6][7] = {{1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL},{1UL,1UL,0x277215B510E0DADDLL,1UL,1UL,0x277215B510E0DADDLL,1UL},{1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL},{1UL,1UL,0x277215B510E0DADDLL,1UL,1UL,0x277215B510E0DADDLL,1UL}};
                int16_t *l_250 = &g_170;
                int32_t l_260 = 0x0FDF59F0L;
                uint8_t ***l_262 = &l_261;
                uint64_t **l_270 = &l_268;
                int i, j;
                l_193[2] = (*g_231);
                (*g_232) = (((g_114 = l_245[3][0]) < ((safe_mul_func_uint16_t_u_u(((-7L) ^ (safe_sub_func_int16_t_s_s(((*l_250) = (g_170 > p_61)), ((((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((*l_241) = (safe_rshift_func_uint8_t_u_s(p_61, (safe_div_func_int8_t_s_s(((*g_232) || 5L), l_245[0][0]))))), g_259)) != 0xA2AAL), 0x05L)) , g_206) && 2L) , g_242)))), p_61)) ^ (*g_105))) ^ p_61);
                l_260 = ((**g_231) = (0xAEDB5F2B7163F9BBLL & g_104.f1));
                if ((((*l_262) = l_261) == l_263))
                { 
                    int32_t l_276 = 0xF71DFFF8L;
                    uint32_t *l_277 = &g_79;
                    (**g_231) = (safe_lshift_func_int8_t_s_u((g_266 != (void*)0), 6));
                    (**g_231) = (((*l_277) = (g_114 | (((l_269 = l_267[1][3][0]) == l_270) < (18446744073709551615UL & ((safe_mod_func_uint16_t_u_u((((*g_105) = ((p_61 & (safe_rshift_func_int8_t_s_u(((void*)0 == g_275), l_276))) , p_61)) | p_61), g_3)) <= l_276))))) < (*g_232));
                }
                else
                { 
                    return (*g_105);
                }
            }
            if ((**g_231))
                break;
            for (l_76 = 27; (l_76 < (-10)); --l_76)
            { 
                uint8_t ***l_283 = &l_210[0][5];
                uint8_t ****l_284[6][5] = {{&l_283,&l_283,&l_283,&l_283,&l_283},{&l_283,&l_283,&l_283,&l_283,&l_283},{&l_283,&l_283,&l_283,&l_283,&l_283},{&l_283,&l_283,&l_283,&l_283,&l_283},{&l_283,&l_283,&l_283,&l_283,&l_283},{&l_283,&l_283,&l_283,&l_283,&l_283}};
                int32_t l_292 = 1L;
                int i, j;
                l_292 = (safe_div_func_uint32_t_u_u((l_282 , ((l_285 = l_283) == (p_61 , &l_263))), (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_61, (((l_290 , ((((~(p_61 & l_292)) > (*g_105)) , 0xFA360922DE0C7559LL) != l_293[3])) || p_61) && g_170))) , p_61), p_61))));
                for (g_259 = 0; (g_259 <= 5); g_259 += 1)
                { 
                    uint16_t **l_295 = (void*)0;
                    uint16_t ***l_294 = &l_295;
                    (*l_294) = (void*)0;
                    (*g_231) = (*g_231);
                }
            }
        }
        else
        { 
            uint8_t l_296 = 255UL;
            int32_t l_298[5] = {1L,1L,1L,1L,1L};
            int i;
            if (l_296)
            { 
                return (*g_105);
            }
            else
            { 
                const int64_t l_297 = 0x61C8AACF54AA532DLL;
                uint64_t l_316 = 0xACEE5EC71239F267LL;
                const int32_t l_317 = 1L;
                int32_t l_326 = 0x52F9C739L;
                if (((-1L) < (l_297 <= (&g_114 == (void*)0))))
                { 
                    l_298[2] |= l_297;
                }
                else
                { 
                    uint32_t l_301[6][3][1] = {{{0x09239903L},{18446744073709551615UL},{0x09239903L}},{{18446744073709551615UL},{0x09239903L},{18446744073709551615UL}},{{0x09239903L},{18446744073709551615UL},{0x09239903L}},{{18446744073709551615UL},{0x09239903L},{18446744073709551615UL}},{{0x09239903L},{18446744073709551615UL},{0x09239903L}},{{18446744073709551615UL},{0x09239903L},{18446744073709551615UL}}};
                    uint32_t *l_302 = &g_259;
                    uint32_t *l_305 = &g_79;
                    int8_t *l_315 = &l_208;
                    int32_t **l_324 = &l_193[2];
                    int32_t l_328 = 0x9344E712L;
                    const int32_t *l_334 = &l_326;
                    const int32_t **l_333 = &l_334;
                    int i, j, k;
                    (**g_231) = (safe_sub_func_uint8_t_u_u((g_104 , l_301[0][2][0]), ((l_298[3] &= ((g_157 , ((((((*l_305) = (++(*l_302))) || ((safe_rshift_func_uint8_t_u_u((~(((safe_mul_func_uint8_t_u_u(((l_296 , (l_290 , (((*l_315) = (safe_div_func_uint32_t_u_u(9UL, (((safe_div_func_uint16_t_u_u(1UL, p_61)) == 0L) && p_61)))) < (*g_105)))) != g_259), (**l_229))) > 7L) & 6UL)), p_61)) & l_301[0][2][0])) || g_104.f2) > l_316) > p_61)) > g_8)) <= l_317)));
                    (**l_229) = (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((l_298[0] < (((g_157 , p_61) , &g_232) == l_324)) <= ((*g_232) < (((~p_61) < p_61) && 0x17ADB72ABD0178E2LL))), (**l_324))) , 0xF048L), p_61)), p_61));
                    g_330++;
                    (*l_333) = &l_317;
                }
                if ((**g_231))
                    continue;
                if (l_316)
                    continue;
            }
            g_335--;
            for (g_104.f4 = 0; (g_104.f4 != 2); g_104.f4++)
            { 
                int8_t l_342 = 0xCCL;
                for (l_296 = 0; (l_296 != 5); l_296 = safe_add_func_uint16_t_u_u(l_296, 5))
                { 
                    uint32_t l_343 = 0xD61B8363L;
                    g_327 &= ((**g_231) = 8L);
                    if (l_282.f3)
                        goto lbl_226;
                    l_343++;
                    (*g_231) = (*g_231);
                }
            }
        }
        l_346 |= (**g_231);
    }
    for (g_79 = 0; (g_79 >= 6); g_79 = safe_add_func_int16_t_s_s(g_79, 2))
    { 
        uint32_t ***l_351[1];
        int32_t l_368 = 0L;
        int32_t l_396 = 0xE3234AC2L;
        int32_t l_450 = 0xB857A852L;
        int32_t l_451 = 0x559718EAL;
        uint8_t **l_455[4];
        const uint64_t * const l_468 = &g_335;
        const uint64_t * const *l_467 = &l_468;
        uint64_t **l_472 = &l_268;
        int i;
        for (i = 0; i < 1; i++)
            l_351[i] = &l_349;
        for (i = 0; i < 4; i++)
            l_455[i] = &g_105;
        g_352[1] = l_349;
        (**g_231) ^= 0x346962A3L;
    }
    return p_61;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    transparent_crc(g_104.f2, "g_104.f2", print_hash_value);
    transparent_crc(g_104.f3, "g_104.f3", print_hash_value);
    transparent_crc(g_104.f4, "g_104.f4", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_367[i][j][k], "g_367[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_385.f0, "g_385.f0", print_hash_value);
    transparent_crc(g_385.f1, "g_385.f1", print_hash_value);
    transparent_crc(g_385.f2, "g_385.f2", print_hash_value);
    transparent_crc(g_385.f3, "g_385.f3", print_hash_value);
    transparent_crc(g_385.f4, "g_385.f4", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_448.f0, "g_448.f0", print_hash_value);
    transparent_crc(g_448.f1, "g_448.f1", print_hash_value);
    transparent_crc(g_448.f2, "g_448.f2", print_hash_value);
    transparent_crc(g_448.f3, "g_448.f3", print_hash_value);
    transparent_crc(g_448.f4, "g_448.f4", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_616[i], "g_616[i]", print_hash_value);

    }
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_780[i], "g_780[i]", print_hash_value);

    }
    transparent_crc(g_799, "g_799", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_823[i], "g_823[i]", print_hash_value);

    }
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_914.f0, "g_914.f0", print_hash_value);
    transparent_crc(g_914.f1, "g_914.f1", print_hash_value);
    transparent_crc(g_914.f2, "g_914.f2", print_hash_value);
    transparent_crc(g_914.f3, "g_914.f3", print_hash_value);
    transparent_crc(g_914.f4, "g_914.f4", print_hash_value);
    transparent_crc(g_1172.f0, "g_1172.f0", print_hash_value);
    transparent_crc(g_1172.f1, "g_1172.f1", print_hash_value);
    transparent_crc(g_1172.f2, "g_1172.f2", print_hash_value);
    transparent_crc(g_1172.f3, "g_1172.f3", print_hash_value);
    transparent_crc(g_1172.f4, "g_1172.f4", print_hash_value);
    transparent_crc(g_1445.f0, "g_1445.f0", print_hash_value);
    transparent_crc(g_1445.f1, "g_1445.f1", print_hash_value);
    transparent_crc(g_1445.f2, "g_1445.f2", print_hash_value);
    transparent_crc(g_1445.f3, "g_1445.f3", print_hash_value);
    transparent_crc(g_1445.f4, "g_1445.f4", print_hash_value);
    transparent_crc(g_1475, "g_1475", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1634[i], "g_1634[i]", print_hash_value);

    }
    transparent_crc(g_1790, "g_1790", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1826[i][j][k], "g_1826[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1837, "g_1837", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1878[i], "g_1878[i]", print_hash_value);

    }
    transparent_crc(g_1892, "g_1892", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1909[i].f0, "g_1909[i].f0", print_hash_value);
        transparent_crc(g_1909[i].f1, "g_1909[i].f1", print_hash_value);
        transparent_crc(g_1909[i].f2, "g_1909[i].f2", print_hash_value);
        transparent_crc(g_1909[i].f3, "g_1909[i].f3", print_hash_value);
        transparent_crc(g_1909[i].f4, "g_1909[i].f4", print_hash_value);

    }
    transparent_crc(g_1921, "g_1921", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2019[i].f0, "g_2019[i].f0", print_hash_value);
        transparent_crc(g_2019[i].f1, "g_2019[i].f1", print_hash_value);
        transparent_crc(g_2019[i].f2, "g_2019[i].f2", print_hash_value);
        transparent_crc(g_2019[i].f3, "g_2019[i].f3", print_hash_value);
        transparent_crc(g_2019[i].f4, "g_2019[i].f4", print_hash_value);

    }
    transparent_crc(g_2049, "g_2049", print_hash_value);
    transparent_crc(g_2074, "g_2074", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2109[i][j], "g_2109[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2135.f0, "g_2135.f0", print_hash_value);
    transparent_crc(g_2135.f1, "g_2135.f1", print_hash_value);
    transparent_crc(g_2135.f2, "g_2135.f2", print_hash_value);
    transparent_crc(g_2135.f3, "g_2135.f3", print_hash_value);
    transparent_crc(g_2135.f4, "g_2135.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
