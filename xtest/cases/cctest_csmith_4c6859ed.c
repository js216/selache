// SPDX-License-Identifier: MIT
// cctest_csmith_4c6859ed.c --- cctest case csmith_4c6859ed (csmith seed 1281907181)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd282549d */
/* @exp_ticks 0xb73c */

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

// Options:   -s 1281907181 -o /tmp/csmith_gen_w6mntccd/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const struct S0  f0;
   int16_t  f1;
   uint32_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)

union U2 {
   int64_t  f0;
};


static int32_t g_3 = 7L;
static int32_t g_4 = 5L;
static int64_t g_5[3][4] = {{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)}};
static int8_t g_6[1][5][4] = {{{0x36L,0x36L,0x36L,0x36L},{0x36L,0x36L,0x36L,0x36L},{0x36L,0x36L,0x36L,0x36L},{0x36L,0x36L,0x36L,0x36L},{0x36L,0x36L,0x36L,0x36L}}};
static int8_t g_7 = 0x4DL;
static uint32_t g_8 = 0UL;
static uint16_t g_33 = 65531UL;
static struct S0 g_52 = {0UL,0xC9EA21F9L,0x6D65DBDCL,0xB7A89715L};
static union U2 g_60[4][4][6] = {{{{0xCD2740D6A5A8E70CLL},{-1L},{0x980504C99CC0F79FLL},{0xCD2740D6A5A8E70CLL},{0x980504C99CC0F79FLL},{-1L}},{{0x5E7CE1BF9D45AA77LL},{-1L},{1L},{0x5E7CE1BF9D45AA77LL},{0x980504C99CC0F79FLL},{0x980504C99CC0F79FLL}},{{0L},{-1L},{-4L},{-1L},{0xA4A7E2F045C746EALL},{-2L}},{{1L},{-4L},{0xA4A7E2F045C746EALL},{1L},{0xA4A7E2F045C746EALL},{-4L}}},{{{0x980504C99CC0F79FLL},{-4L},{-2L},{0x980504C99CC0F79FLL},{0xA4A7E2F045C746EALL},{0xA4A7E2F045C746EALL}},{{-1L},{-4L},{-4L},{-1L},{0xA4A7E2F045C746EALL},{-2L}},{{1L},{-4L},{0xA4A7E2F045C746EALL},{1L},{0xA4A7E2F045C746EALL},{-4L}},{{0x980504C99CC0F79FLL},{-4L},{-2L},{0x980504C99CC0F79FLL},{0xA4A7E2F045C746EALL},{0xA4A7E2F045C746EALL}}},{{{-1L},{-4L},{-4L},{-1L},{0xA4A7E2F045C746EALL},{-2L}},{{1L},{-4L},{0xA4A7E2F045C746EALL},{1L},{0xA4A7E2F045C746EALL},{-4L}},{{0x980504C99CC0F79FLL},{-4L},{-2L},{0x980504C99CC0F79FLL},{0xA4A7E2F045C746EALL},{0xA4A7E2F045C746EALL}},{{-1L},{-4L},{-4L},{-1L},{0xA4A7E2F045C746EALL},{-2L}}},{{{1L},{-4L},{0xA4A7E2F045C746EALL},{1L},{0xA4A7E2F045C746EALL},{-4L}},{{0x980504C99CC0F79FLL},{-4L},{-2L},{0x980504C99CC0F79FLL},{0xA4A7E2F045C746EALL},{0xA4A7E2F045C746EALL}},{{-1L},{-4L},{-4L},{-1L},{0xA4A7E2F045C746EALL},{-2L}},{{1L},{-4L},{0xA4A7E2F045C746EALL},{1L},{0xA4A7E2F045C746EALL},{-4L}}}};
static uint16_t g_62 = 0xD999L;
static uint16_t *g_61 = &g_62;
static uint8_t g_64[1] = {0x92L};
static int16_t g_77[1][6][1] = {{{(-10L)},{(-9L)},{(-9L)},{(-10L)},{(-9L)},{(-9L)}}};
static uint16_t g_78 = 0x1F69L;
static int8_t *g_109[4] = {&g_7,&g_7,&g_7,&g_7};
static int8_t **g_108 = &g_109[2];
static int32_t *g_134[4] = {&g_52.f1,&g_52.f1,&g_52.f1,&g_52.f1};
static int32_t **g_133 = &g_134[1];
static int16_t g_156 = 0x8AB6L;
static int32_t g_182[6][1] = {{0xDB09FE85L},{1L},{0xDB09FE85L},{1L},{0xDB09FE85L},{1L}};
static struct S1 g_241 = {{253UL,0x77ECFCCCL,8UL,18446744073709551609UL},1L,18446744073709551611UL,1L};
static int32_t g_248 = 0x102F5655L;
static struct S1 g_385 = {{0UL,0xB5E93056L,9UL,0UL},0xDAB4L,0x69E4FE23L,6L};
static struct S1 *g_384 = &g_385;
static uint8_t *g_430 = &g_52.f0;
static uint8_t **g_429 = &g_430;
static int64_t g_523 = 9L;
static uint64_t g_562[4] = {0UL,0UL,0UL,0UL};
static union U2 *g_588 = (void*)0;
static struct S1 g_591 = {{0x5FL,-10L,0x5A530EC9L,0x42BE10E9L},0x8BB2L,0xBF1EA12BL,0L};
static int8_t g_723 = (-3L);
static int8_t g_724 = 5L;
static uint16_t g_725 = 65528UL;
static const int16_t g_756 = (-1L);
static int32_t ****g_767 = (void*)0;
static uint64_t *g_770 = &g_562[3];
static uint64_t **g_769[1] = {&g_770};
static uint8_t g_816 = 255UL;
static struct S0 g_838 = {1UL,0xCDDBE48EL,0xAC82ACB4L,2UL};
static struct S0 *g_837[3] = {&g_838,&g_838,&g_838};
static uint16_t g_872 = 0UL;
static int16_t g_885 = 7L;
static int8_t g_938 = (-1L);
static const struct S0 *g_963 = (void*)0;
static const struct S0 **g_962 = &g_963;
static int16_t g_988 = 0xCDF1L;
static int64_t *g_1023 = &g_5[1][2];
static int64_t **g_1022 = &g_1023;
static uint64_t g_1067 = 0x381BECE79E4398D6LL;
static uint16_t **g_1224[5][7][1] = {{{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61}},{{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61}},{{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61}},{{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61}},{{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61},{&g_61}}};
static uint16_t ***g_1223 = &g_1224[2][1][0];
static const struct S1 g_1259 = {{1UL,-5L,0xDBD18890L,0UL},-10L,0x3A952809L,0x3F540958L};
static const int64_t *g_1285 = (void*)0;
static const int64_t **g_1284 = &g_1285;
static const int64_t ***g_1283 = &g_1284;
static const int64_t ****g_1282 = &g_1283;
static int32_t ***g_1308 = &g_133;
static struct S1 **g_1316 = &g_384;
static struct S1 ***g_1315 = &g_1316;
static int32_t g_1322 = (-1L);
static uint32_t g_1352 = 0xF9EE2A93L;
static int16_t g_1364 = 2L;
static int16_t **g_1413[1][3][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static const uint16_t *g_1432[2] = {&g_62,&g_62};
static const uint16_t **g_1431 = &g_1432[0];
static const uint16_t ***g_1430 = &g_1431;
static uint16_t ****g_1558 = &g_1223;



static uint16_t  func_1(void);
static int32_t  func_11(const int8_t  p_12, int8_t  p_13, int32_t * p_14, const int32_t * p_15);
static const uint32_t  func_16(struct S1  p_17, const int32_t * p_18, struct S0  p_19);
static struct S1  func_20(uint16_t  p_21, int32_t  p_22, int32_t * p_23, int32_t * const  p_24);
static uint16_t  func_26(uint16_t  p_27, uint8_t  p_28, const union U2  p_29, uint32_t  p_30, int32_t  p_31);
static union U2  func_34(int32_t  p_35, uint16_t  p_36, struct S0  p_37, uint16_t * p_38, int32_t * p_39);
static struct S0  func_40(int32_t * p_41, uint32_t  p_42, int64_t  p_43, const union U2  p_44);
static int32_t * func_45(struct S0  p_46, struct S0  p_47, int8_t  p_48, uint8_t  p_49, int8_t  p_50);




static uint16_t  func_1(void)
{ 
    int32_t *l_2[6][5][2] = {{{&g_3,&g_3},{(void*)0,&g_3},{&g_3,&g_3},{&g_3,&g_3},{(void*)0,&g_3}},{{&g_3,&g_3},{&g_3,(void*)0},{&g_3,&g_3},{&g_3,&g_3},{&g_3,(void*)0}},{{&g_3,&g_3},{&g_3,&g_3},{(void*)0,&g_3},{&g_3,&g_3},{(void*)0,&g_3}},{{&g_3,&g_3},{&g_3,(void*)0},{&g_3,&g_3},{&g_3,&g_3},{&g_3,&g_3}},{{&g_3,&g_3},{&g_3,(void*)0},{&g_3,&g_3},{&g_3,&g_3},{(void*)0,&g_3}},{{(void*)0,&g_3},{&g_3,&g_3},{&g_3,(void*)0},{&g_3,&g_3},{&g_3,&g_3}}};
    uint16_t *l_32 = &g_33;
    struct S0 l_51 = {0x7DL,-3L,1UL,5UL};
    int16_t *l_63[3];
    int8_t *l_65 = &g_7;
    const union U2 l_66[3] = {{0x2A731AC79CC16C41LL},{0x2A731AC79CC16C41LL},{0x2A731AC79CC16C41LL}};
    int8_t l_68 = 0x6EL;
    struct S0 l_917 = {0x4BL,2L,0x8A83DB09L,0x2617D945L};
    uint32_t l_1472 = 0xA6DC5BEBL;
    int64_t l_1473 = 0x0D2F324B7B1596C6LL;
    uint32_t l_1474 = 0UL;
    uint32_t l_1608 = 0xA8DAAEF8L;
    int32_t l_1614 = 0x93B7F792L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_63[i] = (void*)0;
    g_8--;
    if (func_11((((func_16(func_20((g_6[0][0][2] < (+func_26(((*l_32) = g_6[0][0][2]), (func_34(g_8, g_5[2][0], func_40(func_45(l_51, g_52, ((*l_65) = ((((((safe_lshift_func_int16_t_s_u((g_64[0] = (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s(((g_60[2][2][5] , l_2[1][4][1]) != (void*)0), 0x86L)) , g_61) != (void*)0), 4))))), 5)) || 4294967290UL) , g_7) < 1L) , (*g_61)) == 65526UL)), g_60[2][2][5].f0, g_52.f2), g_3, g_4, l_66[2]), l_63[0], l_2[4][2][1]) , g_52.f3), g_60[2][2][4], g_52.f1, l_68))), g_77[0][1][0], l_2[4][2][1], &g_4), (*g_133), l_917) || l_1472) || 0UL) | l_1473), l_1474, &g_248, l_2[4][2][1]))
    { 
        struct S0 *l_1602 = &l_51;
        (*l_1602) = l_917;
    }
    else
    { 
        uint16_t l_1610 = 0xE7EFL;
        for (g_7 = (-9); (g_7 < 5); g_7 = safe_add_func_int16_t_s_s(g_7, 5))
        { 
            int32_t l_1605 = 2L;
            return l_1605;
        }
        for (g_3 = (-14); (g_3 != (-11)); g_3 = safe_add_func_int32_t_s_s(g_3, 3))
        { 
            (**g_1308) = (void*)0;
            for (g_385.f2 = 0; (g_385.f2 <= 2); g_385.f2 += 1)
            { 
                int32_t l_1609 = 0x124DEFEDL;
                if (l_1608)
                { 
                    l_1610 &= (l_1609 ^= 0x5E8D2469L);
                }
                else
                { 
                    uint32_t l_1611 = 1UL;
                    l_1611++;
                }
            }
        }
        (**g_1308) = (**g_1308);
        return l_1610;
    }
    return l_1614;
}



static int32_t  func_11(const int8_t  p_12, int8_t  p_13, int32_t * p_14, const int32_t * p_15)
{ 
    struct S0 l_1475 = {0xD4L,0L,0x70C88692L,5UL};
    struct S0 l_1476 = {0UL,3L,4UL,18446744073709551610UL};
    int32_t *l_1477 = &l_1475.f1;
    int32_t *l_1478 = &l_1476.f1;
    int32_t *l_1479 = &g_3;
    int32_t *l_1480 = &l_1476.f1;
    int32_t *l_1481[4];
    uint16_t l_1482 = 65535UL;
    union U2 *l_1492[2][1][1];
    union U2 *l_1495 = &g_60[2][2][5];
    uint32_t *l_1496[4][1][3];
    int64_t l_1519[7][4][1] = {{{0x36D24FD6221E9B3BLL},{(-1L)},{0x36D24FD6221E9B3BLL},{(-1L)}},{{0x36D24FD6221E9B3BLL},{(-1L)},{0x36D24FD6221E9B3BLL},{(-1L)}},{{0x36D24FD6221E9B3BLL},{(-1L)},{0x36D24FD6221E9B3BLL},{(-1L)}},{{0x36D24FD6221E9B3BLL},{(-1L)},{0x36D24FD6221E9B3BLL},{(-1L)}},{{0x36D24FD6221E9B3BLL},{(-1L)},{0x36D24FD6221E9B3BLL},{(-1L)}},{{0x36D24FD6221E9B3BLL},{(-1L)},{0x36D24FD6221E9B3BLL},{(-1L)}},{{0x36D24FD6221E9B3BLL},{(-1L)},{0x36D24FD6221E9B3BLL},{(-1L)}}};
    int64_t l_1530[3][5] = {{0x5BFDAE3B81525DC5LL,0xA3EEDD1E421A4449LL,0x5BFDAE3B81525DC5LL,0x5BFDAE3B81525DC5LL,0xA3EEDD1E421A4449LL},{0xA3EEDD1E421A4449LL,0x5BFDAE3B81525DC5LL,0x5BFDAE3B81525DC5LL,0xA3EEDD1E421A4449LL,0x5BFDAE3B81525DC5LL},{0xA3EEDD1E421A4449LL,0xA3EEDD1E421A4449LL,1L,0xA3EEDD1E421A4449LL,0xA3EEDD1E421A4449LL}};
    uint32_t l_1541 = 0x2B40C402L;
    uint8_t ***l_1577 = &g_429;
    int8_t l_1597 = (-1L);
    int16_t l_1598 = 0L;
    uint32_t l_1599 = 1UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1481[i] = &g_3;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1492[i][j][k] = &g_60[2][0][3];
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_1496[i][j][k] = &g_838.f2;
        }
    }
    l_1476 = l_1475;
    l_1482++;
lbl_1580:
    (**g_1308) = func_45(l_1476, func_40((**g_1308), (g_385.f2 |= (p_13 && (~((safe_rshift_func_int8_t_s_s(((**g_108) = (safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((l_1492[0][0][0] != ((((((*l_1479) = ((*g_1023) ^ (safe_rshift_func_uint16_t_u_s(65535UL, 7)))) > (((*l_1478) < p_12) , g_182[3][0])) | 0xF1L) == p_13) , l_1495)), p_12)), p_12))), (*l_1480))) && (*l_1480))))), (*g_1023), (*l_1495)), p_13, p_13, p_13);
    for (g_591.f1 = (-21); (g_591.f1 != 16); g_591.f1++)
    { 
        int8_t l_1513 = (-10L);
        struct S0 l_1514[7] = {{0xE1L,-5L,0xE7E52D7DL,18446744073709551615UL},{0xE1L,-5L,0xE7E52D7DL,18446744073709551615UL},{0xE1L,-5L,0xE7E52D7DL,18446744073709551615UL},{0xE1L,-5L,0xE7E52D7DL,18446744073709551615UL},{0xE1L,-5L,0xE7E52D7DL,18446744073709551615UL},{0xE1L,-5L,0xE7E52D7DL,18446744073709551615UL},{0xE1L,-5L,0xE7E52D7DL,18446744073709551615UL}};
        int32_t ***l_1515 = &g_133;
        uint32_t l_1518 = 0xDE2E963CL;
        int64_t ** const *l_1538 = &g_1022;
        const union U2 l_1544 = {0xD157866998D35CABLL};
        int64_t l_1546 = 0xBE0F652EC82EF170LL;
        uint16_t l_1573 = 6UL;
        int32_t l_1583[4][7] = {{0xB97CCA66L,0xB97CCA66L,3L,0xB97CCA66L,0xB97CCA66L,3L,0xB97CCA66L},{0xB97CCA66L,0L,0L,0xB97CCA66L,0L,0L,0xB97CCA66L},{0L,0xB97CCA66L,0L,0L,0xB97CCA66L,0L,0L},{0xB97CCA66L,0xB97CCA66L,3L,0xB97CCA66L,0xB97CCA66L,3L,0xB97CCA66L}};
        uint32_t l_1592 = 0x9C34E018L;
        int i, j;
        (*l_1479) ^= ((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((((**g_108) , (safe_add_func_uint16_t_u_u((**g_1431), 0x70EFL))) , (p_13 < (0xE6B2A8544BC98949LL || (safe_add_func_uint16_t_u_u(((*g_61) = ((((*l_1478) = ((p_13 && p_13) == (*l_1478))) || 0x010D0543L) ^ 0x35L)), l_1513))))), l_1513)), (*p_14))), p_13)), 0x56ECDD210C8EBABBLL)), 9)) != p_12);
        if (((l_1514[0] , 7L) || ((l_1475 , l_1515) != l_1515)))
        { 
            int32_t l_1520 = (-5L);
            int32_t l_1552 = 0x388CA65FL;
            uint16_t ****l_1557[2][4][7] = {{{&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,(void*)0,&g_1223},{&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,&g_1223},{&g_1223,&g_1223,&g_1223,(void*)0,(void*)0,&g_1223,&g_1223},{&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,&g_1223}},{{(void*)0,&g_1223,(void*)0,&g_1223,&g_1223,&g_1223,&g_1223},{&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,&g_1223},{(void*)0,&g_1223,&g_1223,(void*)0,&g_1223,&g_1223,(void*)0},{&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,&g_1223,&g_1223}}};
            struct S0 l_1565 = {0x90L,0xD8852296L,0xADC50FA9L,0xEA71B525L};
            const union U2 *l_1566 = &g_60[3][2][2];
            int i, j, k;
            l_1520 &= (g_60[2][2][5] , ((0x7DB56226L != ((((**g_108) , (safe_mod_func_uint8_t_u_u(255UL, (0x308FL & p_13)))) || ((((*g_770) |= p_13) <= 0xC9FE61AAAC8161A6LL) < l_1518)) , 4294967295UL)) < l_1519[1][2][0]));
            for (g_52.f2 = 1; (g_52.f2 == 26); g_52.f2 = safe_add_func_int8_t_s_s(g_52.f2, 4))
            { 
                struct S1 *l_1539 = &g_385;
                int32_t l_1540 = 5L;
                int32_t *l_1542[5] = {&g_1322,&g_1322,&g_1322,&g_1322,&g_1322};
                int32_t *l_1543[5] = {&g_52.f1,&g_52.f1,&g_52.f1,&g_52.f1,&g_52.f1};
                struct S0 l_1545 = {0UL,0x8E66445AL,18446744073709551607UL,0x228ED314L};
                int i;
                (*g_133) = l_1479;
                (**g_1308) = func_45(func_40((l_1543[0] = (((*l_1478) &= ((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(l_1530[1][4], l_1520)) || ((***l_1538) = (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((~(((safe_add_func_int8_t_s_s(0xD7L, 0x1AL)) , ((((((((p_13 , (((void*)0 == l_1538) > 0x2DD67370FC6D74C3LL)) & p_12) && 0x143C9F9543BC0A3CLL) <= p_13) < l_1520) , p_13) , (void*)0) != l_1539)) >= l_1514[0].f0)) ^ l_1540) ^ l_1541), (***g_1430))), 0x2F66L)))), g_241.f2)), 3)))) , g_838.f0)) , &l_1540)), g_182[0][0], p_13, l_1544), l_1545, (*l_1477), l_1540, (*l_1477));
                (*p_14) ^= ((**g_429) , l_1546);
            }
            for (l_1475.f0 = 0; (l_1475.f0 <= 0); l_1475.f0 += 1)
            { 
                int32_t l_1547 = 0x68B69A80L;
                struct S0 l_1553 = {1UL,-7L,0x7B68C412L,18446744073709551615UL};
                struct S0 *l_1554[5][5] = {{&g_838,&g_838,&g_838,&g_838,&g_838},{&l_1514[5],&l_1553,&l_1514[5],&l_1553,&l_1514[5]},{&g_838,&g_838,&g_838,&g_838,&g_838},{&l_1514[5],&l_1553,&l_1514[5],&l_1553,&l_1514[5]},{&g_838,&g_838,&g_838,&g_838,&g_838}};
                int i, j;
                for (g_8 = 0; (g_8 <= 0); g_8 += 1)
                { 
                    int i, j, k;
                    return g_6[l_1475.f0][(l_1475.f0 + 1)][g_8];
                }
                if (l_1547)
                    break;
                if ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((**g_429) = l_1552), ((l_1476 = l_1553) , (safe_div_func_uint16_t_u_u(p_13, (((g_1558 = l_1557[1][2][2]) == (void*)0) && ((**g_1022) ^= ((safe_div_func_uint8_t_u_u((l_1553.f0 , (safe_rshift_func_int8_t_s_u((**g_108), l_1553.f3))), l_1520)) > l_1552)))))))), l_1520)))
                { 
                    uint8_t l_1563 = 0xA2L;
                    return l_1563;
                }
                else
                { 
                    struct S0 l_1564 = {0x4CL,0x5F99F404L,0x4DBAFD75L,18446744073709551615UL};
                    int i;
                    l_1514[5] = l_1564;
                    return l_1514[0].f1;
                }
            }
            l_1565 = func_40((p_14 = func_45(l_1565, func_40(p_14, (((void*)0 != l_1566) == (safe_add_func_uint16_t_u_u(((*g_61) |= (p_13 ^ (safe_rshift_func_int8_t_s_s(((1L || ((safe_rshift_func_uint16_t_u_u((0x16L && p_13), 4)) != 0xE96BL)) == l_1565.f2), l_1573)))), 8L))), p_13, (*l_1495)), p_12, p_13, p_12)), g_724, (*l_1477), g_60[2][0][3]);
        }
        else
        { 
            struct S0 l_1574 = {0xC1L,0x4A2C55A1L,0x58636A05L,8UL};
            int32_t l_1582 = 1L;
            int32_t l_1584 = 0L;
            int32_t l_1585 = 2L;
            int32_t l_1586 = 0L;
            int32_t l_1587 = 0x5CC0F0EDL;
            int32_t l_1588 = (-2L);
            int32_t l_1589 = 0xCBC9FD0BL;
            int32_t l_1590[4][5][3] = {{{7L,1L,7L},{7L,1L,7L},{7L,1L,7L},{7L,1L,7L},{7L,1L,7L}},{{7L,1L,7L},{7L,1L,7L},{7L,1L,7L},{7L,1L,7L},{7L,1L,7L}},{{7L,1L,7L},{7L,1L,7L},{7L,1L,7L},{7L,1L,7L},{7L,1L,7L}},{{7L,1L,7L},{7L,1L,7L},{7L,1L,7L},{7L,1L,7L},{7L,1L,7L}}};
            int8_t l_1591 = 0xA2L;
            int i, j, k;
            (*l_1480) |= ((l_1574 , ((((*g_1023) &= ((safe_sub_func_uint16_t_u_u(p_13, (&g_429 == l_1577))) & (((safe_mul_func_int16_t_s_s(0xF0C2L, (0xF22EL & 0xB199L))) || p_12) ^ p_13))) , p_13) , (*p_14))) , 0x420EB051L);
            if (l_1546)
                goto lbl_1580;
            for (g_78 = 0; (g_78 <= 0); g_78 += 1)
            { 
                uint32_t l_1581 = 0xD8847655L;
                return l_1581;
            }
            l_1592--;
        }
        for (g_156 = 19; (g_156 >= 10); g_156--)
        { 
            if ((*p_14))
                break;
        }
    }
    --l_1599;
    return (*l_1479);
}



static const uint32_t  func_16(struct S1  p_17, const int32_t * p_18, struct S0  p_19)
{ 
    union U2 l_937 = {0x69D0C59F72F98281LL};
    struct S0 **l_959 = &g_837[2];
    int32_t l_982 = (-1L);
    int32_t l_990 = 0xA530A767L;
    int32_t l_991 = 0L;
    int32_t l_997 = 9L;
    int32_t l_1000 = 0x9B42B77DL;
    int32_t l_1075 = (-1L);
    int32_t l_1083 = 0xE7BCD4DBL;
    int32_t l_1084[1];
    uint32_t l_1106 = 0xBBAFC8FCL;
    int32_t *****l_1114 = (void*)0;
    uint32_t l_1139 = 0x9DC91FCEL;
    uint16_t **l_1144 = &g_61;
    uint16_t ***l_1143[5][1];
    uint16_t ****l_1142 = &l_1143[1][0];
    struct S0 *l_1161 = &g_838;
    uint32_t l_1186 = 4294967292UL;
    uint32_t l_1197 = 1UL;
    uint32_t l_1225 = 1UL;
    int32_t l_1239[6] = {(-1L),0L,(-1L),(-1L),0L,(-1L)};
    uint8_t l_1242 = 0xB9L;
    int32_t ***l_1307 = &g_133;
    uint8_t ***l_1360[7][4];
    uint16_t l_1368 = 0xFC8AL;
    uint32_t l_1371 = 0xBF481149L;
    const uint16_t ***l_1433 = &g_1431;
    int16_t l_1436 = 0x97C5L;
    const int16_t l_1457[5][4][7] = {{{0xE40BL,0x5792L,0L,0xCB6BL,(-2L),0x9E99L,0xE40BL},{1L,6L,(-1L),(-1L),0xA0E3L,(-1L),(-4L)},{0xA0E3L,0xE40BL,0xCBA4L,0L,0xE40BL,0xCB6BL,1L},{0x9E99L,0L,0x6B47L,0L,(-9L),0xCB6BL,0xCB6BL}},{{(-1L),(-9L),0L,(-9L),(-1L),(-1L),0x5792L},{(-7L),0xCBA4L,0xCB6BL,6L,0xEC61L,0x9E99L,(-1L)},{1L,(-4L),0xE40BL,1L,(-9L),1L,9L},{(-7L),6L,0x1C3CL,(-8L),(-4L),0xCDCCL,(-8L)}},{{(-1L),0x9E99L,0xEC61L,6L,0xCB6BL,0xCBA4L,(-7L)},{0x9E99L,0x390DL,0xEC61L,1L,(-2L),1L,0xEC61L},{0xA0E3L,0xA0E3L,0x1C3CL,1L,0x4D0CL,0x054AL,0x5792L},{1L,0xCB6BL,0xE40BL,0L,0xCBA4L,0xE40BL,0xA0E3L}},{{0xE40BL,0x390DL,0xCB6BL,0xEC61L,0x4D0CL,1L,0L},{(-4L),0x5792L,0L,0xA0E3L,(-2L),0x7538L,(-4L)},{1L,1L,0x6B47L,(-1L),0xCB6BL,0L,(-4L)},{0xCB6BL,(-4L),0xCBA4L,0xCBA4L,(-4L),0xCB6BL,0xB869L}},{{0L,0xE40BL,(-2L),1L,0x9E99L,(-9L),1L},{0xCBA4L,0x7538L,0xD352L,0x9E99L,0x054AL,(-1L),0L},{1L,0xE40BL,0x1C3CL,(-1L),0xCBA4L,0xB556L,0x054AL},{0xCB6BL,1L,(-8L),0xCB6BL,0x9E99L,0x390DL,0xEC61L}}};
    uint64_t ***l_1459 = &g_769[0];
    uint64_t ****l_1458 = &l_1459;
    uint8_t l_1460 = 0x36L;
    uint8_t l_1469 = 0x4EL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1084[i] = (-1L);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1143[i][j] = &l_1144;
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
            l_1360[i][j] = &g_429;
    }
lbl_1160:
    for (g_838.f3 = 0; (g_838.f3 <= 58); g_838.f3++)
    { 
        uint32_t l_927 = 0x2D0AD978L;
        const struct S0 *l_961 = &g_52;
        const struct S0 **l_960 = &l_961;
        int32_t l_966 = (-6L);
        int32_t l_987 = 0L;
        int32_t l_989 = 0x18B78D9EL;
        int32_t l_994 = 3L;
        int32_t l_998 = 0xEE78C21CL;
        int32_t l_999 = 0xE575469BL;
        uint64_t *l_1006 = &g_562[3];
        struct S0 l_1056 = {1UL,0xF29B5EB4L,7UL,0UL};
        int32_t l_1085[5][5][1];
        int16_t l_1087[3];
        int16_t l_1088 = (-1L);
        uint32_t l_1116[2][4];
        uint16_t ****l_1146 = &l_1143[4][0];
        uint16_t l_1158 = 0x00BFL;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1085[i][j][k] = 0xB2D31E4CL;
            }
        }
        for (i = 0; i < 3; i++)
            l_1087[i] = 0xB55BL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_1116[i][j] = 0xC8B707A7L;
        }
        for (g_52.f0 = 22; (g_52.f0 <= 8); --g_52.f0)
        { 
            uint64_t l_939 = 0x7F1689C885DDA3FBLL;
            int32_t l_965 = 1L;
            int32_t l_993 = 0x703ADE1EL;
            int32_t l_996 = 1L;
            int32_t l_1001[3];
            int8_t l_1021 = (-1L);
            uint32_t ***l_1025 = (void*)0;
            int32_t l_1038 = 1L;
            const uint8_t l_1054[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int32_t *l_1071 = &l_991;
            int32_t l_1086 = 0x7234114DL;
            uint32_t l_1089[1][6][2];
            int32_t * const ** const **l_1115 = (void*)0;
            int64_t ***l_1127[2];
            uint32_t l_1130 = 9UL;
            int32_t *l_1159[2];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1001[i] = 0x7B47D043L;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1089[i][j][k] = 4294967295UL;
                }
            }
            for (i = 0; i < 2; i++)
                l_1127[i] = (void*)0;
            for (i = 0; i < 2; i++)
                l_1159[i] = &l_1085[4][2][0];
            for (g_62 = 0; (g_62 != 24); ++g_62)
            { 
                return p_19.f2;
            }
            for (g_591.f1 = (-3); (g_591.f1 <= (-30)); g_591.f1 = safe_sub_func_uint8_t_u_u(g_591.f1, 7))
            { 
                uint16_t l_926 = 0x5DD1L;
                for (g_724 = 0; (g_724 >= 0); g_724 -= 1)
                { 
                    int32_t l_936 = 0L;
                    int i, j, k;
                    l_926 = 0xAB3F1281L;
                    if (g_77[g_724][(g_724 + 4)][g_724])
                        continue;
                    l_927--;
                    p_19 = func_40((((g_77[g_724][(g_724 + 2)][g_724] > (safe_sub_func_uint32_t_u_u(((0x32391881L || (7L >= 0x3BE497CCL)) > 0x9A23L), (safe_sub_func_int8_t_s_s(p_17.f1, (safe_lshift_func_int8_t_s_s(((l_936 , l_937) , (-10L)), 7))))))) && (-2L)) , (void*)0), g_938, l_939, l_937);
                }
                return p_17.f0.f0;
            }
            if (((p_19.f1 |= (l_937.f0 && 0UL)) <= 0x22B7C3F2L))
            { 
                const int32_t *l_941 = &g_385.f0.f1;
                const int32_t **l_940 = &l_941;
                uint8_t *l_947 = &g_64[0];
                int8_t *l_950 = &g_938;
                uint16_t *l_951 = &g_872;
                int32_t l_984 = 0L;
                int32_t l_985 = 0xB399C210L;
                int32_t l_986 = 2L;
                int32_t l_992 = 0x5A0B79F5L;
                int32_t l_995[3];
                uint8_t l_1002 = 1UL;
                uint64_t *l_1005[5];
                int i;
                for (i = 0; i < 3; i++)
                    l_995[i] = 8L;
                for (i = 0; i < 5; i++)
                    l_1005[i] = &l_939;
                (*l_940) = p_18;
                if (((l_939 <= (p_19.f1 = (~((safe_mod_func_uint8_t_u_u(((*l_947) = (++p_19.f0)), (**g_108))) != (((*g_770) ^= (((*g_61) , p_17.f2) & ((*l_951) ^= (safe_mul_func_uint8_t_u_u(l_927, ((*l_950) &= p_17.f0.f2)))))) >= 0xC11C7EBF39E6C86ALL))))) && 0UL))
                { 
                    uint32_t l_952 = 4294967288UL;
                    uint32_t *l_964[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_964[i] = &l_952;
                    if (l_952)
                        break;
                    l_966 = (((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((3L <= g_756), (((*g_384) , ((l_965 |= (safe_lshift_func_uint8_t_u_u((*g_430), ((*l_947) = (p_19.f0 = (((l_959 != (g_962 = l_960)) <= p_19.f0) | p_17.f0.f0)))))) != 0xE5C54E6FL)) , 1L))), p_19.f2)) & 0x33L) > 0xE2L);
                    if (p_17.f1)
                        break;
                    (*l_940) = p_18;
                    if (l_965)
                        break;
                }
                else
                { 
                    union U2 **l_967[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_967[i] = &g_588;
                    g_588 = &g_60[2][2][5];
                    return g_6[0][1][1];
                }
                p_19.f1 = l_965;
                for (g_4 = 0; (g_4 >= (-5)); g_4 = safe_sub_func_uint32_t_u_u(g_4, 7))
                { 
                    uint32_t l_974 = 0xE27C8331L;
                    int16_t l_981 = (-1L);
                    int32_t *l_983[3][5][1] = {{{&g_248},{&g_52.f1},{&g_248},{&g_52.f1},{&g_248}},{{&g_52.f1},{&g_248},{&g_52.f1},{&g_248},{&g_52.f1}},{{&g_248},{&g_52.f1},{&g_248},{&g_52.f1},{&g_248}}};
                    int i, j, k;
                    l_982 ^= (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_974 & l_974), ((safe_mod_func_int32_t_s_s(l_974, (safe_add_func_int32_t_s_s((l_974 , ((safe_div_func_int64_t_s_s(0xA5E499C92B0BFEC2LL, (*g_770))) ^ (((0xDE85CA5AL <= l_981) & g_78) || (*g_61)))), 4294967288UL)))) ^ l_939))), l_966));
                    l_1002--;
                    p_19.f1 = ((*g_770) | (l_1005[0] != l_1006));
                }
                for (g_838.f0 = 0; (g_838.f0 > 19); g_838.f0++)
                { 
                    int32_t *l_1009[7][6] = {{&l_995[1],&l_985,&l_990,&l_992,&l_985,&l_992},{&l_995[1],&g_838.f1,&l_995[1],&l_992,&g_838.f1,&l_990},{&l_995[1],(void*)0,&l_992,&l_992,(void*)0,&l_995[1]},{&l_995[1],&l_985,&l_990,&l_992,&l_985,&l_992},{&l_995[1],&g_838.f1,&l_995[1],&l_992,&g_838.f1,&l_990},{&l_995[1],(void*)0,&l_992,&l_992,(void*)0,&l_995[1]},{&l_995[1],&l_985,&l_990,&l_992,&l_985,&l_992}};
                    int i, j;
                    l_1000 = (l_995[0] = l_966);
                    return g_78;
                }
            }
            else
            { 
                uint32_t ****l_1026 = &l_1025;
                int32_t *l_1037[3][1][1];
                const union U2 l_1055 = {0L};
                uint32_t l_1074 = 0x2E34158BL;
                uint8_t l_1080 = 0x43L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1037[i][j][k] = &l_991;
                    }
                }
                for (p_17.f2 = 0; (p_17.f2 <= 0); p_17.f2 += 1)
                { 
                    uint16_t l_1014 = 0UL;
                    uint32_t *l_1018[4][7][1] = {{{(void*)0},{(void*)0},{&g_52.f3},{&g_838.f2},{&g_8},{&g_52.f3},{&g_8}},{{(void*)0},{&g_8},{&g_52.f3},{&g_8},{&g_838.f2},{&g_52.f3},{(void*)0}},{{(void*)0},{&g_52.f3},{&g_838.f2},{&g_8},{&g_52.f3},{&g_8},{(void*)0}},{{&g_8},{&g_52.f3},{&g_8},{&g_838.f2},{&g_52.f3},{(void*)0},{(void*)0}}};
                    uint32_t **l_1017 = &l_1018[0][0][0];
                    int64_t ***l_1024 = &g_1022;
                    int i, j, k;
                    g_182[(p_17.f2 + 5)][p_17.f2] |= (safe_div_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s(l_997, 6)) , 1UL) != (l_1014 && (safe_add_func_uint16_t_u_u(((p_18 == ((*l_1017) = (void*)0)) | (safe_mul_func_int16_t_s_s(p_19.f1, (l_996 >= p_19.f3)))), (*g_61))))), l_1021));
                    (*l_1024) = g_1022;
                }
                (*l_1026) = l_1025;
                if ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_1001[0] & ((func_40(l_1037[1][0][0], (l_1038 ^= g_7), ((safe_div_func_int8_t_s_s(((~(safe_lshift_func_int8_t_s_s(p_17.f0.f2, 1))) | (safe_rshift_func_int16_t_s_u(0x7B9FL, 15))), ((((*g_430) , (safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((l_1000 >= p_19.f2), p_19.f1)) <= 0L) | 0xA611300A021B4BC9LL), p_17.f2)) || l_1054[3]), g_385.f0.f1))) != 0x5BCAB457L) & l_1001[0]))) && 1UL), l_1055) , l_1056) , l_1054[4])), p_17.f2)), 7UL)), (*g_61))), (**g_429))), 15)))
                { 
                    int16_t *l_1060 = &g_77[0][1][0];
                    int16_t **l_1061 = &l_1060;
                    uint32_t *l_1064 = &l_927;
                    int32_t l_1065 = (-1L);
                    int32_t l_1066[6][4] = {{0xE5AC8224L,0xE5AC8224L,0x0AEFCB53L,(-1L)},{0xE5AC8224L,0xCF8749F9L,(-3L),0xE5AC8224L},{(-1L),(-1L),(-1L),(-3L)},{(-4L),(-1L),0x0AEFCB53L,0xE5AC8224L},{(-1L),0xCF8749F9L,0xCF8749F9L,(-1L)},{(-1L),0xE5AC8224L,0xCF8749F9L,(-3L)}};
                    int i, j;
                    p_19.f1 = (!(l_937 , (((p_17.f0.f2 >= (safe_div_func_uint16_t_u_u((((*l_1061) = l_1060) != (void*)0), ((safe_rshift_func_int8_t_s_u((((*l_1064) |= 0xE6D6C71DL) > 3UL), (p_19.f2 != 0x2296L))) | p_17.f0.f1)))) || 0x4736AA46L) & p_17.f0.f2)));
                    if (l_987)
                        continue;
                    p_19.f1 = ((**g_429) == ((**g_108) = l_1056.f0));
                    g_1067--;
                    return g_52.f2;
                }
                else
                { 
                    struct S0 *l_1070 = &l_1056;
                    p_19.f1 = l_1038;
                    (*l_1070) = func_40(((*g_133) = func_45((p_19.f0 , p_19), p_19, l_990, p_17.f0.f3, (1L < ((g_385.f0.f0 || (*g_61)) < l_1056.f3)))), l_1054[0], (*g_1023), l_937);
                    l_1071 = ((*g_133) = (void*)0);
                    if (p_17.f0.f2)
                        continue;
                }
                for (g_885 = (-6); (g_885 <= 2); g_885 = safe_add_func_uint64_t_u_u(g_885, 9))
                { 
                    int64_t l_1076 = 0xB084E84DF7BFEA41LL;
                    int32_t l_1077 = (-9L);
                    int32_t l_1078 = 2L;
                    int32_t l_1079 = (-2L);
                    l_987 = l_1074;
                    --l_1080;
                    if (l_1077)
                        break;
                }
                l_1089[0][1][0]++;
            }
            if (l_939)
                goto lbl_1160;
            for (l_965 = 0; (l_965 <= 8); l_965 = safe_add_func_uint64_t_u_u(l_965, 8))
            { 
                uint16_t l_1099[6][7] = {{9UL,1UL,1UL,9UL,0x600CL,0x508AL,0x600CL},{9UL,1UL,1UL,9UL,0x600CL,0x508AL,0x600CL},{9UL,1UL,1UL,9UL,0x600CL,0x508AL,0x600CL},{9UL,1UL,1UL,9UL,0x600CL,0x508AL,0x600CL},{9UL,1UL,1UL,9UL,0x600CL,0x508AL,0x600CL},{9UL,1UL,1UL,9UL,0x600CL,0x508AL,0x600CL}};
                int32_t l_1102 = 0xA0B2C85DL;
                int32_t l_1103 = 0xC7571840L;
                int32_t l_1104 = (-7L);
                int32_t l_1105[4][3] = {{1L,(-3L),1L},{0xBDBDA768L,0xBDBDA768L,0xBDBDA768L},{1L,(-3L),1L},{0xBDBDA768L,0xBDBDA768L,0xBDBDA768L}};
                int64_t ***l_1128 = &g_1022;
                int64_t ****l_1129 = &l_1128;
                int32_t *l_1131 = &l_996;
                int8_t l_1137 = 0x07L;
                int32_t l_1138 = 0x81A2B8F8L;
                struct S0 l_1147 = {3UL,0x30B27D0EL,0x30BA23B7L,18446744073709551615UL};
                int i, j;
                for (g_816 = 0; (g_816 > 21); g_816 = safe_add_func_int8_t_s_s(g_816, 3))
                { 
                    int32_t *l_1096 = &l_991;
                    int32_t *l_1097 = &l_991;
                    int32_t *l_1098[6] = {&g_3,&g_3,&l_966,&g_3,&g_3,&l_966};
                    int i;
                    (*l_1096) = (-6L);
                    p_19.f1 ^= (-2L);
                    l_1099[1][2]++;
                    l_1106--;
                    l_997 ^= ((l_1116[0][3] = (+(safe_lshift_func_int8_t_s_u((l_966 >= 3L), (p_19.f0 = (p_17.f0.f3 != ((safe_div_func_uint8_t_u_u((((-1L) || (*l_1097)) != ((l_1114 = (p_19.f1 , l_1114)) == l_1115)), l_989)) < 255UL))))))) == 0xBEL);
                }
                (*l_1131) |= (p_19.f1 &= (l_1099[2][3] <= (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((p_17.f3 < (((safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((safe_sub_func_int16_t_s_s(g_1067, 0x3E46L)) , (l_937 , l_1127[0])) != ((*l_1129) = l_1128)), l_1099[5][6])) , l_987), l_1130)) && p_17.f0.f2) || g_838.f1)), p_19.f3)), 6))));
                for (l_1056.f2 = 0; (l_1056.f2 == 40); l_1056.f2 = safe_add_func_uint32_t_u_u(l_1056.f2, 7))
                { 
                    (*g_133) = (void*)0;
                    if (p_17.f1)
                        break;
                }
                if (l_1085[4][2][0])
                { 
                    return g_77[0][1][0];
                }
                else
                { 
                    int64_t l_1134[5][2];
                    int32_t *l_1135 = &l_1105[2][1];
                    int32_t *l_1136[3];
                    uint16_t *****l_1145[5][7] = {{&l_1142,&l_1142,&l_1142,&l_1142,&l_1142,&l_1142,&l_1142},{(void*)0,&l_1142,&l_1142,(void*)0,&l_1142,&l_1142,(void*)0},{&l_1142,&l_1142,&l_1142,&l_1142,&l_1142,&l_1142,&l_1142},{(void*)0,&l_1142,&l_1142,(void*)0,&l_1142,&l_1142,(void*)0},{&l_1142,&l_1142,&l_1142,&l_1142,&l_1142,&l_1142,&l_1142}};
                    struct S0 l_1148[6][3] = {{{0x8CL,5L,0x019B1842L,18446744073709551609UL},{0x8CL,5L,0x019B1842L,18446744073709551609UL},{0x8CL,5L,0x019B1842L,18446744073709551609UL}},{{0x7CL,0xE482AED5L,0x9EE4C756L,0x6DC2429FL},{1UL,0x2B9E4ECDL,1UL,0UL},{0x7CL,0xE482AED5L,0x9EE4C756L,0x6DC2429FL}},{{0x8CL,5L,0x019B1842L,18446744073709551609UL},{0x8CL,5L,0x019B1842L,18446744073709551609UL},{0x8CL,5L,0x019B1842L,18446744073709551609UL}},{{0x7CL,0xE482AED5L,0x9EE4C756L,0x6DC2429FL},{1UL,0x2B9E4ECDL,1UL,0UL},{0x7CL,0xE482AED5L,0x9EE4C756L,0x6DC2429FL}},{{0x8CL,5L,0x019B1842L,18446744073709551609UL},{0x8CL,5L,0x019B1842L,18446744073709551609UL},{0x8CL,5L,0x019B1842L,18446744073709551609UL}},{{0x7CL,0xE482AED5L,0x9EE4C756L,0x6DC2429FL},{1UL,0x2B9E4ECDL,1UL,0UL},{0x7CL,0xE482AED5L,0x9EE4C756L,0x6DC2429FL}}};
                    uint8_t **l_1151 = &g_430;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1134[i][j] = 0x14C0B41F02188006LL;
                    }
                    for (i = 0; i < 3; i++)
                        l_1136[i] = &l_1085[2][1][0];
                    ++l_1139;
                    l_1146 = l_1142;
                    p_18 = func_45(l_1147, l_1148[2][2], (safe_mod_func_int64_t_s_s(((l_1151 == (p_17 , &g_430)) < (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(((*g_770) | ((**g_1022) = ((((safe_lshift_func_uint16_t_u_s((((&g_837[0] == (void*)0) ^ p_17.f1) > (**g_108)), 3)) && (*l_1131)) >= 0x95F19962CF9D10D1LL) > 0x524DL))), g_241.f0.f3)) <= p_17.f0.f1), 2))), p_17.f0.f3)), (*l_1135), l_991);
                }
                if ((*p_18))
                    break;
            }
            p_19.f1 ^= l_1158;
        }
    }
    l_1161 = (*l_959);
    for (g_838.f1 = 0; (g_838.f1 >= (-8)); g_838.f1 = safe_sub_func_int32_t_s_s(g_838.f1, 8))
    { 
        uint16_t l_1164 = 0UL;
        int32_t l_1187 = 0xBF85A01AL;
        int16_t l_1235 = (-1L);
        int32_t l_1236 = (-9L);
        int32_t l_1237 = 1L;
        int32_t l_1238[6][2][4] = {{{6L,0x2F89EC18L,6L,0xD3C3CEFDL},{0x3397BCF1L,3L,0xE84BD01EL,0x48E7C307L}},{{0x2F89EC18L,1L,4L,3L},{(-5L),0x3397BCF1L,4L,0x5688BE64L}},{{0x2F89EC18L,1L,0xE84BD01EL,1L},{0x3397BCF1L,6L,6L,0x3397BCF1L}},{{6L,0x3397BCF1L,1L,(-5L)},{1L,0x2F89EC18L,(-1L),0x48E7C307L}},{{0x3397BCF1L,(-5L),0xD3C3CEFDL,0x48E7C307L},{1L,0x2F89EC18L,4L,(-5L)}},{{3L,0x3397BCF1L,(-8L),0x3397BCF1L},{0x2F89EC18L,6L,0xD3C3CEFDL,1L}}};
        int64_t l_1240 = 0x273D5BBE0B086DF1LL;
        union U2 l_1254 = {-10L};
        struct S1 *l_1260 = &g_591;
        int32_t *l_1262 = &l_982;
        int16_t l_1300 = 0x272FL;
        struct S0 l_1311[4] = {{0x3EL,0x8DB3AAD7L,6UL,0x893078C8L},{0x3EL,0x8DB3AAD7L,6UL,0x893078C8L},{0x3EL,0x8DB3AAD7L,6UL,0x893078C8L},{0x3EL,0x8DB3AAD7L,6UL,0x893078C8L}};
        int64_t l_1329[5] = {0x9BCFA02574E437F3LL,0x9BCFA02574E437F3LL,0x9BCFA02574E437F3LL,0x9BCFA02574E437F3LL,0x9BCFA02574E437F3LL};
        uint8_t ***l_1361 = (void*)0;
        uint16_t l_1397[2];
        const int16_t *l_1412 = &g_756;
        const int16_t **l_1411[6][7][6] = {{{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,(void*)0},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{(void*)0,(void*)0,&l_1412,(void*)0,(void*)0,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,(void*)0,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,(void*)0}},{{(void*)0,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,(void*)0,(void*)0,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,(void*)0,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,(void*)0,&l_1412},{&l_1412,(void*)0,&l_1412,(void*)0,&l_1412,(void*)0},{&l_1412,&l_1412,(void*)0,(void*)0,&l_1412,(void*)0}},{{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,(void*)0,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,(void*)0,&l_1412,&l_1412,&l_1412,(void*)0},{&l_1412,&l_1412,(void*)0,&l_1412,(void*)0,&l_1412},{&l_1412,&l_1412,&l_1412,(void*)0,(void*)0,&l_1412},{&l_1412,&l_1412,&l_1412,(void*)0,(void*)0,&l_1412}},{{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{(void*)0,(void*)0,&l_1412,&l_1412,&l_1412,&l_1412},{(void*)0,(void*)0,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,(void*)0,(void*)0,&l_1412,(void*)0,(void*)0}},{{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{(void*)0,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{(void*)0,&l_1412,&l_1412,&l_1412,(void*)0,&l_1412},{&l_1412,(void*)0,&l_1412,(void*)0,&l_1412,(void*)0},{&l_1412,&l_1412,(void*)0,(void*)0,&l_1412,(void*)0},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412}},{{&l_1412,(void*)0,&l_1412,&l_1412,&l_1412,&l_1412},{&l_1412,(void*)0,&l_1412,&l_1412,&l_1412,(void*)0},{&l_1412,&l_1412,(void*)0,&l_1412,(void*)0,&l_1412},{&l_1412,&l_1412,&l_1412,(void*)0,(void*)0,&l_1412},{&l_1412,&l_1412,&l_1412,(void*)0,(void*)0,&l_1412},{&l_1412,&l_1412,&l_1412,&l_1412,&l_1412,&l_1412},{(void*)0,(void*)0,&l_1412,&l_1412,&l_1412,&l_1412}}};
        const uint16_t l_1419 = 0x9741L;
        int32_t l_1422[6] = {0x636D304DL,0x636D304DL,0x636D304DL,0x636D304DL,0x636D304DL,0x636D304DL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1397[i] = 0x4FEDL;
    }
    l_1460 = ((p_17.f0.f3 <= l_1457[4][0][2]) & ((void*)0 == l_1458));
    for (g_1364 = 0; (g_1364 <= 2); g_1364 += 1)
    { 
        uint64_t l_1463 = 0xED4177B1DA169ADCLL;
        int32_t *l_1466 = &g_182[0][0];
        uint64_t *l_1470 = &g_1067;
        int32_t *l_1471[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1471[i] = &l_990;
        l_1075 |= (safe_sub_func_int64_t_s_s((*g_1023), (l_1463 , ((*l_1470) = (0x7B5FCA11L < (safe_rshift_func_uint16_t_u_s((((*g_770) = (((*l_1466) = (l_1084[0] = p_19.f2)) != p_17.f0.f3)) > (safe_add_func_int32_t_s_s(l_1469, 0xE272643CL))), 1)))))));
    }
    return p_17.f0.f2;
}



static struct S1  func_20(uint16_t  p_21, int32_t  p_22, int32_t * p_23, int32_t * const  p_24)
{ 
    const int8_t *l_105 = &g_7;
    const int8_t **l_104 = &l_105;
    const int8_t ***l_106 = (void*)0;
    const int8_t ***l_107 = &l_104;
    int16_t *l_110 = &g_77[0][1][0];
    const int32_t l_113 = 0xA06140C1L;
    int32_t *l_124 = &g_3;
    int32_t **l_123 = &l_124;
    int32_t l_136 = 0xBC76B673L;
    int32_t l_140 = 0x75C30783L;
    int32_t l_141[6][6] = {{0x7EC75322L,4L,4L,0x7EC75322L,0L,0x89A50454L},{1L,0x89A50454L,0L,0L,0xBFE558E2L,0L},{0L,0x85B45BF0L,0L,0x1F61FBC8L,0xBFE558E2L,0xB9E14A8CL},{0L,0x89A50454L,1L,0L,0L,1L},{4L,4L,0x7EC75322L,0L,0x89A50454L,0x1F61FBC8L},{0L,0x7EC75322L,0xB9E14A8CL,0x1F61FBC8L,0xB9E14A8CL,0x7EC75322L}};
    struct S0 l_150 = {0xD0L,-1L,0x5C39C69AL,0xB32BEE8EL};
    int16_t l_222 = 4L;
    uint32_t l_223 = 0xF3B193B9L;
    int32_t * const l_247 = &g_248;
    int32_t * const * const l_246 = &l_247;
    int32_t * const * const *l_245 = &l_246;
    int32_t * const * const **l_244 = &l_245;
    uint32_t l_269[6] = {0x4E54D436L,0x4E54D436L,0x4E54D436L,0x4E54D436L,0x4E54D436L,0x4E54D436L};
    uint32_t l_319 = 1UL;
    struct S0 *l_339 = &g_52;
    struct S0 **l_338 = &l_339;
    union U2 l_342 = {0x5190CC3448BB72D5LL};
    uint64_t *l_376 = (void*)0;
    uint16_t l_379[4];
    struct S1 * const l_408 = &g_241;
    uint8_t * const l_432 = (void*)0;
    uint8_t * const *l_431[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_433 = (-1L);
    uint8_t l_451 = 0UL;
    uint32_t l_485 = 1UL;
    uint32_t l_524 = 1UL;
    uint16_t l_533 = 0x4EC9L;
    uint16_t l_572 = 1UL;
    int32_t l_677 = 5L;
    uint16_t l_754 = 0x5F3EL;
    uint64_t ***l_804 = &g_769[0];
    int32_t l_882[4][1] = {{7L},{0x60BE2BE6L},{7L},{0x60BE2BE6L}};
    int i, j;
    for (i = 0; i < 4; i++)
        l_379[i] = 0xAEE4L;
    return (*l_408);
}



static uint16_t  func_26(uint16_t  p_27, uint8_t  p_28, const union U2  p_29, uint32_t  p_30, int32_t  p_31)
{ 
    uint8_t l_92 = 0xB7L;
    int8_t l_101[2][7][2] = {{{0x45L,(-4L)},{0xE3L,(-4L)},{0x45L,(-4L)},{0xE3L,(-4L)},{0x45L,(-4L)},{0xE3L,(-4L)},{0x45L,(-4L)}},{{0xE3L,(-4L)},{0x45L,(-4L)},{0xE3L,(-4L)},{0x45L,(-4L)},{0xE3L,(-4L)},{0x45L,(-4L)},{0xE3L,(-4L)}}};
    int i, j, k;
    for (p_28 = 0; (p_28 <= 2); p_28 += 1)
    { 
        return (*g_61);
    }
lbl_83:
    for (p_30 = 0; p_30 < 3; p_30 += 1)
    {
        for (p_27 = 0; p_27 < 4; p_27 += 1)
        {
            g_5[p_30][p_27] = (-1L);
        }
    }
    for (p_31 = 0; (p_31 > (-22)); p_31 = safe_sub_func_int8_t_s_s(p_31, 1))
    { 
        int32_t *l_82 = &g_3;
        int8_t *l_90 = (void*)0;
        uint8_t *l_91 = &g_64[0];
        int8_t **l_97 = &l_90;
        int32_t *l_98 = &g_52.f1;
        struct S0 l_99 = {246UL,0x2E4BCF31L,0xC7E2165FL,0xA2CAD0F0L};
        struct S0 *l_100 = &l_99;
        if (p_28)
        { 
            int32_t *l_71 = &g_4;
            int32_t *l_72 = &g_52.f1;
            int32_t *l_73 = &g_4;
            int32_t l_74 = 0L;
            int32_t *l_75 = &g_52.f1;
            int32_t *l_76[5];
            int32_t **l_81[1];
            int i;
            for (i = 0; i < 5; i++)
                l_76[i] = &l_74;
            for (i = 0; i < 1; i++)
                l_81[i] = (void*)0;
            ++g_78;
            l_82 = &l_74;
        }
        else
        { 
            if (g_62)
                goto lbl_83;
        }
        g_3 = ((*l_98) = (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((((*l_91) = (&g_7 == l_90)) || 1L), (l_92 = p_28))) , (safe_div_func_uint8_t_u_u(p_31, (safe_add_func_uint8_t_u_u(((((*l_97) = &g_6[0][1][3]) == (void*)0) == 1L), g_52.f2))))), (*g_61))), 0x4CB07E90L)));
        (*l_100) = (g_52 , l_99);
    }
    return l_101[0][1][0];
}



static union U2  func_34(int32_t  p_35, uint16_t  p_36, struct S0  p_37, uint16_t * p_38, int32_t * p_39)
{ 
    return g_60[0][1][1];
}



static struct S0  func_40(int32_t * p_41, uint32_t  p_42, int64_t  p_43, const union U2  p_44)
{ 
    struct S0 l_67 = {0UL,0xBC9E7330L,0UL,1UL};
    return l_67;
}



static int32_t * func_45(struct S0  p_46, struct S0  p_47, int8_t  p_48, uint8_t  p_49, int8_t  p_50)
{ 
    return &g_4;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_60[i][j][k].f0, "g_60[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_77[i][j][k], "g_77[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_182[i][j], "g_182[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_241.f0.f0, "g_241.f0.f0", print_hash_value);
    transparent_crc(g_241.f0.f1, "g_241.f0.f1", print_hash_value);
    transparent_crc(g_241.f0.f2, "g_241.f0.f2", print_hash_value);
    transparent_crc(g_241.f0.f3, "g_241.f0.f3", print_hash_value);
    transparent_crc(g_241.f1, "g_241.f1", print_hash_value);
    transparent_crc(g_241.f2, "g_241.f2", print_hash_value);
    transparent_crc(g_241.f3, "g_241.f3", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_385.f0.f0, "g_385.f0.f0", print_hash_value);
    transparent_crc(g_385.f0.f1, "g_385.f0.f1", print_hash_value);
    transparent_crc(g_385.f0.f2, "g_385.f0.f2", print_hash_value);
    transparent_crc(g_385.f0.f3, "g_385.f0.f3", print_hash_value);
    transparent_crc(g_385.f1, "g_385.f1", print_hash_value);
    transparent_crc(g_385.f2, "g_385.f2", print_hash_value);
    transparent_crc(g_385.f3, "g_385.f3", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_562[i], "g_562[i]", print_hash_value);

    }
    transparent_crc(g_591.f0.f0, "g_591.f0.f0", print_hash_value);
    transparent_crc(g_591.f0.f1, "g_591.f0.f1", print_hash_value);
    transparent_crc(g_591.f0.f2, "g_591.f0.f2", print_hash_value);
    transparent_crc(g_591.f0.f3, "g_591.f0.f3", print_hash_value);
    transparent_crc(g_591.f1, "g_591.f1", print_hash_value);
    transparent_crc(g_591.f2, "g_591.f2", print_hash_value);
    transparent_crc(g_591.f3, "g_591.f3", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_838.f0, "g_838.f0", print_hash_value);
    transparent_crc(g_838.f1, "g_838.f1", print_hash_value);
    transparent_crc(g_838.f2, "g_838.f2", print_hash_value);
    transparent_crc(g_838.f3, "g_838.f3", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_938, "g_938", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1067, "g_1067", print_hash_value);
    transparent_crc(g_1259.f0.f0, "g_1259.f0.f0", print_hash_value);
    transparent_crc(g_1259.f0.f1, "g_1259.f0.f1", print_hash_value);
    transparent_crc(g_1259.f0.f2, "g_1259.f0.f2", print_hash_value);
    transparent_crc(g_1259.f0.f3, "g_1259.f0.f3", print_hash_value);
    transparent_crc(g_1259.f1, "g_1259.f1", print_hash_value);
    transparent_crc(g_1259.f2, "g_1259.f2", print_hash_value);
    transparent_crc(g_1259.f3, "g_1259.f3", print_hash_value);
    transparent_crc(g_1322, "g_1322", print_hash_value);
    transparent_crc(g_1352, "g_1352", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
