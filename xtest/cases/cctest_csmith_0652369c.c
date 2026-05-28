// SPDX-License-Identifier: MIT
// cctest_csmith_0652369c.c --- cctest case csmith_0652369c (csmith seed 106051228)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe27ffad6 */
/* @exp_ticks 0x35a4 */

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

// Options:   -s 106051228 -o /tmp/csmith_gen_gabofhnz/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int64_t  f1;
   uint8_t  f2;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   struct S0  f1;
   int8_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint16_t  f0;
   int16_t  f1;
};
#pragma pack(pop)

union U3 {
   struct S0  f0;
   uint16_t  f1;
   uint16_t  f2;
};


static int32_t g_2 = 0x9ED080C1L;
static int32_t g_5 = 0x2A3B3F36L;
static uint8_t g_17 = 248UL;
static struct S0 g_27 = {8L,1L,248UL};
static int8_t g_38 = 0x48L;
static int32_t g_40 = 0x2215F8F5L;
static uint16_t g_43 = 0x405BL;
static uint32_t g_64 = 18446744073709551607UL;
static union U3 g_72 = {{0x4124F91E2C0253A1LL,0x71FCCBB7A7919EE4LL,1UL}};
static uint64_t g_106 = 0xE7CA3003AF45EF5DLL;
static uint64_t g_119[1] = {18446744073709551607UL};
static uint64_t g_123[1] = {18446744073709551615UL};
static uint32_t g_127 = 0x0D1FC1C1L;
static int8_t g_133 = (-1L);
static uint64_t g_134 = 0x01407F46339393F5LL;
static struct S1 g_142 = {18446744073709551606UL,{0x0F2CAE24E5D96F57LL,0x4CF0FE1AEB3B6C1DLL,0UL},0x3EL};
static int16_t g_170 = 0xEA3AL;
static uint16_t g_174 = 65534UL;
static int8_t g_183 = (-1L);
static uint16_t g_184 = 0x480DL;
static int16_t g_235 = 0x42BFL;
static uint32_t g_236 = 4294967295UL;



static uint32_t  func_1(void);
static int64_t  func_10(int32_t  p_11, int8_t  p_12, int32_t  p_13);
static int32_t  func_18(int32_t  p_19);
static int32_t  func_20(int64_t  p_21, int32_t  p_22, int64_t  p_23);




static uint32_t  func_1(void)
{ 
    const uint16_t l_16[3][3][3] = {{{0UL,0UL,3UL},{0x13E1L,0xEDF6L,0xCEE3L},{65535UL,0UL,65535UL}},{{65535UL,0x13E1L,0UL},{0x13E1L,65535UL,65535UL},{0UL,65535UL,0xCEE3L}},{{0xEDF6L,0x13E1L,3UL},{0UL,0UL,3UL},{0x13E1L,0xEDF6L,0xCEE3L}}};
    int32_t l_191[4][3][1] = {{{(-3L)},{0xEEEDEE6FL},{(-3L)}},{{0xEEEDEE6FL},{(-3L)},{0xEEEDEE6FL}},{{(-3L)},{0xEEEDEE6FL},{(-3L)}},{{0xEEEDEE6FL},{(-3L)},{0xEEEDEE6FL}}};
    uint64_t l_218[4][4][5] = {{{18446744073709551610UL,1UL,0x36E93BA542B8B1C4LL,0UL,1UL},{0xD7FB89E635219DD4LL,18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,0xD7FB89E635219DD4LL},{0x991E0753CE67C050LL,1UL,0x10FD7A930F337C21LL,0x4B02CD46ABB7C243LL,0xE05C0E06A67EA1BELL},{0x730205D3DB025984LL,7UL,0x991E0753CE67C050LL,0x6F9448B166D845AFLL,7UL}},{{7UL,18446744073709551615UL,0x611E251C85CD55A8LL,1UL,0xE05C0E06A67EA1BELL},{0xB0EE668770074BB8LL,0x6F9448B166D845AFLL,18446744073709551614UL,0x78575912BC1F6797LL,0xD7FB89E635219DD4LL},{0xE05C0E06A67EA1BELL,0xC62AC5C6483FAFD5LL,0x991E0753CE67C050LL,7UL,18446744073709551610UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,7UL,7UL}},{{0xFDEEFCC7DE1C9599LL,0x172C683EEC599252LL,0xFDEEFCC7DE1C9599LL,0x78575912BC1F6797LL,1UL},{0x730205D3DB025984LL,18446744073709551610UL,0xB0EE668770074BB8LL,1UL,0x4B02CD46ABB7C243LL},{0x6F9448B166D845AFLL,0xE05C0E06A67EA1BELL,0UL,0x6F9448B166D845AFLL,7UL},{18446744073709551614UL,0x6F9448B166D845AFLL,0xB0EE668770074BB8LL,0x4B02CD46ABB7C243LL,18446744073709551615UL}},{{0xD7FB89E635219DD4LL,0xB0EE668770074BB8LL,0xFDEEFCC7DE1C9599LL,18446744073709551615UL,18446744073709551614UL},{0x6F9448B166D845AFLL,1UL,18446744073709551607UL,1UL,0xE05C0E06A67EA1BELL},{0x10FD7A930F337C21LL,1UL,0x991E0753CE67C050LL,0x991E0753CE67C050LL,1UL},{7UL,0xB0EE668770074BB8LL,18446744073709551614UL,1UL,0xC62AC5C6483FAFD5LL}}};
    int i, j, k;
    for (g_2 = (-22); (g_2 != (-22)); g_2 = safe_add_func_uint8_t_u_u(g_2, 8))
    { 
        int32_t l_203[5][3] = {{0x2D585D5FL,0x2D585D5FL,0x40AC0B49L},{0x2D585D5FL,0x2D585D5FL,0x40AC0B49L},{0x2D585D5FL,0x2D585D5FL,0x40AC0B49L},{0x2D585D5FL,0x2D585D5FL,0x40AC0B49L},{0x2D585D5FL,0x2D585D5FL,0x40AC0B49L}};
        int i, j;
        for (g_5 = 0; (g_5 >= 16); ++g_5)
        { 
            int16_t l_204[1];
            uint32_t l_205 = 0x01682E6EL;
            int i;
            for (i = 0; i < 1; i++)
                l_204[i] = 7L;
        }
        if (l_203[3][0])
            continue;
    }
    if (l_191[2][0][0])
    { 
        int64_t l_209 = 7L;
        uint8_t l_219 = 0x14L;
        int32_t l_231 = 0x2D81DAF6L;
        g_2 = ((((((((safe_rshift_func_uint16_t_u_s(l_209, (safe_rshift_func_uint8_t_u_u((0x82D50EB43A0534DALL < ((g_72.f2 = (safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_div_func_int16_t_s_s(l_218[3][0][1], (-7L))) , l_16[1][1][1]), l_219)), 0x5638L))) , l_16[2][2][0])), 4)))) == g_17) || l_219) && (-1L)) | g_174) <= l_218[3][0][1]) & 8UL) <= g_27.f2);
        for (g_170 = 25; (g_170 < (-30)); --g_170)
        { 
            int32_t l_230 = (-5L);
            struct S1 l_232 = {1UL,{0xD03BD80F3FEDEC0BLL,-3L,248UL},0x23L};
            int32_t l_233 = (-1L);
            int32_t l_234 = 0xC0C3E404L;
            l_191[2][0][0] &= (((safe_lshift_func_uint8_t_u_u(((3UL ^ g_142.f2) ^ (safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(l_209, ((l_218[3][1][0] && 9UL) <= g_5))), l_230)), l_16[1][0][0]))), l_230)) > (-5L)) || l_219);
            l_231 = 1L;
            for (g_72.f2 = 0; (g_72.f2 <= 3); g_72.f2 += 1)
            { 
                g_142 = l_232;
                g_2 = g_27.f1;
                g_236++;
            }
        }
    }
    else
    { 
        uint8_t l_239 = 0x2FL;
        g_2 |= ((l_239 == (safe_rshift_func_uint16_t_u_u((l_191[3][1][0] || (l_218[0][1][2] || (safe_sub_func_int64_t_s_s(0x535721BE7830CF46LL, g_27.f2)))), 10))) , g_142.f1.f2);
    }
    return l_16[2][1][0];
}



static int64_t  func_10(int32_t  p_11, int8_t  p_12, int32_t  p_13)
{ 
    int32_t l_28 = (-9L);
    int32_t l_48[2];
    struct S2 l_68 = {0xD3A9L,-1L};
    const struct S1 l_150 = {0x3CF63262L,{4L,5L,0x20L},7L};
    int i;
    for (i = 0; i < 2; i++)
        l_48[i] = 0xDC9A81FFL;
    if (func_18(func_20((~(safe_rshift_func_int16_t_s_s((p_13 >= (p_11 != g_2)), (g_27 , l_28)))), g_5, g_27.f0)))
    { 
        l_48[1] = (safe_rshift_func_int8_t_s_s(0xDBL, 2));
    }
    else
    { 
        uint16_t l_50 = 65530UL;
        struct S1 l_60 = {0x8ECDCC21L,{0x2CF1A504A86D6A6CLL,-1L,0x9EL},0x53L};
        int32_t l_67[2];
        int i;
        for (i = 0; i < 2; i++)
            l_67[i] = 0x806AF73EL;
        if ((0xCEL || (g_38 = (~(l_50 != p_12)))))
        { 
            int8_t l_61[4][5][1];
            int32_t l_62 = 5L;
            int32_t l_63 = 0xDBC40293L;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_61[i][j][k] = (-9L);
                }
            }
            for (p_12 = 1; (p_12 >= 0); p_12 -= 1)
            { 
                int i;
                return l_48[p_12];
            }
            p_11 = ((safe_lshift_func_uint16_t_u_u(((!g_27.f0) | (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((l_60 , (l_60.f1 , 0x5DA77236C342871ELL)) > 0x10AA4AECA2A42895LL), 0)) == p_11), 0)), 0x71L))), g_43)) >= 0x375E7733L);
            if ((1L <= l_60.f1.f0))
            { 
                g_64++;
                l_67[0] &= l_60.f2;
            }
            else
            { 
                struct S2 l_69 = {65535UL,0xEF66L};
                l_69 = l_68;
            }
        }
        else
        { 
            int8_t l_100 = 0L;
            union U3 l_117[5] = {{{0x6D39625A9B3FC626LL,0x9AC2FE1997BD6D72LL,0x1AL}},{{0x6D39625A9B3FC626LL,0x9AC2FE1997BD6D72LL,0x1AL}},{{0x6D39625A9B3FC626LL,0x9AC2FE1997BD6D72LL,0x1AL}},{{0x6D39625A9B3FC626LL,0x9AC2FE1997BD6D72LL,0x1AL}},{{0x6D39625A9B3FC626LL,0x9AC2FE1997BD6D72LL,0x1AL}}};
            int32_t l_122 = 3L;
            int i;
            if ((safe_add_func_uint8_t_u_u(((g_72 , (safe_div_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((-7L), 3)) < (safe_unary_minus_func_int16_t_s(0xD53DL))) >= (-6L)), g_72.f0.f1))) ^ 4294967293UL), g_72.f2)))
            { 
                struct S0 l_78 = {-1L,-1L,0x81L};
                g_40 = (0x16L != 1L);
                g_72.f0 = l_78;
            }
            else
            { 
                int64_t l_97 = 6L;
                const int32_t l_98 = (-1L);
                l_48[1] = (safe_mod_func_int64_t_s_s(0xFE95B7CA3B757A54LL, (safe_mul_func_int16_t_s_s((l_67[0] &= (safe_mul_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(g_27.f0, 2)), (safe_lshift_func_int16_t_s_u((p_12 != (safe_rshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((g_38 == g_38), 3)), g_72.f0.f2)), 5))), l_97)))) == l_98) >= l_68.f0), g_72.f2))), g_2))));
            }
            p_11 ^= p_12;
            if ((safe_unary_minus_func_uint16_t_u((l_100 ^= 0UL))))
            { 
                struct S1 l_112 = {0x6BAB3D6DL,{-5L,0xC549E5CE90A86934LL,0x88L},0x04L};
                int32_t l_118 = 0L;
                p_11 = (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_27.f0, (g_106 = (~g_72.f0.f0)))), (safe_sub_func_int16_t_s_s((+(safe_mod_func_int8_t_s_s((l_112 , (safe_lshift_func_int8_t_s_u(((((safe_sub_func_int8_t_s_s(((l_117[1] , 2L) >= 0x98D3L), p_13)) , g_72.f2) || p_13) != p_11), p_12))), g_72.f0.f2))), g_27.f2))));
                --g_119[0];
                ++g_123[0];
            }
            else
            { 
                int8_t l_126[2][2][2] = {{{0x11L,0x11L},{0x11L,0x11L}},{{0x11L,0x11L},{0x11L,0x11L}}};
                int32_t l_132 = 1L;
                int i, j, k;
                ++g_127;
                p_11 = (((safe_lshift_func_uint16_t_u_u(l_117[1].f2, 5)) , (l_132 = 0x3CB0L)) && (l_132 = (g_72.f1 , l_126[0][0][0])));
                g_134++;
            }
        }
    }
    for (p_12 = 0; (p_12 > (-19)); --p_12)
    { 
        struct S0 l_139 = {7L,-3L,0xF9L};
        struct S1 l_140 = {1UL,{-5L,0L,249UL},0x18L};
        int8_t l_166 = 0L;
        int32_t l_169 = 0x84F4F27BL;
        int32_t l_171 = (-2L);
        int32_t l_173 = (-8L);
        struct S2 l_177[2] = {{0xCC4BL,-10L},{0xCC4BL,-10L}};
        int8_t l_180 = (-7L);
        int i;
        if (g_38)
        { 
            l_139 = l_139;
        }
        else
        { 
            struct S1 l_141 = {0xBFF4CCE4L,{0xB202198C40119894LL,0x5B274B4BCE18E901LL,0x5CL},0L};
            int32_t l_149 = (-8L);
            if ((p_11 &= (p_13 || (((l_141 = l_140) , (g_142 , ((safe_div_func_uint32_t_u_u(l_139.f2, l_48[1])) , 9L))) || p_12))))
            { 
                uint32_t l_148 = 0xA64D15AFL;
                p_11 = (l_149 ^= ((~(-2L)) >= ((g_40 = (p_11 ^ ((safe_lshift_func_uint8_t_u_u(((l_148 ^= l_28) , (((g_123[0] >= 0x289B7103L) > p_12) < l_139.f2)), 2)) & l_48[1]))) & p_13)));
                l_140 = l_150;
                g_40 = (p_11 &= p_13);
            }
            else
            { 
                g_40 = 0xD9ECA6FCL;
            }
        }
        for (g_27.f2 = 0; (g_27.f2 <= 1); g_27.f2 += 1)
        { 
            int32_t l_163 = 0x28FA46B6L;
            int i;
            if (l_48[g_27.f2])
                break;
            g_40 = ((safe_rshift_func_int8_t_s_s(1L, (safe_add_func_uint16_t_u_u((l_48[g_27.f2] &= (safe_mod_func_uint8_t_u_u((p_13 , ((((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(l_68.f1, (safe_div_func_uint16_t_u_u((--g_72.f2), g_27.f1)))), 0xA2DC1931L)) < l_140.f2) | g_2) ^ g_123[0])), l_166))), 0xF2AFL)))) , g_106);
        }
        for (l_140.f1.f1 = 7; (l_140.f1.f1 < (-28)); l_140.f1.f1 = safe_sub_func_uint32_t_u_u(l_140.f1.f1, 5))
        { 
            int32_t l_172 = 0xAD472F8AL;
            g_174--;
            for (l_169 = 0; (l_169 <= 0); l_169 += 1)
            { 
                struct S2 l_178 = {1UL,0xF814L};
                int32_t l_179 = 0x17623E6EL;
                int32_t l_181 = 1L;
                int32_t l_182[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_182[i] = 0x85DB3B99L;
                l_178 = l_177[1];
                g_184--;
                return g_123[l_169];
            }
        }
    }
    return p_11;
}



static int32_t  func_18(int32_t  p_19)
{ 
    uint8_t l_30[2];
    const int32_t l_36 = (-1L);
    int32_t l_41 = 1L;
    int32_t l_42 = 0L;
    int i;
    for (i = 0; i < 2; i++)
        l_30[i] = 1UL;
    for (g_27.f1 = 0; (g_27.f1 <= 1); g_27.f1 += 1)
    { 
        int32_t l_39 = 0x8EF544BDL;
        int i;
        g_40 |= (l_30[g_27.f1] , (l_39 = ((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_38 = ((p_19 ^ (~l_36)) , (~g_27.f2))), 8L)), l_30[g_27.f1])) ^ g_27.f1)));
    }
    for (g_27.f1 = 1; (g_27.f1 >= 0); g_27.f1 -= 1)
    { 
        g_43--;
    }
    return g_38;
}



static int32_t  func_20(int64_t  p_21, int32_t  p_22, int64_t  p_23)
{ 
    struct S2 l_29 = {0x0524L,7L};
    l_29 = l_29;
    return p_21;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_123[i], "g_123[i]", print_hash_value);

    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1.f0, "g_142.f1.f0", print_hash_value);
    transparent_crc(g_142.f1.f1, "g_142.f1.f1", print_hash_value);
    transparent_crc(g_142.f1.f2, "g_142.f1.f2", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
