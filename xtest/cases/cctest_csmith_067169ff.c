// SPDX-License-Identifier: MIT
// cctest_csmith_067169ff.c --- cctest case csmith_067169ff (csmith seed 108095999)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x63be392c */
/* @exp_ticks 0x4ba1 */

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

// Options:   -s 108095999 -o /tmp/csmith_gen_sjkj7c4y/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint8_t  f1;
   int64_t  f2;
   uint8_t  f3;
   const uint8_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
   int8_t  f1;
   uint32_t  f2;
   int8_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

struct S2 {
   uint32_t  f0;
   int32_t  f1;
   uint16_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const int16_t  f0;
   const struct S0  f1;
   const int16_t  f2;
   struct S2  f3;
   int8_t  f4;
};
#pragma pack(pop)

union U4 {
   int8_t * const  f0;
   uint64_t  f1;
   uint8_t  f2;
   const int8_t * f3;
};


static int32_t g_8 = (-10L);
static uint16_t g_12 = 1UL;
static int8_t g_20 = 0L;
static const int8_t g_39 = 0x32L;
static int8_t g_54 = 6L;
static int8_t *g_53[1] = {&g_54};
static int8_t **g_52[1] = {&g_53[0]};
static struct S0 g_68 = {0x58B1L,0xA0L,1L,0UL,0UL};
static struct S2 g_69 = {3UL,0x3BFA4ACFL,4UL};
static uint64_t g_78 = 0x5F5401BC10B1E149LL;
static int32_t *g_81[7][4] = {{&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8,&g_8}};
static int32_t **g_80 = &g_81[4][3];
static union U4 g_91 = {0};
static int64_t g_99 = 0L;
static struct S3 g_143 = {-2L,{0x49F6L,255UL,0x692E2E775698991DLL,0x5CL,0x6FL},0L,{0x3A919A52L,0xA836B060L,0x5C9CL},0L};
static struct S3 *g_142 = &g_143;
static struct S1 g_146 = {65528UL,-9L,3UL,1L,0x18C2A7CE75F18E88LL};
static int32_t g_241[1][7][5] = {{{1L,0x1B4E1750L,0xCCD2445BL,0xCCD2445BL,0x1B4E1750L},{0xE2F4CB50L,0x163F9BBCL,0xCCD2445BL,0xB56A995AL,0x163F9BBCL},{0xE2F4CB50L,0x1B4E1750L,0xAEDB5F2BL,0xB56A995AL,0x1B4E1750L},{1L,9L,0xDF9373D1L,0xDF9373D1L,9L},{0xB6D31D16L,0x899D85C3L,0xDF9373D1L,0x163F9BBCL,0x899D85C3L},{0xB6D31D16L,9L,0x1B4E1750L,0x163F9BBCL,9L},{0x83F195CBL,9L,0xDF9373D1L,0xDF9373D1L,9L}}};
static const struct S3 *g_267 = &g_143;
static const struct S3 **g_266 = &g_267;
static const struct S3 ***g_265[2] = {&g_266,&g_266};
static int16_t g_286 = (-1L);
static const struct S1 *g_354 = &g_146;
static uint64_t g_507 = 1UL;
static uint16_t g_510 = 0UL;
static uint32_t g_525 = 18446744073709551613UL;
static uint32_t * const g_560 = (void*)0;
static uint32_t * const *g_559[3][5][4] = {{{&g_560,&g_560,(void*)0,&g_560},{&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560},{&g_560,&g_560,&g_560,&g_560}},{{&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560},{&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560}},{{&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560},{&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560}}};
static uint32_t g_644 = 0x12B0027AL;
static uint64_t ****g_691 = (void*)0;
static int32_t g_749 = (-1L);
static int64_t *g_770 = &g_99;
static int16_t g_775 = 0x62A0L;
static union U4 * const g_922 = (void*)0;
static union U4 * const *g_921 = &g_922;
static union U4 *g_929 = (void*)0;
static union U4 **g_928 = &g_929;
static uint16_t g_965 = 0xECE0L;
static uint32_t g_968 = 1UL;
static int16_t g_1041 = 0L;
static struct S0 *g_1080 = (void*)0;
static struct S0 **g_1079 = &g_1080;
static struct S0 ***g_1078 = &g_1079;
static struct S0 g_1096 = {0x4AB3L,248UL,-5L,0xB1L,255UL};
static uint32_t **g_1171 = (void*)0;
static uint32_t g_1236 = 5UL;
static uint64_t g_1282[6] = {0UL,0UL,0xF598B9E58DEA3602LL,0UL,0UL,0xF598B9E58DEA3602LL};
static uint16_t g_1300 = 0x0D85L;
static struct S2 *g_1335[6][2] = {{&g_69,(void*)0},{&g_69,(void*)0},{&g_69,(void*)0},{&g_69,(void*)0},{&g_69,(void*)0},{&g_69,(void*)0}};
static struct S0 ** const *g_1361 = &g_1079;
static struct S0 ** const * const *g_1360 = &g_1361;
static struct S0 ** const * const ** const g_1359[2] = {&g_1360,&g_1360};
static int32_t g_1389 = 0L;
static uint8_t g_1433 = 0xD9L;
static int32_t g_1459 = 0xF76145B8L;
static int16_t g_1546[7] = {1L,1L,1L,1L,1L,1L,1L};
static struct S0 ****g_1678 = &g_1078;
static uint16_t *g_1729 = &g_143.f3.f2;
static uint16_t ** const g_1728 = &g_1729;
static uint16_t * const *g_1829 = &g_1729;
static uint16_t * const **g_1828 = &g_1829;
static uint32_t g_1838 = 0x08CCCDDDL;
static int8_t ***g_1847[7][5] = {{(void*)0,(void*)0,&g_52[0],&g_52[0],&g_52[0]},{&g_52[0],&g_52[0],&g_52[0],&g_52[0],&g_52[0]},{(void*)0,&g_52[0],(void*)0,&g_52[0],&g_52[0]},{&g_52[0],(void*)0,&g_52[0],(void*)0,&g_52[0]},{(void*)0,(void*)0,&g_52[0],&g_52[0],(void*)0},{&g_52[0],(void*)0,&g_52[0],&g_52[0],&g_52[0]},{&g_52[0],&g_52[0],&g_52[0],&g_52[0],&g_52[0]}};
static struct S1 **g_1874 = (void*)0;
static uint16_t **g_1947[7] = {&g_1729,&g_1729,&g_1729,&g_1729,&g_1729,&g_1729,&g_1729};
static uint16_t ***g_1946[2] = {&g_1947[5],&g_1947[5]};
static uint16_t ****g_1945 = &g_1946[0];



static uint64_t  func_1(void);
static struct S2 * func_2(int64_t  p_3);
static const int32_t  func_9(uint64_t  p_10);
static uint16_t  func_25(const int8_t * p_26, union U4  p_27, uint32_t  p_28, int32_t * p_29, struct S0  p_30);
static union U4  func_32(int16_t  p_33, uint8_t  p_34, struct S1  p_35, struct S1  p_36);
static const union U4  func_44(const int8_t  p_45, int8_t ** p_46, uint16_t  p_47);
static int16_t  func_59(union U4  p_60, int32_t * p_61);
static int32_t * func_63(int8_t * p_64, struct S0  p_65, struct S2  p_66);




static uint64_t  func_1(void)
{ 
    uint8_t l_4 = 255UL;
    struct S2 **l_1811 = &g_1335[2][0];
    const struct S1 l_1893 = {0x492BL,0x76L,18446744073709551607UL,-1L,0x9DD5AE909801C16BLL};
    int32_t l_1928 = 3L;
    uint16_t l_1933 = 0x3E8CL;
    int32_t l_1962 = 0x6651808FL;
    int32_t l_1963 = 1L;
    int32_t l_1965 = 0xC0E4766BL;
    int32_t l_1975 = 6L;
    int32_t l_1976 = (-1L);
    int32_t l_1977 = 0xF06AC369L;
    int32_t l_1978 = 0xF206085BL;
    uint64_t l_1994 = 18446744073709551615UL;
    struct S3 *l_2000 = &g_143;
    const struct S3 *l_2002 = &g_143;
    int16_t *l_2006 = &g_1096.f0;
    uint64_t l_2014 = 0x56AE978212C63436LL;
    struct S2 l_2020 = {1UL,1L,9UL};
lbl_1867:
    (*l_1811) = func_2(l_4);
lbl_2015:
    for (g_143.f3.f1 = 0; (g_143.f3.f1 >= 13); g_143.f3.f1 = safe_add_func_uint64_t_u_u(g_143.f3.f1, 8))
    { 
        struct S2 l_1820 = {0xE0D5486BL,7L,0x6AE3L};
        union U4 l_1836[3][2][4] = {{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}}};
        int32_t **l_1842 = &g_81[5][3];
        uint64_t l_1844 = 18446744073709551613UL;
        struct S1 *l_1876 = &g_146;
        struct S1 **l_1875 = &l_1876;
        uint8_t l_1899 = 255UL;
        struct S1 l_1905 = {0xE781L,3L,0x73263BB6L,1L,-4L};
        int32_t l_1959 = (-9L);
        int32_t l_1960 = 0x5C20038BL;
        int32_t l_1961 = 0xE602B377L;
        int32_t l_1964 = 0x1C3D1073L;
        int32_t l_1966 = 0x76CDE9C4L;
        int32_t l_1967 = 0x9474E044L;
        int32_t l_1968 = 0x4A7757DAL;
        int i, j, k;
        for (g_965 = 5; (g_965 <= 57); g_965++)
        { 
            struct S2 l_1822 = {0UL,1L,1UL};
            uint16_t **l_1837 = &g_1729;
            for (g_146.f4 = 0; (g_146.f4 == (-23)); g_146.f4 = safe_sub_func_uint32_t_u_u(g_146.f4, 7))
            { 
                for (g_1041 = 0; (g_1041 != (-3)); g_1041--)
                { 
                    struct S2 *l_1821[1][6];
                    const uint16_t ****l_1823 = (void*)0;
                    const uint16_t ****l_1824 = (void*)0;
                    uint16_t ****l_1825 = (void*)0;
                    uint16_t ***l_1827 = (void*)0;
                    uint16_t ****l_1826[4][4][3];
                    union U4 **l_1830 = &g_929;
                    union U4 ***l_1831[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_1821[i][j] = &l_1820;
                    }
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1826[i][j][k] = &l_1827;
                        }
                    }
                    l_1822 = l_1820;
                    g_1828 = (void*)0;
                    (**g_80) = (&g_929 != (g_928 = (l_1830 = (void*)0)));
                }
            }
            for (g_525 = 0; (g_525 <= 0); g_525 += 1)
            { 
                int32_t l_1832 = (-8L);
                struct S2 *l_1833 = &l_1820;
                int i;
                if ((((*g_142) , ((l_1832 && ((-9L) & (((l_1822.f1 != (((((*l_1833) = l_1820) , (((safe_rshift_func_uint16_t_u_s(((l_4 , (l_1836[0][1][0] , (*g_770))) != (*g_770)), l_1832)) >= 18446744073709551607UL) , l_1820.f2)) , l_1837) == (void*)0)) & l_1822.f0) || l_1820.f2))) < 0x6312L)) , g_1838))
                { 
                    uint8_t l_1839 = 255UL;
                    l_1839 &= l_1820.f2;
                    (**l_1842) = (safe_mod_func_int16_t_s_s(((void*)0 != l_1842), (**l_1842)));
                    return l_4;
                }
                else
                { 
                    uint16_t ***l_1843 = (void*)0;
                    g_146 = ((l_1843 == (void*)0) , (*g_354));
                    return l_1844;
                }
            }
            for (g_68.f1 = 0; (g_68.f1 <= 0); g_68.f1 += 1)
            { 
                const struct S1 l_1848 = {9UL,0x02L,0x68F62C4DL,0x8EL,9L};
                int i, j, k;
                if (g_241[g_68.f1][g_68.f1][(g_68.f1 + 2)])
                { 
                    int8_t ***l_1846 = &g_52[0];
                    int8_t ****l_1845[3][4];
                    struct S1 *l_1849 = &g_146;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1845[i][j] = &l_1846;
                    }
                    g_1847[1][1] = &g_52[g_68.f1];
                    (*l_1849) = l_1848;
                    if (l_4)
                        break;
                    if ((**g_80))
                        break;
                }
                else
                { 
                    const uint64_t l_1860 = 0UL;
                    g_241[g_68.f1][g_68.f1][(g_68.f1 + 2)] |= ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((0xB5BF7C29L || (1L < 4294967295UL)), (((void*)0 != &g_52[0]) < ((safe_div_func_int64_t_s_s(l_1860, ((*g_770) = (safe_unary_minus_func_int64_t_s(((safe_unary_minus_func_int64_t_s((((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(l_1822.f1, g_143.f1.f3)) || g_1546[2]), 0x77L)) == 0x29L) <= g_525))) & g_143.f0)))))) > 0x1DC630DE2FD17BA7LL)))), 10)), 65530UL)), 0xF5L)) | g_1096.f0);
                }
                if (g_8)
                    goto lbl_1867;
            }
            (*g_80) = (*l_1842);
        }
        for (g_1096.f3 = 28; (g_1096.f3 == 59); g_1096.f3++)
        { 
            int8_t *l_1887 = &g_146.f1;
            const int32_t l_1888 = 0x2BF6251CL;
            struct S3 **l_1894 = &g_142;
            const int16_t l_1897 = 0L;
            struct S1 l_1904 = {0UL,0xC0L,8UL,1L,1L};
            int32_t l_1925 = 0L;
            const int64_t l_1927 = (-2L);
            struct S2 l_1950 = {0UL,0x877B01F9L,0UL};
            int64_t **l_1951 = (void*)0;
            int32_t *l_1957 = &g_241[0][4][3];
            int32_t *l_1958[4][4][6] = {{{&g_241[0][4][3],&g_749,(void*)0,&g_749,&g_241[0][4][3],&g_241[0][4][3]},{&g_1389,&g_749,&g_749,&g_1389,&g_1459,(void*)0},{(void*)0,&g_241[0][4][3],(void*)0,&g_1389,&g_1389,(void*)0},{&g_749,&g_749,&g_1389,&g_1459,&g_1389,&g_749}},{{&g_1389,&g_241[0][4][3],&g_1459,&g_1459,&g_241[0][4][3],&g_1389},{&g_749,&g_1389,&g_1459,&g_1389,&g_749,&g_749},{(void*)0,&g_1389,&g_1389,(void*)0,&g_241[0][4][3],(void*)0},{(void*)0,&g_241[0][4][3],(void*)0,&g_1389,&g_1389,(void*)0}},{{&g_749,&g_749,&g_1389,&g_1459,&g_1389,&g_749},{&g_1389,&g_241[0][4][3],&g_1459,&g_1459,&g_241[0][4][3],&g_1389},{&g_749,&g_1389,&g_1459,&g_1389,&g_749,&g_749},{(void*)0,&g_1389,&g_1389,(void*)0,&g_241[0][4][3],(void*)0}},{{(void*)0,&g_241[0][4][3],(void*)0,&g_1389,&g_1389,(void*)0},{&g_749,&g_749,&g_1389,&g_1459,&g_1389,&g_749},{&g_1389,&g_241[0][4][3],&g_1459,&g_1459,&g_241[0][4][3],&g_1389},{&g_749,&g_1389,&g_1459,&g_1389,&g_749,&g_749}}};
            uint32_t l_1969 = 0UL;
            int i, j, k;
            if (((**l_1842) = ((((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((((l_1875 = g_1874) != (void*)0) != (safe_sub_func_uint16_t_u_u((g_68.f2 & 0xD45CL), ((**l_1842) >= (((safe_mod_func_uint32_t_u_u(((((*l_1887) = (safe_mod_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(g_1096.f0, l_4)) == g_68.f2), l_4)) >= 0L), 1UL))) & g_775) < l_1888), 0xB9AA6B35L)) >= g_143.f1.f4) <= 0x53L))))), (*g_770))), l_1888)) || 0x09715B7DL) , l_1888) && l_1888)))
            { 
                uint64_t *l_1895 = &g_1282[2];
                struct S3 **l_1896[6][1][4] = {{{&g_142,&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142,&g_142}}};
                uint8_t *l_1898[2][6][5] = {{{&g_1096.f3,(void*)0,&g_1096.f3,(void*)0,(void*)0},{&g_1433,&g_68.f1,&l_4,&g_1096.f1,&g_1096.f1},{&g_1433,(void*)0,&g_1433,&g_1096.f3,&g_1096.f3},{&g_1096.f3,&g_1433,&g_1096.f3,(void*)0,(void*)0},{&g_1096.f1,&g_68.f3,&g_1096.f3,(void*)0,&g_68.f1},{&g_1096.f3,&l_4,&g_1096.f3,(void*)0,&g_1433}},{{&g_1096.f3,&g_1096.f3,&g_1433,&g_68.f1,&l_4},{(void*)0,(void*)0,&l_4,&g_1096.f3,&l_4},{&g_1096.f3,&g_1096.f3,&g_1096.f3,(void*)0,&g_1433},{&g_68.f1,(void*)0,&g_68.f1,&g_1096.f3,&g_68.f1},{&g_68.f1,&g_1433,&g_68.f1,&g_1096.f3,(void*)0},{&g_68.f1,(void*)0,&g_68.f3,&g_68.f1,&g_1096.f3}}};
                int32_t l_1900 = 0xCB68985BL;
                struct S1 l_1901 = {0xD54BL,1L,1UL,0xA6L,8L};
                struct S2 l_1902 = {0xFF357798L,0xD4FF94FDL,65531UL};
                struct S2 l_1916 = {4294967295UL,-5L,0xC676L};
                struct S0 **** const l_1922[6] = {&g_1078,&g_1078,&g_1078,&g_1078,&g_1078,&g_1078};
                int i, j, k;
                if ((safe_sub_func_int64_t_s_s(((func_32((((*l_1887) = (**l_1842)) <= (safe_div_func_uint8_t_u_u((g_68.f1 = (l_1893 , (((l_1894 != (((*l_1895) = (**l_1842)) , l_1896[3][0][0])) , (l_1893.f0 < ((l_1897 | 0UL) <= l_1893.f1))) , g_68.f1))), l_1899))), l_1900, l_1901, l_1893) , g_69.f0) >= l_1888), 0xCBD99A0A08098031LL)))
                { 
                    struct S2 l_1903 = {0x3F132C5AL,0x73F20374L,65535UL};
                    if (l_1897)
                        break;
                    l_1903 = l_1902;
                    return g_69.f0;
                }
                else
                { 
                    int16_t *l_1917 = (void*)0;
                    int32_t l_1918 = 5L;
                    int32_t l_1926 = 0xED3B4235L;
                    uint16_t *l_1929 = (void*)0;
                    uint16_t *l_1930 = (void*)0;
                    uint16_t *l_1931 = (void*)0;
                    uint16_t *l_1932 = &g_146.f0;
                    l_1905 = l_1904;
                    (**g_80) = ((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((((*l_1932) |= (((l_1918 = (l_1916 , g_749)) || ((((((safe_add_func_uint32_t_u_u((((*g_267) , (0xAB061D97L > (!(((l_1922[1] == (void*)0) > (safe_add_func_int64_t_s_s(((l_1925 &= (l_1904.f4 || l_1904.f4)) & l_1901.f3), (*g_770)))) < l_1902.f2)))) == l_1926), (-9L))) || l_1927) , (-1L)) , g_1096.f1) != l_1901.f0) <= 0x91L)) | l_1928)) <= l_1933), g_1459)), g_146.f3)) && 1UL) , 18446744073709551615UL) , 0UL), (**l_1842))), l_1893.f0)) , 0x732EC2C2L);
                    return l_1918;
                }
            }
            else
            { 
                uint32_t l_1936 = 4UL;
                int16_t *l_1937[1];
                uint16_t **l_1943 = &g_1729;
                uint16_t ***l_1942 = &l_1943;
                uint16_t ****l_1941[1];
                uint16_t *****l_1944 = &l_1941[0];
                int64_t **l_1952 = &g_770;
                uint8_t *l_1953 = &l_4;
                int i;
                for (i = 0; i < 1; i++)
                    l_1937[i] = &g_1546[6];
                for (i = 0; i < 1; i++)
                    l_1941[i] = &l_1942;
                (**l_1842) = ((safe_sub_func_int16_t_s_s(0x1054L, (g_286 ^= l_1936))) >= ((*l_1953) |= (safe_mod_func_int64_t_s_s((~(((g_1945 = ((*l_1944) = l_1941[0])) != (l_1820 , &g_1828)) > (safe_div_func_uint8_t_u_u(((l_1950 , l_1951) != l_1952), 1L)))), (*g_770)))));
                for (l_1904.f4 = 4; (l_1904.f4 <= 1); l_1904.f4 = safe_sub_func_uint8_t_u_u(l_1904.f4, 2))
                { 
                    int32_t *l_1956 = &g_749;
                    (*g_80) = (*l_1842);
                    (*l_1956) = ((**l_1842) = ((void*)0 == &g_81[4][3]));
                }
            }
            if (l_1893.f4)
                continue;
            l_1969++;
            if ((**g_80))
                break;
            (**g_80) |= 0x9CE0AD08L;
        }
        if ((**g_80))
            break;
    }
    for (g_78 = 0; (g_78 <= 1); g_78 += 1)
    { 
        int32_t l_1973 = 0L;
        int32_t l_1974 = 0x83F5918DL;
        int32_t l_1979 = 0x20AEDE11L;
        int32_t l_1980 = 0xD9957389L;
        uint32_t l_1981[4] = {0x2626586AL,0x2626586AL,0x2626586AL,0x2626586AL};
        int64_t *l_1997 = (void*)0;
        struct S3 **l_2001 = &l_2000;
        union U4 l_2005 = {0};
        int8_t **l_2013 = (void*)0;
        int i;
        for (g_1041 = 1; (g_1041 >= 0); g_1041 -= 1)
        { 
            int32_t *l_1972[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1972[i] = (void*)0;
            ++l_1981[1];
        }
        if ((**g_80))
        { 
            int32_t *l_1984 = &l_1963;
            int32_t *l_1985 = &l_1980;
            int32_t *l_1986 = &g_241[0][2][3];
            int32_t *l_1987 = &l_1975;
            int32_t *l_1988 = &l_1976;
            int32_t *l_1989 = &l_1962;
            int32_t *l_1990[1][7][5] = {{{&g_241[0][4][3],&l_1965,&l_1965,&g_241[0][4][3],&l_1965},{&g_241[0][4][3],&g_241[0][4][3],&l_1965,&g_241[0][4][3],&g_241[0][4][3]},{&l_1965,&l_1965,&l_1965,&l_1965,&l_1965},{&l_1965,&l_1965,&l_1965,&l_1965,&l_1965},{&l_1965,&l_1965,&g_241[0][4][3],&l_1965,&l_1965},{&l_1965,&l_1965,&l_1965,&l_1965,&l_1965},{&l_1965,&l_1965,&l_1965,&l_1965,&l_1965}}};
            uint16_t l_1991 = 65533UL;
            int i, j, k;
            l_1991--;
        }
        else
        { 
            return l_1994;
        }
        (**g_80) = (safe_mul_func_uint8_t_u_u(((void*)0 != l_1997), l_1974));
        if ((safe_sub_func_uint32_t_u_u(((((*l_2001) = l_2000) != ((*g_266) = l_2002)) <= (safe_sub_func_uint8_t_u_u(2UL, ((((l_2005 , l_2006) != &g_775) & (func_44(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_1981[1], 1L)), l_1928)) <= l_4), l_1979)) >= 0xA6DFL), l_2013, l_1978) , l_2014)) == (**g_80))))), 0x926F4312L)))
        { 
            return g_69.f0;
        }
        else
        { 
            struct S0 ** const *l_2016 = &g_1079;
            int32_t l_2022[3];
            struct S3 ***l_2023[2];
            int i;
            for (i = 0; i < 3; i++)
                l_2022[i] = 0x34BA0CDFL;
            for (i = 0; i < 2; i++)
                l_2023[i] = &l_2001;
            if (g_69.f0)
                goto lbl_2015;
            for (g_68.f0 = 0; (g_68.f0 <= 1); g_68.f0 += 1)
            { 
                struct S0 ** const **l_2017 = &g_1361;
                struct S2 l_2018 = {0xD98B4667L,9L,0x5320L};
                struct S2 *l_2019[6] = {&l_2018,&l_2018,(void*)0,&l_2018,&l_2018,(void*)0};
                uint32_t l_2021 = 0x6DF76FEDL;
                int i;
                (*l_2017) = l_2016;
                l_2020 = l_2018;
                if (l_2021)
                    continue;
                return g_644;
            }
            (**g_80) = l_2022[1];
            l_1965 ^= (**g_80);
            (**g_80) &= (g_265[g_78] != l_2023[0]);
        }
    }
    return l_1893.f0;
}



static struct S2 * func_2(int64_t  p_3)
{ 
    uint32_t *l_1460[3][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    uint64_t *l_1463[1];
    uint64_t **l_1462 = &l_1463[0];
    uint64_t ***l_1461 = &l_1462;
    int32_t l_1475 = 0x24CA2F6FL;
    int32_t l_1479 = 0x2D4C31DAL;
    int32_t l_1527 = 1L;
    int32_t l_1528 = 0x3180C85BL;
    int32_t l_1529 = 0x4349AD08L;
    int32_t l_1531 = 0x1AD91985L;
    int32_t l_1533 = 0x36083AECL;
    int32_t l_1536 = 0x0409C063L;
    int32_t l_1540 = 2L;
    int32_t l_1542 = 0xFE9F36ADL;
    int32_t l_1544[6][7] = {{3L,0x1F67724BL,0x0052E60AL,(-1L),1L,0x1742EA4FL,0xE54B228FL},{0x1F67724BL,0L,1L,(-1L),0xCBE77104L,0xCBE77104L,(-1L)},{3L,(-1L),3L,0xCBE77104L,1L,0L,(-1L)},{(-4L),0x38E23E31L,0x1742EA4FL,0L,(-1L),3L,0xE54B228FL},{0x5B1FF19EL,3L,0L,0x38E23E31L,0x38E23E31L,0L,3L},{0xE54B228FL,0x6D20BF20L,0x155B9E76L,0x5B1FF19EL,0x38E23E31L,0xCBE77104L,(-7L)}};
    int8_t l_1552 = 1L;
    uint32_t l_1615[2][4][7] = {{{7UL,18446744073709551611UL,7UL,18446744073709551611UL,7UL,18446744073709551611UL,7UL},{0x616FA08FL,0x616FA08FL,0x54FF5C86L,0x54FF5C86L,0x616FA08FL,0x616FA08FL,0x54FF5C86L},{0xEB69E0F0L,18446744073709551611UL,0xEB69E0F0L,18446744073709551611UL,0xEB69E0F0L,18446744073709551611UL,0xEB69E0F0L},{0x616FA08FL,0x54FF5C86L,0x54FF5C86L,0x616FA08FL,0x616FA08FL,0x54FF5C86L,0x54FF5C86L}},{{7UL,18446744073709551611UL,7UL,18446744073709551611UL,7UL,18446744073709551611UL,7UL},{0x616FA08FL,0x616FA08FL,0x54FF5C86L,0x54FF5C86L,0x616FA08FL,0x616FA08FL,0x54FF5C86L},{0xEB69E0F0L,18446744073709551611UL,0xEB69E0F0L,18446744073709551611UL,0xEB69E0F0L,18446744073709551611UL,0xEB69E0F0L},{0x616FA08FL,0x54FF5C86L,0x54FF5C86L,0x616FA08FL,0x616FA08FL,0x54FF5C86L,0x54FF5C86L}}};
    struct S2 l_1622 = {2UL,5L,0x75BFL};
    struct S1 *l_1651 = (void*)0;
    int32_t **l_1772 = &g_81[4][1];
    const union U4 l_1794 = {0};
    uint32_t l_1806 = 4294967292UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1463[i] = &g_1282[2];
    for (p_3 = 0; (p_3 >= 24); p_3 = safe_add_func_int8_t_s_s(p_3, 1))
    { 
        int32_t *l_7 = &g_8;
        int32_t l_1480[4];
        uint8_t l_1481 = 247UL;
        struct S3 **l_1493 = &g_142;
        uint16_t l_1501 = 1UL;
        struct S2 *l_1507[1];
        int16_t l_1523 = 0x197AL;
        int8_t l_1532 = 0xA6L;
        uint64_t l_1554 = 0x12811468F722C425LL;
        union U4 l_1691 = {0};
        int16_t *l_1692 = &g_1096.f0;
        union U4 *** const l_1735[5][3] = {{&g_928,(void*)0,&g_928},{&g_928,(void*)0,&g_928},{&g_928,(void*)0,&g_928},{&g_928,(void*)0,&g_928},{&g_928,(void*)0,&g_928}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_1480[i] = 0L;
        for (i = 0; i < 1; i++)
            l_1507[i] = &g_69;
        (*l_7) &= (0UL && p_3);
    }
    return &g_69;
}



static const int32_t  func_9(uint64_t  p_10)
{ 
    int32_t *l_11[4] = {&g_8,&g_8,&g_8,&g_8};
    int8_t * const l_19 = &g_20;
    int32_t *l_753[7][2] = {{(void*)0,&g_749},{&g_749,(void*)0},{&g_749,&g_241[0][4][3]},{&g_749,(void*)0},{&g_241[0][6][4],&g_241[0][6][4]},{&g_241[0][4][3],(void*)0},{&g_241[0][4][3],(void*)0}};
    struct S0 l_1241 = {0x9633L,0xE8L,-1L,0xB9L,0x05L};
    struct S2 l_1242 = {0x0766CF65L,1L,0x6259L};
    uint16_t l_1342 = 0x4151L;
    struct S3 * const ***l_1355 = (void*)0;
    struct S3 * const ****l_1354 = &l_1355;
    uint32_t * const *l_1371 = (void*)0;
    union U4 l_1372 = {0};
    int8_t *l_1427 = &g_146.f3;
    int i, j;
    ++g_12;
    for (g_12 = (-10); (g_12 == 47); g_12++)
    { 
        return g_12;
    }
    if ((safe_mul_func_int16_t_s_s(1L, (l_19 == l_19))))
    { 
        int8_t *l_40 = (void*)0;
        int32_t l_50 = (-1L);
        struct S1 l_708 = {65535UL,0x8AL,0xA0388E9DL,1L,0xEB3E1D90C074527DLL};
        int8_t ***l_1260[4][4][5] = {{{&g_52[0],&g_52[0],&g_52[0],&g_52[0],&g_52[0]},{(void*)0,&g_52[0],(void*)0,(void*)0,&g_52[0]},{(void*)0,&g_52[0],&g_52[0],&g_52[0],&g_52[0]},{&g_52[0],&g_52[0],&g_52[0],&g_52[0],(void*)0}},{{&g_52[0],(void*)0,(void*)0,&g_52[0],&g_52[0]},{&g_52[0],(void*)0,&g_52[0],&g_52[0],(void*)0},{&g_52[0],(void*)0,&g_52[0],&g_52[0],&g_52[0]},{&g_52[0],&g_52[0],&g_52[0],&g_52[0],&g_52[0]}},{{&g_52[0],&g_52[0],&g_52[0],&g_52[0],&g_52[0]},{&g_52[0],&g_52[0],&g_52[0],(void*)0,&g_52[0]},{(void*)0,&g_52[0],&g_52[0],(void*)0,&g_52[0]},{&g_52[0],&g_52[0],&g_52[0],&g_52[0],&g_52[0]}},{{(void*)0,&g_52[0],&g_52[0],&g_52[0],(void*)0},{&g_52[0],&g_52[0],(void*)0,&g_52[0],(void*)0},{&g_52[0],&g_52[0],&g_52[0],(void*)0,&g_52[0]},{&g_52[0],&g_52[0],&g_52[0],(void*)0,&g_52[0]}}};
        int64_t * const l_1261 = &g_146.f4;
        int32_t l_1271 = 0x42131B5FL;
        int32_t l_1272 = 0xE4BB4365L;
        int32_t l_1273 = 0L;
        int32_t l_1274 = 1L;
        int32_t l_1275[6][7] = {{0x5E54FF04L,(-7L),0x6949E0D3L,(-7L),0x5E54FF04L,(-2L),0x9840E24DL},{9L,1L,0L,0x91A52685L,0x5E54FF04L,0x9840E24DL,0x5E54FF04L},{0x8D6D7764L,(-3L),(-3L),0x8D6D7764L,(-7L),0x91A52685L,9L},{9L,0x91A52685L,(-7L),0x8D6D7764L,(-3L),(-3L),0x8D6D7764L},{0x5E54FF04L,0x9840E24DL,0x5E54FF04L,0x91A52685L,0L,1L,9L},{0x9840E24DL,(-2L),0x5E54FF04L,(-7L),0x6949E0D3L,(-7L),0x5E54FF04L}};
        int32_t l_1281[4][1];
        int32_t l_1298[1];
        int64_t l_1299 = (-1L);
        int32_t l_1301 = (-1L);
        struct S1 l_1334 = {0x0F34L,1L,0x00817B32L,0L,0xB3211351255F3769LL};
        int64_t l_1336[4];
        int8_t l_1352 = 1L;
        struct S3 * const ****l_1356[1];
        struct S0 ** const * const **l_1362 = &g_1360;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_1281[i][j] = 0L;
        }
        for (i = 0; i < 1; i++)
            l_1298[i] = 1L;
        for (i = 0; i < 4; i++)
            l_1336[i] = (-6L);
        for (i = 0; i < 1; i++)
            l_1356[i] = &l_1355;
        for (g_12 = 1; (g_12 < 25); g_12 = safe_add_func_uint32_t_u_u(g_12, 6))
        { 
            const int8_t *l_31 = (void*)0;
            const int8_t *l_38 = &g_39;
            const int8_t **l_37 = &l_38;
            int32_t l_43 = 0xFF7CD2BAL;
            int8_t *l_51 = &g_20;
            struct S2 *l_707 = &g_143.f3;
            struct S2 **l_706 = &l_707;
            struct S1 l_1253 = {0x5D57L,9L,3UL,0xC8L,0xF00BC058A72BE4EDLL};
            const int64_t *l_1262[4];
            int32_t l_1267 = 0xB0F975EAL;
            int32_t l_1269 = 1L;
            int32_t l_1276 = 1L;
            int32_t l_1278[2][5] = {{0x3CB0B927L,0x96223FE0L,0x96223FE0L,0x3CB0B927L,0x96223FE0L},{0x3CB0B927L,0x3CB0B927L,(-1L),0x3CB0B927L,0x3CB0B927L}};
            uint32_t l_1333 = 0UL;
            int i, j;
            for (i = 0; i < 4; i++)
                l_1262[i] = &g_1096.f2;
        }
        for (l_708.f0 = 0; (l_708.f0 <= 3); l_708.f0 += 1)
        { 
            int32_t l_1337 = 0x5F01DCDFL;
            int32_t l_1338 = 1L;
            int32_t l_1339 = 0xE36B1A1DL;
            int32_t l_1340 = 0xE21694FCL;
            int32_t l_1341[2][5][1] = {{{(-1L)},{0L},{0L},{(-1L)},{0L}},{{0L},{(-1L)},{0L},{0L},{(-1L)}}};
            int32_t l_1345 = 0x4A692794L;
            struct S1 l_1347 = {1UL,0xE6L,7UL,0xD5L,0x113BBF7146063B77LL};
            int i, j, k;
            l_1334 = (*g_354);
            g_1335[2][0] = &g_69;
            l_1342--;
        }
        l_1356[0] = l_1354;
        for (g_1096.f1 = 0; (g_1096.f1 <= 20); g_1096.f1++)
        { 
            l_1362 = g_1359[1];
            if ((**g_80))
                break;
        }
        for (g_69.f0 = 0; (g_69.f0 <= 5); g_69.f0 += 1)
        { 
            struct S0 *l_1363 = &g_1096;
            int32_t l_1385 = 0x3C35779BL;
            int32_t l_1386 = 0x282338FFL;
            int32_t l_1388 = 2L;
            int32_t l_1392 = 0x551AB82AL;
            int32_t l_1393 = 0x8B29D93EL;
            int32_t l_1394[1];
            union U4 *l_1414 = (void*)0;
            uint16_t l_1424 = 0xE794L;
            int i;
            for (i = 0; i < 1; i++)
                l_1394[i] = 0x3CFC07EBL;
            for (g_507 = 0; (g_507 <= 5); g_507 += 1)
            { 
                int32_t l_1379 = 5L;
                int32_t l_1380[7][3][4] = {{{0L,4L,(-10L),0xC8A67BA6L},{1L,0x03E7F917L,1L,0x9719EB9AL},{1L,0L,0x6EEE1499L,1L}},{{(-1L),0x59C2C48BL,(-1L),(-1L)},{1L,1L,(-1L),0L},{0L,0x6EEE1499L,1L,1L}},{{1L,(-1L),1L,0x9719EB9AL},{0L,1L,(-1L),1L},{1L,0x03E7F917L,(-1L),1L}},{{(-1L),1L,0x6EEE1499L,1L},{1L,0x6EEE1499L,1L,4L},{(-1L),9L,2L,2L}},{{4L,4L,0xBAF4DA33L,1L},{(-10L),1L,0x31945C12L,(-1L)},{0L,1L,4L,0x31945C12L}},{{4L,1L,1L,(-1L)},{1L,1L,1L,1L},{1L,4L,1L,2L}},{{1L,9L,1L,4L},{0L,1L,0xBAF4DA33L,(-10L)},{(-1L),(-1L),0x59C2C48BL,(-1L)}}};
                int32_t l_1395 = 0x80EA463BL;
                int i, j, k;
                (****l_1362) = l_1363;
                (**g_80) ^= (safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(((((safe_sub_func_uint64_t_u_u(l_1275[g_507][g_507], (safe_unary_minus_func_int64_t_s((l_1371 == &g_560))))) != (l_1372 , (safe_unary_minus_func_int8_t_s(0xD8L)))) <= ((*l_19) = ((safe_lshift_func_int16_t_s_s(0x2A50L, 0)) , (l_1281[2][0] , p_10)))) <= 9UL), p_10)), p_10));
                for (l_1271 = 3; (l_1271 >= 0); l_1271 -= 1)
                { 
                    int8_t l_1376 = (-1L);
                    int32_t l_1377 = (-6L);
                    int32_t l_1378 = 0x63A0CA24L;
                    int16_t l_1381 = 1L;
                    int32_t l_1382 = (-1L);
                    int32_t l_1383 = 1L;
                    int32_t l_1384 = 0x1739A081L;
                    int32_t l_1387 = (-8L);
                    int32_t l_1390 = 0xD1E40AF8L;
                    int32_t l_1391 = 0xF3C30353L;
                    int32_t l_1396 = 4L;
                    uint16_t l_1397 = 6UL;
                    int i, j, k;
                    l_1397++;
                    (**g_80) &= (0x81L & (((*l_19) = l_1274) >= l_1395));
                }
            }
            for (l_1334.f2 = 0; (l_1334.f2 <= 3); l_1334.f2 += 1)
            { 
                int32_t *l_1400 = &g_241[0][4][3];
                int32_t **l_1401 = &l_11[0];
                int16_t *l_1404[4][4] = {{(void*)0,(void*)0,&g_775,(void*)0},{(void*)0,&l_1241.f0,&l_1241.f0,(void*)0},{&l_1241.f0,(void*)0,&l_1241.f0,&l_1241.f0},{(void*)0,(void*)0,&g_775,(void*)0}};
                struct S0 *l_1409[6][6][2] = {{{&g_1096,&g_1096},{&l_1241,&g_1096},{(void*)0,&l_1241},{&g_68,&g_1096},{&g_68,&l_1241},{(void*)0,&g_1096}},{{&l_1241,&g_1096},{&g_1096,&g_68},{&g_1096,&g_68},{&g_68,&g_68},{&l_1241,&g_1096},{&l_1241,&g_68}},{{(void*)0,&g_68},{&g_68,(void*)0},{&g_68,&g_68},{&g_68,&g_68},{&g_68,(void*)0},{&g_68,&g_68}},{{(void*)0,&g_68},{&l_1241,&g_1096},{&l_1241,&g_68},{&g_68,&g_68},{&g_1096,&g_68},{&g_1096,&g_1096}},{{&l_1241,&g_1096},{(void*)0,&l_1241},{&g_68,&g_1096},{&g_68,&l_1241},{(void*)0,&g_1096},{&l_1241,&g_1096}},{{&g_1096,&g_68},{&g_1096,&g_68},{&g_68,&g_68},{&l_1241,&g_1096},{&l_1241,&g_68},{(void*)0,&g_68}}};
                uint8_t *l_1410[7][5][1] = {{{&l_1372.f2},{&g_68.f3},{&g_1096.f3},{&g_1096.f3},{&g_1096.f3}},{{(void*)0},{(void*)0},{(void*)0},{&g_1096.f3},{&g_1096.f3}},{{&g_1096.f3},{&g_68.f3},{&l_1372.f2},{&l_1241.f3},{&l_1372.f2}},{{&g_68.f3},{&g_1096.f3},{&g_1096.f3},{&g_1096.f3},{(void*)0}},{{(void*)0},{(void*)0},{&g_1096.f3},{&g_1096.f3},{&g_1096.f3}},{{&g_68.f3},{&l_1372.f2},{&l_1241.f3},{&l_1372.f2},{&g_68.f3}},{{&g_1096.f3},{&g_1096.f3},{&g_1096.f3},{(void*)0},{(void*)0}}};
                uint64_t l_1411[7] = {0xA5039B2FEB7D32A5LL,0xA5039B2FEB7D32A5LL,0x59347BE57B926122LL,0xA5039B2FEB7D32A5LL,0xA5039B2FEB7D32A5LL,0x59347BE57B926122LL,0xA5039B2FEB7D32A5LL};
                int32_t l_1415 = 0x6467E05AL;
                int32_t l_1416 = 0x9EEB0437L;
                int32_t l_1417 = (-2L);
                int32_t l_1418 = 0x574D5B9DL;
                int32_t l_1419[4][2][5] = {{{0xF965F9ADL,0x60B11772L,0x7E378500L,0x432C8083L,(-8L)},{0x73CFD3BCL,(-1L),0xF965F9ADL,0xF965F9ADL,(-1L)}},{{0x8A2DFEC5L,(-10L),0xC712462BL,0xF4D7E3A1L,(-1L)},{0x60B11772L,0L,(-8L),0x6C36EBB0L,(-8L)}},{{0xF4D7E3A1L,0x73CFD3BCL,(-1L),0xF965F9ADL,0xF965F9ADL},{0x65BE16D5L,0x6C36EBB0L,0x65BE16D5L,(-1L),0xC712462BL}},{{(-1L),0x6C36EBB0L,(-10L),0xF4D7E3A1L,(-8L)},{0L,0x73CFD3BCL,0xF965F9ADL,0x432C8083L,(-1L)}}};
                int i, j, k;
                (*l_1401) = ((*g_80) = l_1400);
            }
        }
    }
    else
    { 
        int64_t l_1444 = 0xFB2583E5ADC332E6LL;
        int32_t l_1445[4] = {0x85E1DC8FL,0x85E1DC8FL,0x85E1DC8FL,0x85E1DC8FL};
        int i;
        l_1445[0] = ((**g_80) = ((safe_div_func_uint64_t_u_u(((0xE0L & (((p_10 > 0L) <= (safe_div_func_int64_t_s_s(p_10, 4UL))) == p_10)) , (((safe_mul_func_int8_t_s_s(((*l_19) = ((safe_mul_func_int16_t_s_s(p_10, p_10)) <= 0xD2L)), p_10)) , p_10) <= 0x701B3224E6BB84DBLL)), l_1444)) , (-1L)));
    }
    return p_10;
}



static uint16_t  func_25(const int8_t * p_26, union U4  p_27, uint32_t  p_28, int32_t * p_29, struct S0  p_30)
{ 
    struct S2 l_754[3] = {{4294967295UL,0x877DB9FEL,1UL},{4294967295UL,0x877DB9FEL,1UL},{4294967295UL,0x877DB9FEL,1UL}};
    int16_t *l_759 = (void*)0;
    int16_t *l_760[5] = {&g_68.f0,&g_68.f0,&g_68.f0,&g_68.f0,&g_68.f0};
    int32_t l_761 = 1L;
    uint32_t *l_762 = &g_143.f3.f0;
    struct S3 *l_765[1];
    uint8_t l_771 = 0xF1L;
    struct S1 l_773 = {0x1662L,-1L,5UL,0x33L,-7L};
    int64_t *l_774 = &g_68.f2;
    int32_t l_787 = (-8L);
    int32_t l_788 = 8L;
    int32_t l_789[3];
    int16_t l_794 = 0xBDF4L;
    int32_t l_800 = 7L;
    uint64_t *l_814 = &g_507;
    uint64_t **l_813 = &l_814;
    uint64_t ** const *l_812 = &l_813;
    uint64_t ** const **l_811 = &l_812;
    uint64_t ** const ***l_810[6][4][2] = {{{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811}},{{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811}},{{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811}},{{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811}},{{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811}},{{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811},{&l_811,&l_811}}};
    uint64_t *l_881 = (void*)0;
    uint64_t ** const l_880 = &l_881;
    uint64_t ** const *l_879 = &l_880;
    const uint32_t *l_889 = &g_69.f0;
    const uint32_t **l_888 = &l_889;
    const uint32_t ** const *l_887 = &l_888;
    union U4 **l_930 = &g_929;
    uint64_t l_948 = 0xD45486AED00FCFD2LL;
    int8_t l_959 = 0x60L;
    int32_t l_1060 = (-1L);
    struct S2 *l_1069 = &l_754[1];
    struct S2 **l_1068 = &l_1069;
    struct S2 **l_1070 = (void*)0;
    const uint8_t l_1087 = 0xE6L;
    struct S0 * const l_1094[7][6] = {{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68}};
    struct S3 l_1104 = {-1L,{-1L,0xC0L,0x732902FB4554C4C6LL,254UL,0x65L},-9L,{1UL,0L,5UL},5L};
    int8_t l_1110 = 0xE3L;
    struct S1 *l_1116 = &l_773;
    struct S1 **l_1115[6] = {&l_1116,&l_1116,&l_1116,&l_1116,&l_1116,&l_1116};
    struct S1 *l_1117 = (void*)0;
    uint8_t l_1118[6][5] = {{1UL,0UL,1UL,1UL,0UL},{0x11L,250UL,1UL,250UL,1UL},{0UL,0UL,0UL,0UL,0UL},{1UL,250UL,1UL,250UL,0x11L},{0UL,1UL,1UL,0UL,1UL},{0x11L,250UL,0UL,250UL,0x11L}};
    int64_t l_1128[2][6] = {{(-8L),(-9L),(-8L),(-8L),(-9L),(-8L)},{(-8L),(-9L),(-8L),(-8L),(-9L),(-8L)}};
    uint32_t l_1165[4][7] = {{0UL,0xAC7BDAF0L,0UL,0xB6C34E5AL,0x4EEB05F4L,18446744073709551614UL,0x3E124E97L},{0xD7D15523L,0x818446B0L,18446744073709551614UL,0xB6C34E5AL,18446744073709551614UL,0x818446B0L,0xD7D15523L},{0x818446B0L,0xE3157886L,0x3E124E97L,0x4EEB05F4L,18446744073709551611UL,18446744073709551614UL,0xB6C34E5AL},{18446744073709551611UL,0xB6C34E5AL,0xB6C34E5AL,18446744073709551611UL,0xE3157886L,18446744073709551614UL,0xD7D15523L}};
    const uint32_t * const *l_1170 = &l_889;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_765[i] = &g_143;
    for (i = 0; i < 3; i++)
        l_789[i] = 2L;
    if ((l_754[1] , (((*l_762) = (safe_sub_func_uint16_t_u_u((l_754[1].f2 >= (&p_28 != (void*)0)), (l_761 = (safe_lshift_func_uint8_t_u_s(0UL, (((-1L) <= 0xB6L) , l_754[1].f1))))))) & l_754[1].f0)))
    { 
        uint32_t l_767 = 4294967288UL;
        int64_t *l_769 = &g_99;
        int64_t **l_768[5][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S1 l_772 = {0xAA7BL,1L,2UL,-9L,0x468F68A37F1FE625LL};
        int32_t l_780[1];
        uint32_t l_795 = 0UL;
        struct S2 *l_799 = &g_69;
        int64_t l_805 = 0x09B03D5A00C69379LL;
        int32_t l_839 = 0xC47737EFL;
        int16_t l_844 = (-3L);
        int32_t l_860 = 0x1607F3FEL;
        uint64_t ** const *l_878 = &l_813;
        uint32_t **l_886 = &l_762;
        uint32_t ***l_885 = &l_886;
        union U4 * const l_919 = (void*)0;
        union U4 * const *l_918 = &l_919;
        uint32_t l_924 = 0UL;
        int64_t l_963 = 0x058C82F3CBE8F8FFLL;
        int32_t *l_978 = (void*)0;
        uint8_t l_994 = 0UL;
        const struct S3 l_1020[6] = {{7L,{0x2B7FL,0UL,3L,0x5CL,255UL},0x1C35L,{0x58E72A20L,0x24F9E31EL,0UL},-1L},{7L,{0x2B7FL,0UL,3L,0x5CL,255UL},0x1C35L,{0x58E72A20L,0x24F9E31EL,0UL},-1L},{7L,{0x2B7FL,0UL,3L,0x5CL,255UL},0x1C35L,{0x58E72A20L,0x24F9E31EL,0UL},-1L},{7L,{0x2B7FL,0UL,3L,0x5CL,255UL},0x1C35L,{0x58E72A20L,0x24F9E31EL,0UL},-1L},{7L,{0x2B7FL,0UL,3L,0x5CL,255UL},0x1C35L,{0x58E72A20L,0x24F9E31EL,0UL},-1L},{7L,{0x2B7FL,0UL,3L,0x5CL,255UL},0x1C35L,{0x58E72A20L,0x24F9E31EL,0UL},-1L}};
        int32_t l_1050 = 1L;
        struct S3 * const *l_1076 = &l_765[0];
        struct S3 * const **l_1075 = &l_1076;
        int i, j;
        for (i = 0; i < 1; i++)
            l_780[i] = 2L;
        for (g_644 = 0; (g_644 != 36); ++g_644)
        { 
            (*g_266) = l_765[0];
        }
    }
    else
    { 
        struct S0 *l_1095 = &g_1096;
        int8_t *l_1105 = &l_1104.f4;
        l_1095 = l_1094[2][5];
        (**g_80) = (safe_div_func_int8_t_s_s(((l_761 &= (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((g_69.f2 && (g_507 & ((*l_1105) = ((~g_12) & (l_1104 , 1UL))))) < (0x4139L & 0x7DF7L)) != 0x639922C7L), g_1096.f0)), p_30.f4))) , l_773.f3), 0x68L));
    }
    if (((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((1UL >= (l_1110 <= 0x8A10L)), (safe_mul_func_uint8_t_u_u((l_773.f1 == (((safe_sub_func_uint8_t_u_u(l_1104.f0, (&l_773 == (l_1117 = &g_146)))) , l_1104.f1.f3) , p_30.f1)), p_30.f3)))), l_754[1].f2)) & l_1118[0][3]))
    { 
        int32_t *l_1120 = &l_789[2];
        int32_t **l_1119 = &l_1120;
        int64_t ** const l_1124 = (void*)0;
        int64_t ** const *l_1123 = &l_1124;
        (*l_1119) = ((*g_80) = &l_789[2]);
        (*g_266) = &l_1104;
        for (l_948 = 0; (l_948 <= 0); l_948 += 1)
        { 
            int64_t ** const **l_1125 = &l_1123;
            int i;
            if (((void*)0 == &l_959))
            { 
                int8_t l_1121 = 0x6FL;
                if (l_1121)
                    break;
            }
            else
            { 
                int32_t *l_1122 = &l_788;
                (*l_1122) ^= ((*l_1120) = ((*l_888) != &p_28));
            }
            (*l_1125) = (l_1104.f1.f3 , l_1123);
        }
    }
    else
    { 
        int32_t l_1129 = 0xBE8D6072L;
        uint8_t l_1130 = 0xB3L;
        int32_t l_1131 = 0xF5E9B4C8L;
        struct S3 *l_1134 = &l_1104;
        int32_t l_1157 = (-9L);
        l_1131 = (((l_789[0] && (l_1130 = ((p_30.f2 <= (((safe_sub_func_int16_t_s_s(((g_1096.f0 = l_1128[1][0]) , (9L | (l_1129 = (*g_770)))), p_30.f2)) >= 18446744073709551615UL) & p_30.f0)) | l_1104.f1.f0))) < l_1131) , l_1104.f1.f2);
        (*g_1079) = &p_30;
        for (l_1130 = 0; (l_1130 > 51); ++l_1130)
        { 
            l_765[0] = l_1134;
        }
        (**g_80) = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((((l_754[1].f0 && (g_143.f3 , ((((safe_add_func_int32_t_s_s((l_1129 > (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((p_30.f2 , (void*)0) != (void*)0), p_28)), 246UL))), 0x9006ADC5L)) && 0xE35E2E194B6A9A33LL) || 1L) != 0L))) <= (**g_80)) == l_1130) <= p_30.f0) <= p_30.f4), l_1131)), 6));
        l_1157 ^= ((((*l_774) |= (*g_770)) || ((safe_mod_func_uint16_t_u_u((~(safe_mod_func_int32_t_s_s((+(safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(3UL, ((void*)0 != (*l_1068)))) == ((**g_80) = (g_143.f1.f4 < ((*g_1080) , p_30.f2)))), l_1129)), 0UL))), l_1104.f3.f2))), l_754[1].f2)) > l_1104.f4)) || l_1131);
    }
    for (l_1104.f4 = (-5); (l_1104.f4 > 7); l_1104.f4++)
    { 
        struct S2 l_1160 = {0x5021552FL,0xE19B730EL,3UL};
        uint32_t ***l_1172 = &g_1171;
        struct S0 l_1175 = {0xCFADL,9UL,0L,1UL,255UL};
        int64_t **l_1178 = &g_770;
        int64_t ***l_1177 = &l_1178;
        int64_t **** const l_1176 = &l_1177;
        uint32_t l_1181 = 0x97C91DDBL;
        int32_t *l_1182 = &g_241[0][4][3];
        struct S1 *l_1197 = &g_146;
        int32_t l_1225 = 1L;
        int32_t l_1234 = 0xE65064DEL;
        int32_t l_1235 = (-3L);
        (**l_1068) = l_1160;
        if ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((p_30.f0 != l_1165[0][1]), 5)), (((safe_mul_func_int8_t_s_s((((void*)0 != &l_1160) & (safe_lshift_func_int16_t_s_s(((g_507 , l_1170) == ((*l_1172) = g_1171)), g_68.f1))), 0xFEL)) | g_143.f3.f1) , 0x19L))))
        { 
            uint32_t *** const l_1179 = &g_1171;
            int32_t l_1180 = 1L;
            struct S1 *l_1198 = &g_146;
            int32_t l_1199 = 0x1CC4BA00L;
            uint32_t ****l_1202 = &l_1172;
            uint8_t *l_1205 = (void*)0;
            uint8_t *l_1206 = &l_771;
            int32_t *l_1207 = &l_761;
            l_1181 |= ((safe_sub_func_int64_t_s_s((((l_1175 , l_1176) != (void*)0) ^ l_1104.f1.f2), (((*l_1117) , l_1179) != &g_1171))) < l_1180);
            p_29 = ((*g_80) = l_1182);
            for (g_146.f0 = 0; (g_146.f0 == 32); ++g_146.f0)
            { 
                uint8_t *l_1200[6];
                uint8_t l_1201 = 0UL;
                int i;
                for (i = 0; i < 6; i++)
                    l_1200[i] = (void*)0;
                l_761 = (*p_29);
                l_1201 = ((*p_29) = (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_789[2] = (1UL <= (safe_lshift_func_int8_t_s_s((*l_1182), l_771)))), (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((p_30.f3 ^= ((l_1180 = (safe_div_func_int32_t_s_s((((*g_354) , (p_30.f2 , l_1197)) != l_1198), 4294967295UL))) < l_1199)) >= (*l_1182)), (-1L))) , g_525), (*l_1182))))), l_773.f0)));
            }
            (*l_1202) = l_1179;
            (*l_1207) ^= (p_30.f2 >= ((*l_1206) = (l_1160 , (safe_mul_func_int16_t_s_s((((g_69.f0 ^ (((0x382994C5F33437DFLL == (4L >= ((*l_1182) || p_30.f1))) || p_30.f0) & 6UL)) == g_78) <= l_1199), p_28)))));
        }
        else
        { 
            uint8_t *l_1220 = &g_68.f1;
            int32_t l_1223 = 0xC9821DCEL;
            int64_t l_1224 = 0x09D91EEB1ABA0E19LL;
            int32_t *l_1226 = (void*)0;
            int32_t *l_1227 = &l_788;
            int32_t *l_1228 = &l_787;
            int32_t *l_1229 = &l_1225;
            int32_t *l_1230 = &g_241[0][6][4];
            int32_t *l_1231 = &l_789[2];
            int32_t *l_1232 = &l_787;
            int32_t *l_1233[5][2][6] = {{{&l_1223,&l_1225,&l_1225,&l_788,&l_1225,&l_1225},{&l_789[2],&g_749,&g_241[0][4][3],(void*)0,&l_787,&l_789[2]}},{{&l_789[2],&g_749,&g_241[0][4][3],&g_241[0][3][0],&l_1225,(void*)0},{&l_788,&g_749,&g_749,&g_749,&l_787,&g_8}},{{&l_1225,&g_749,&g_749,&l_1225,&l_1225,&g_749},{&l_1225,&l_1225,&l_789[2],&g_241[0][4][3],&g_241[0][3][0],&l_1060}},{{&l_789[2],&g_749,(void*)0,&g_241[0][4][3],&l_789[2],&l_789[2]},{(void*)0,&l_789[2],(void*)0,&g_749,&l_1225,&l_1060}},{{&g_8,&g_749,&l_789[2],&g_749,&l_761,&g_749},{&g_749,&l_761,&g_749,&l_789[2],&g_749,&g_8}}};
            int i, j, k;
            l_787 = (((*l_762) = ((p_30.f1 | (safe_sub_func_uint64_t_u_u((!((safe_add_func_int64_t_s_s(((*g_770) = ((safe_add_func_uint8_t_u_u(((*l_1220) = (l_1104.f1.f3 != ((*l_1182) , (!(p_27 , (safe_add_func_int8_t_s_s(1L, (safe_rshift_func_uint8_t_u_u((*l_1182), 2))))))))), ((((l_1223 = (safe_mul_func_uint16_t_u_u(g_1096.f4, p_30.f1))) && g_68.f2) , 3L) != p_30.f1))) > p_30.f3)), l_771)) > p_30.f4)), (*l_1182)))) ^ l_754[1].f2)) | l_1224);
            for (g_69.f1 = 0; g_69.f1 < 1; g_69.f1 += 1)
            {
                g_52[g_69.f1] = &g_53[0];
            }
            --g_1236;
            for (g_507 = 0; (g_507 != 24); g_507++)
            { 
                return g_241[0][4][3];
            }
        }
    }
    return g_146.f4;
}



static union U4  func_32(int16_t  p_33, uint8_t  p_34, struct S1  p_35, struct S1  p_36)
{ 
    uint32_t l_713 = 18446744073709551613UL;
    int32_t l_716 = 0xD710A9F1L;
    int32_t *l_717 = &g_241[0][5][3];
    int32_t *l_718 = &l_716;
    int32_t l_719[6][7] = {{0xFE3A0EDAL,1L,1L,0L,(-5L),0x1C8B87AEL,0L},{(-5L),0L,0xACD4E59CL,0xACD4E59CL,0L,(-5L),0xFE3A0EDAL},{(-1L),0xACD4E59CL,1L,0xFE3A0EDAL,0x09AEE684L,(-5L),(-5L)},{0L,0x09AEE684L,0x1AD6C325L,0x09AEE684L,0L,0x1C8B87AEL,(-1L)},{1L,0xACD4E59CL,(-5L),1L,0L,(-1L),0L},{0x059327F5L,0L,0L,0x059327F5L,0x09AEE684L,1L,1L}};
    int32_t *l_720 = &l_719[4][2];
    int32_t *l_721 = &l_719[4][2];
    int32_t *l_722[2][4][2] = {{{&l_716,&g_241[0][4][3]},{&l_716,&l_716},{&l_716,&g_241[0][4][3]},{&l_716,&l_716}},{{&l_716,&g_241[0][4][3]},{&l_716,&l_716},{&l_716,&g_241[0][4][3]},{&l_716,&l_716}}};
    uint32_t l_723[5][4][6] = {{{0xFAF1BD51L,0x88DDE406L,0x3E5840E6L,0x57A7E75AL,18446744073709551615UL,0x7814F410L},{0xC6EE1574L,0xB2C8CB56L,0x15DD043AL,0x38B9086EL,4UL,0x38B9086EL},{0x0BF5CD3CL,0x7D44C9EFL,0x0BF5CD3CL,0xD080EEBAL,0UL,2UL},{0x7D44C9EFL,0xFAF1BD51L,4UL,0xE1473760L,0x622AA5FAL,0x88DDE406L}},{{0x4B7C721AL,0xDCABB0C4L,0x92DFC0EAL,0xE1473760L,0xC6EE1574L,0x872C99C5L},{0x622AA5FAL,1UL,0x44D13CF3L,0x872C99C5L,0x92DFC0EAL,0xB2C8CB56L},{18446744073709551615UL,0x6D3DFB8FL,18446744073709551615UL,18446744073709551608UL,0xB2C8CB56L,0UL},{0UL,0xDCABB0C4L,2UL,0xD080EEBAL,0x7CB2358BL,0x38B9086EL}},{{18446744073709551611UL,0x408AE400L,0x6D3DFB8FL,0xF81EA55DL,0xF6B81D47L,0xC3E6BD8CL},{0x9A0CA44AL,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,0xD080EEBAL,0x7D44C9EFL},{0x15DD043AL,0xC3E6BD8CL,2UL,0UL,0UL,2UL},{18446744073709551615UL,18446744073709551615UL,0x8906F51BL,0x0BF5CD3CL,0x98EFD870L,0x44D13CF3L}},{{0x7D44C9EFL,0x92DFC0EAL,0UL,2UL,0x872C99C5L,0x8906F51BL},{1UL,0x7D44C9EFL,0UL,0xF6B81D47L,18446744073709551615UL,0x44D13CF3L},{4UL,0xF6B81D47L,0x8906F51BL,0x408AE400L,0UL,2UL},{0x408AE400L,0UL,2UL,0UL,0xE1473760L,0x7D44C9EFL}},{{0UL,0x7CB2358BL,18446744073709551615UL,1UL,0x4B7C721AL,0xC3E6BD8CL},{0x4B7C721AL,18446744073709551615UL,0x6D3DFB8FL,0UL,0x622AA5FAL,0x38B9086EL},{0UL,18446744073709551615UL,2UL,0UL,4UL,0UL},{0x872C99C5L,0xB2C8CB56L,18446744073709551615UL,0x5787496DL,18446744073709551615UL,0xB2C8CB56L}}};
    int8_t **l_730 = (void*)0;
    union U4 l_735 = {0};
    uint8_t l_750[2];
    union U4 *l_752 = &l_735;
    union U4 **l_751 = &l_752;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_750[i] = 250UL;
    for (p_35.f3 = 0; (p_35.f3 <= 11); p_35.f3 = safe_add_func_int8_t_s_s(p_35.f3, 7))
    { 
        (**g_80) &= 0x0FECD168L;
        (**g_80) = (p_36.f1 & (&p_35 == &p_35));
        for (g_68.f2 = (-9); (g_68.f2 >= 26); g_68.f2 = safe_add_func_int16_t_s_s(g_68.f2, 7))
        { 
            ++l_713;
            if ((**g_80))
                continue;
        }
    }
    ++l_723[4][2][5];
    for (g_146.f4 = 0; (g_146.f4 > (-11)); g_146.f4 = safe_sub_func_uint64_t_u_u(g_146.f4, 1))
    { 
        uint16_t *l_728 = &g_510;
        const int32_t l_729 = 0xFD0BCB46L;
        uint32_t **l_736 = (void*)0;
        int32_t l_747[6] = {0L,0L,0L,0L,0L,0L};
        int8_t **l_748[7][5][1] = {{{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]}},{{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]}},{{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]}},{{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]}},{{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]}},{{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]}},{{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]},{&g_53[0]}}};
        int i, j, k;
    }
    (*l_751) = (l_735 , &g_91);
    return (**l_751);
}



static const union U4  func_44(const int8_t  p_45, int8_t ** p_46, uint16_t  p_47)
{ 
    union U4 l_62 = {0};
    int8_t *l_67 = &g_20;
    uint64_t * const l_506 = &g_507;
    uint32_t *l_508 = &g_143.f3.f0;
    int32_t l_509 = 0x0708BFB9L;
    struct S3 l_516 = {0xF48FL,{0x8E9BL,0x78L,0xD672E07DF4D51573LL,3UL,249UL},0x6419L,{4294967295UL,0xE4A7B94BL,0UL},0x76L};
    struct S1 l_520 = {0x94B2L,3L,0xFF1AB63CL,0L,0x436D081091679DD4LL};
    int16_t l_534[4][2][7] = {{{0x29BDL,0x2161L,0x29BDL,0x0EADL,1L,1L,0x0EADL},{0x618DL,(-7L),0x618DL,(-9L),1L,1L,(-9L)}},{{0x29BDL,0x2161L,0x29BDL,0x0EADL,1L,1L,0x0EADL},{0x618DL,(-7L),0x618DL,(-9L),1L,1L,(-9L)}},{{0x29BDL,0x2161L,0x29BDL,0x0EADL,1L,1L,0x0EADL},{0x618DL,(-7L),0x618DL,(-9L),1L,1L,(-9L)}},{{0x29BDL,0x2161L,0x29BDL,0x0EADL,1L,1L,0x0EADL},{0x618DL,(-7L),0x618DL,(-9L),1L,1L,(-9L)}}};
    int32_t l_553[1][2][4] = {{{0xBC1264DBL,0x9246D200L,0xBC1264DBL,0x9246D200L},{0xBC1264DBL,0x9246D200L,0xBC1264DBL,0x9246D200L}}};
    uint16_t l_556[7][1][6];
    int32_t l_595 = 0x2B13B7B4L;
    uint64_t *l_676 = &g_91.f1;
    uint64_t **l_675 = &l_676;
    uint64_t ***l_694 = (void*)0;
    uint64_t ****l_693 = &l_694;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_556[i][j][k] = 9UL;
        }
    }
    return g_91;
}



static int16_t  func_59(union U4  p_60, int32_t * p_61)
{ 
    uint16_t l_320 = 0x5929L;
    int32_t l_321 = 0x11238A77L;
    uint16_t l_335 = 6UL;
    int32_t *l_367 = (void*)0;
    int32_t l_399 = (-7L);
    int32_t l_401 = 1L;
    uint32_t l_406 = 2UL;
    struct S0 l_436 = {0L,1UL,0xF7A6C1F45683BCC3LL,0x7BL,4UL};
    int8_t *l_438 = &g_146.f3;
    int8_t **l_447 = &g_53[0];
    struct S2 l_452 = {0UL,0x6FC049C0L,6UL};
    int32_t l_489 = 0x3171A033L;
    int32_t l_490 = (-1L);
    int32_t l_493 = 0x5B71153AL;
    int32_t l_495 = (-1L);
    int32_t l_496 = 0x96BF7DB8L;
    int32_t l_497 = 0xF3B35E36L;
    int32_t l_499 = 0L;
    int32_t l_501 = 0xECC0D902L;
    int32_t l_502[1][7] = {{9L,1L,1L,9L,1L,1L,9L}};
    int i, j;
lbl_322:
    (*p_61) = (*p_61);
    for (g_78 = 0; (g_78 >= 43); g_78++)
    { 
        const uint64_t l_312[5][3][3] = {{{1UL,1UL,1UL},{0x62F5AF060D8071BBLL,6UL,0x62F5AF060D8071BBLL},{1UL,1UL,1UL}},{{0x62F5AF060D8071BBLL,6UL,0x62F5AF060D8071BBLL},{1UL,1UL,1UL},{0x62F5AF060D8071BBLL,6UL,0x62F5AF060D8071BBLL}},{{1UL,1UL,1UL},{0x62F5AF060D8071BBLL,6UL,0x62F5AF060D8071BBLL},{1UL,1UL,1UL}},{{0x62F5AF060D8071BBLL,6UL,0x62F5AF060D8071BBLL},{1UL,1UL,1UL},{0x62F5AF060D8071BBLL,6UL,0x62F5AF060D8071BBLL}},{{1UL,1UL,1UL},{0x62F5AF060D8071BBLL,6UL,0x62F5AF060D8071BBLL},{1UL,1UL,1UL}}};
        struct S3 **l_313 = (void*)0;
        int32_t *l_314 = &g_241[0][6][2];
        uint32_t l_317 = 0x733B5EDCL;
        struct S3 * const l_318 = &g_143;
        uint8_t *l_319[2][4][4] = {{{&g_68.f1,&g_68.f3,&g_68.f1,&g_68.f3},{&g_68.f1,&g_68.f3,&g_68.f1,&g_68.f3},{&g_68.f1,&g_68.f3,&g_68.f1,&g_68.f3},{&g_68.f1,&g_68.f3,&g_68.f1,&g_68.f3}},{{&g_68.f1,&g_68.f3,&g_68.f1,&g_68.f3},{&g_68.f1,&g_68.f3,&g_68.f1,&g_68.f3},{&g_68.f1,&g_68.f3,&g_68.f1,&g_68.f3},{&g_68.f1,&g_68.f3,&g_68.f1,&g_68.f3}}};
        int i, j, k;
        (*p_61) = (safe_mul_func_uint16_t_u_u((--g_146.f0), (safe_unary_minus_func_int8_t_s((((safe_mul_func_int8_t_s_s(0x26L, ((safe_div_func_uint32_t_u_u((l_312[0][2][1] <= ((l_313 == (((l_320 &= ((l_314 == ((safe_add_func_int64_t_s_s(l_317, (((((void*)0 != l_318) && 0x3276L) > (*p_61)) < g_146.f4))) , p_61)) != 65534UL)) > g_39) , (void*)0)) && 0L)), l_321)) & 1L))) && (*l_314)) >= 0x50D19077L)))));
        if (g_78)
            goto lbl_322;
        for (g_68.f3 = (-5); (g_68.f3 > 15); g_68.f3++)
        { 
            return g_146.f0;
        }
    }
    for (g_68.f1 = 0; (g_68.f1 <= 0); g_68.f1 += 1)
    { 
        int32_t *l_325 = &g_241[0][4][3];
        struct S2 *l_358[5][2];
        int16_t l_389 = 4L;
        int32_t l_404[1];
        struct S0 l_454[5][2][7] = {{{{0x6D5EL,246UL,0x9CDA7E6F5E8B3CF9LL,0xBBL,248UL},{0x066EL,0xDCL,-5L,252UL,6UL},{0L,252UL,-1L,0x62L,0x0CL},{0x066EL,0xDCL,-5L,252UL,6UL},{0x6D5EL,246UL,0x9CDA7E6F5E8B3CF9LL,0xBBL,248UL},{0x732CL,0UL,0xC3AF9F30E17634B3LL,0UL,0xF4L},{0xFF17L,255UL,5L,0xA8L,0UL}},{{0L,255UL,-1L,0xFAL,255UL},{-1L,254UL,0x94C4F24BA6EC0200LL,1UL,0x5CL},{-10L,0x48L,0L,0xD1L,0x7DL},{0xC57DL,0xCAL,0xA96F7532D907DC04LL,0x6EL,0x20L},{-2L,248UL,0x5E2384A1193F9A48LL,1UL,0UL},{0L,255UL,0xAA6AD06C1E9EB4A1LL,0UL,0x2CL},{-1L,254UL,0x94C4F24BA6EC0200LL,1UL,0x5CL}}},{{{0xFDACL,0x14L,-4L,0x30L,0xACL},{0xE1FCL,0xE4L,0x88298CE9C7E11143LL,0x67L,1UL},{0L,4UL,0x333C61FAF606C316LL,0x42L,0x82L},{8L,0x80L,0x0639E80F3C8EF328LL,1UL,0xBFL},{0xD4F5L,0x72L,0xF06963DE5CAB97CDLL,255UL,0x6CL},{0xFDACL,0x14L,-4L,0x30L,0xACL},{0L,0x70L,1L,5UL,255UL}},{{0L,255UL,-1L,0xFAL,255UL},{0xC57DL,0xCAL,0xA96F7532D907DC04LL,0x6EL,0x20L},{0xFDACL,0x14L,-4L,0x30L,0xACL},{-10L,0x48L,0L,0xD1L,0x7DL},{0L,0x70L,1L,5UL,255UL},{-10L,0x48L,0L,0xD1L,0x7DL},{0xFDACL,0x14L,-4L,0x30L,0xACL}}},{{{0x6D5EL,246UL,0x9CDA7E6F5E8B3CF9LL,0xBBL,248UL},{0x6D5EL,246UL,0x9CDA7E6F5E8B3CF9LL,0xBBL,248UL},{0xFDACL,0x14L,-4L,0x30L,0xACL},{-1L,0x5BL,0x8EDB20FA3370FCE4LL,0x39L,6UL},{0xFF17L,255UL,5L,0xA8L,0UL},{1L,0x07L,5L,0xF9L,0x5BL},{0x732CL,0UL,0xC3AF9F30E17634B3LL,0UL,0xF4L}},{{-10L,0UL,0x6DF943DE31C2C1C2LL,0xC0L,2UL},{-2L,248UL,0x5E2384A1193F9A48LL,1UL,0UL},{0L,4UL,0x333C61FAF606C316LL,0x42L,0x82L},{0xFF17L,255UL,5L,0xA8L,0UL},{0x6D5EL,246UL,0x9CDA7E6F5E8B3CF9LL,0xBBL,248UL},{-1L,2UL,-1L,1UL,0UL},{0xC57DL,0xCAL,0xA96F7532D907DC04LL,0x6EL,0x20L}}},{{{5L,0xDEL,2L,0xECL,1UL},{0xD4F5L,0x72L,0xF06963DE5CAB97CDLL,255UL,0x6CL},{-10L,0x48L,0L,0xD1L,0x7DL},{-2L,248UL,0x5E2384A1193F9A48LL,1UL,0UL},{0xFF17L,255UL,5L,0xA8L,0UL},{0x2BBAL,0xA9L,3L,0x16L,0UL},{0xD4F5L,0x72L,0xF06963DE5CAB97CDLL,255UL,0x6CL}},{{0xFDACL,0x14L,-4L,0x30L,0xACL},{0L,0x70L,1L,5UL,255UL},{0L,252UL,-1L,0x62L,0x0CL},{0L,252UL,-1L,0x62L,0x0CL},{0L,0x70L,1L,5UL,255UL},{0xFDACL,0x14L,-4L,0x30L,0xACL},{0xD4F5L,0x72L,0xF06963DE5CAB97CDLL,255UL,0x6CL}}},{{{0x2BBAL,0xA9L,3L,0x16L,0UL},{0xFF17L,255UL,5L,0xA8L,0UL},{-2L,248UL,0x5E2384A1193F9A48LL,1UL,0UL},{-10L,0x48L,0L,0xD1L,0x7DL},{0xD4F5L,0x72L,0xF06963DE5CAB97CDLL,255UL,0x6CL},{5L,0xDEL,2L,0xECL,1UL},{0xC57DL,0xCAL,0xA96F7532D907DC04LL,0x6EL,0x20L}},{{-1L,2UL,-1L,1UL,0UL},{0x6D5EL,246UL,0x9CDA7E6F5E8B3CF9LL,0xBBL,248UL},{0xFF17L,255UL,5L,0xA8L,0UL},{0L,4UL,0x333C61FAF606C316LL,0x42L,0x82L},{-2L,248UL,0x5E2384A1193F9A48LL,1UL,0UL},{-10L,0UL,0x6DF943DE31C2C1C2LL,0xC0L,2UL},{0x732CL,0UL,0xC3AF9F30E17634B3LL,0UL,0xF4L}}}};
        int32_t l_472 = 0L;
        uint64_t l_486[4] = {0UL,0UL,0UL,0UL};
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_358[i][j] = &g_69;
        }
        for (i = 0; i < 1; i++)
            l_404[i] = 0x6443973AL;
        l_325 = p_61;
        for (g_68.f3 = 0; (g_68.f3 <= 0); g_68.f3 += 1)
        { 
            uint32_t *l_332 = &g_69.f0;
            uint32_t **l_333 = &l_332;
            int32_t l_334 = (-1L);
            uint8_t *l_336 = &g_91.f2;
            struct S3 *l_339 = (void*)0;
            struct S0 l_346 = {0x210EL,0x8DL,0xC6FA711EAD79FB84LL,8UL,0x73L};
            struct S1 l_362 = {0UL,0x3EL,0x5AEE1902L,0x73L,1L};
            int64_t l_390 = 0xBEB2116620879AAALL;
            int32_t l_403 = 3L;
            struct S3 **l_434 = &g_142;
            struct S3 ***l_433[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
            struct S2 *l_451 = &g_69;
            uint32_t l_474 = 7UL;
            uint64_t *l_482 = (void*)0;
            int32_t l_491 = 0x1CDEC447L;
            int32_t l_492 = 0xF1733DA4L;
            int32_t l_494 = 0L;
            int32_t l_498 = 0x26C6244BL;
            int32_t l_500 = 0L;
            int i, j;
            if ((((((*l_336) = (safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((l_335 ^= ((((((((((1UL >= (safe_mod_func_uint8_t_u_u(1UL, l_321))) ^ (0x297713E8F09E2971LL ^ (((*l_333) = l_332) != p_61))) ^ l_334) || 1L) > 0x91F9277D26157F35LL) == l_320) & l_321) & (*l_325)) == l_334) <= 0xC35EL)), l_334)), (*p_61)))) | g_68.f2) > l_334) < 0x40DDA1B7L))
            { 
                uint16_t *l_355 = (void*)0;
                uint16_t *l_356 = &l_320;
                for (g_68.f0 = 0; (g_68.f0 >= 0); g_68.f0 -= 1)
                { 
                    struct S0 *l_338 = (void*)0;
                    struct S0 **l_337 = &l_338;
                    (*l_337) = &g_68;
                    (*g_266) = l_339;
                }
                if ((((safe_sub_func_uint16_t_u_u(l_335, ((safe_mul_func_uint8_t_u_u(0xB8L, ((safe_mod_func_uint16_t_u_u(((((void*)0 == &l_339) , l_346) , (g_143.f4 == ((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((((*l_356) &= (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((void*)0 == g_354), (*l_325))), g_146.f2))) , 0x5AD9BAD2L) >= 0x65E58F15L))), l_321)) <= 6L))), l_335)) , l_320))) < (*l_325)))) == g_146.f2) && l_321))
                { 
                    int64_t *l_357 = &l_346.f2;
                    struct S2 *l_359 = &g_69;
                    struct S1 *l_363 = &l_362;
                    (*l_325) = (((g_69 , ((*l_357) |= 0x6AFFF2BE411DA37ELL)) > 0x7585A87557A66DFBLL) && (1UL || (l_358[1][1] == l_359)));
                    (*p_61) ^= ((-1L) <= (--(**l_333)));
                    (*l_363) = l_362;
                }
                else
                { 
                    struct S1 *l_364 = (void*)0;
                    l_362 = (*g_354);
                }
                for (g_143.f4 = 0; (g_143.f4 >= 0); g_143.f4 -= 1)
                { 
                    (*g_80) = p_61;
                }
            }
            else
            { 
                uint32_t l_386 = 0x1501E2DEL;
                int32_t l_392 = 0x6C9B8850L;
                int32_t l_398 = 0xFBCFB5D4L;
                int64_t l_400 = (-9L);
                int32_t l_402 = 0x59718EAFL;
                struct S3 l_414[5] = {{2L,{-5L,0UL,0L,0xE7L,250UL},0x0A94L,{0x8EEDA52DL,-1L,65535UL},-9L},{2L,{-5L,0UL,0L,0xE7L,250UL},0x0A94L,{0x8EEDA52DL,-1L,65535UL},-9L},{2L,{-5L,0UL,0L,0xE7L,250UL},0x0A94L,{0x8EEDA52DL,-1L,65535UL},-9L},{2L,{-5L,0UL,0L,0xE7L,250UL},0x0A94L,{0x8EEDA52DL,-1L,65535UL},-9L},{2L,{-5L,0UL,0L,0xE7L,250UL},0x0A94L,{0x8EEDA52DL,-1L,65535UL},-9L}};
                int8_t *l_435 = &l_414[0].f4;
                struct S2 l_437 = {0x35B223BCL,1L,0UL};
                int8_t ***l_446 = &g_52[0];
                int64_t *l_450 = &g_99;
                int i;
                (*g_80) = p_61;
                if ((g_241[0][4][2] != 0L))
                { 
                    uint16_t *l_370[1];
                    int32_t l_374 = 0x32DA7B7EL;
                    struct S1 *l_375 = &g_146;
                    int32_t *l_391 = &l_374;
                    int32_t *l_393 = (void*)0;
                    int32_t *l_394 = &g_8;
                    int32_t *l_395 = (void*)0;
                    int32_t *l_396 = &l_392;
                    int32_t *l_397[1];
                    int32_t l_405 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_370[i] = &g_146.f0;
                    for (i = 0; i < 1; i++)
                        l_397[i] = (void*)0;
                    (*g_80) = l_367;
                    (*p_61) ^= ((0x9E20510CL ^ ((l_334 = (g_143.f3.f2++)) == 65527UL)) == (safe_unary_minus_func_uint64_t_u(l_374)));
                    (*l_375) = l_362;
                    (*l_391) |= (safe_add_func_uint8_t_u_u((((((safe_mod_func_int32_t_s_s(((*p_61) = ((safe_rshift_func_int8_t_s_u(((g_78 <= (safe_add_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(((*l_332) = l_386), (safe_lshift_func_int8_t_s_u((g_69.f2 , l_389), 4)))), g_143.f1.f3))) & 0L), (g_68.f0 | l_390))) ^ 0x8B1E2EE2184DB207LL)), (-1L))) || (*l_325)) > l_386) <= g_146.f4) >= l_346.f0), l_386));
                    ++l_406;
                }
                else
                { 
                    uint32_t l_415[4] = {0xAA22A236L,0xAA22A236L,0xAA22A236L,0xAA22A236L};
                    struct S3 l_420 = {0x8350L,{0xE43EL,255UL,0L,0x38L,252UL},0xF8ACL,{4294967295UL,0x43F92910L,0x6AE1L},-7L};
                    uint16_t *l_423 = &l_335;
                    struct S1 l_426 = {0xB588L,1L,1UL,0x1CL,-1L};
                    int32_t *l_427 = &l_404[0];
                    union U4 l_430 = {0};
                    int i;
                    (*l_325) = (safe_add_func_uint32_t_u_u((((*l_427) |= ((!((l_402 <= (((((safe_rshift_func_int16_t_s_u((((l_414[0] , l_415[2]) , (p_60.f2 = (safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((l_420 , ((safe_sub_func_int8_t_s_s((((((((*l_423) = l_415[2]) >= (safe_lshift_func_int8_t_s_s(l_420.f4, ((l_426 , l_414[0].f1.f3) && (*p_61))))) < 0x379FCBA48C30D023LL) & g_68.f0) ^ g_241[0][4][3]) > (-3L)), (-1L))) != 0xE5L)), (*l_325))), (-7L))))) <= (*l_325)), 11)) <= l_420.f1.f2) == g_143.f3.f1) ^ 0xA2B6L) <= l_346.f0)) ^ g_146.f3)) | l_414[0].f1.f3)) != (*l_325)), 0x1FD15744L));
                    (*l_427) = (&p_60 == (void*)0);
                    (*l_325) &= (safe_sub_func_int64_t_s_s((p_60.f2 < (l_430 , p_60.f2)), (0x104BL ^ (safe_sub_func_uint64_t_u_u(((void*)0 == l_433[0][0]), (l_414[0].f3.f0 , p_60.f2))))));
                    return g_241[0][3][3];
                }
                (*g_80) = &l_403;
                if ((*p_61))
                    continue;
                if (((l_435 == l_438) || (~(((safe_div_func_uint8_t_u_u((0x0A58L != 0x76BBL), ((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((l_447 = ((*l_446) = &g_53[0])) != (((*l_450) = (safe_sub_func_uint32_t_u_u(((**l_333) |= g_146.f1), ((((0L >= 255UL) || 2UL) <= l_346.f2) , 0xBD643D75L)))) , (void*)0)), 8L)), 5)) , 0xB6L))) , l_451) != (void*)0))))
                { 
                    return (*l_325);
                }
                else
                { 
                    if (l_346.f0)
                        break;
                    if ((*p_61))
                        continue;
                    (*l_325) &= (-1L);
                }
            }
            for (l_320 = 0; (l_320 <= 0); l_320 += 1)
            { 
                uint32_t l_453 = 0x412FB81BL;
                uint32_t *l_455 = (void*)0;
                int32_t l_470 = 0x73766ADAL;
                int32_t l_471 = 0x635E3819L;
                int32_t l_473[2][5][7];
                int32_t l_485 = 0x476DDBAFL;
                uint32_t l_503 = 0x6F81FABDL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 7; k++)
                            l_473[i][j][k] = 0x87166662L;
                    }
                }
                g_241[l_320][(g_68.f1 + 6)][(g_68.f3 + 1)] = ((l_452 , p_61) != ((*l_333) = l_455));
                if (((((((safe_mod_func_uint64_t_u_u(((((*l_325) < (*l_325)) , ((l_453 == g_69.f0) > 9UL)) & (g_143.f1.f4 , ((safe_add_func_uint16_t_u_u(g_143.f1.f0, 0xC0FCL)) , l_346.f3))), (-7L))) & 0xFB89D7F9247B8D5ELL) && l_453) > g_12) == (*l_325)) && g_241[l_320][(g_68.f1 + 6)][(g_68.f3 + 1)]))
                { 
                    int32_t *l_460 = &l_401;
                    int32_t *l_461 = (void*)0;
                    int32_t *l_462 = &l_321;
                    int32_t *l_463 = &l_399;
                    int32_t *l_464 = &l_334;
                    int32_t *l_465 = &g_241[0][4][4];
                    int32_t *l_466 = &g_8;
                    int32_t *l_467 = &g_241[g_68.f3][l_320][(l_320 + 4)];
                    int32_t *l_468 = &l_403;
                    int32_t *l_469[3][3] = {{&l_334,&l_334,&l_334},{(void*)0,&l_399,(void*)0},{&l_334,&l_334,&l_334}};
                    int i, j, k;
                    ++l_474;
                    return g_143.f1.f1;
                }
                else
                { 
                    uint32_t l_483[7][2][2] = {{{0xCF79224CL,0UL},{0xCF79224CL,0x75F7F9D2L}},{{4294967295UL,5UL},{0UL,0x27721E3DL}},{{4294967295UL,4294967295UL},{4294967291UL,4294967295UL}},{{4294967295UL,0x27721E3DL},{0UL,5UL}},{{4294967291UL,0UL},{5UL,0x27721E3DL}},{{5UL,0UL},{4294967291UL,5UL}},{{0UL,0x27721E3DL},{4294967295UL,4294967295UL}}};
                    int32_t *l_484[6];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_484[i] = (void*)0;
                    (*l_325) = (-1L);
                    (*p_61) = (l_346.f2 , (safe_mod_func_int64_t_s_s(((g_286 , p_60) , (l_436.f1 >= (safe_lshift_func_uint8_t_u_u((((!(*l_325)) >= ((l_482 == (void*)0) && 0x16796F2A707A68C8LL)) <= g_143.f4), 4)))), l_483[4][0][0])));
                    l_486[2]++;
                    l_503--;
                }
            }
        }
    }
    return l_490;
}



static int32_t * func_63(int8_t * p_64, struct S0  p_65, struct S2  p_66)
{ 
    int32_t l_76[5] = {0x201886A6L,0x201886A6L,0x201886A6L,0x201886A6L,0x201886A6L};
    int32_t l_79 = 1L;
    uint32_t l_93[3];
    int32_t l_131 = 0x83D34BCDL;
    int32_t ***l_174 = (void*)0;
    int32_t l_185[1][5];
    struct S0 l_215 = {1L,0xC5L,-6L,0xD1L,255UL};
    uint32_t l_220 = 0x9A0A66F2L;
    struct S1 *l_270[4] = {&g_146,&g_146,&g_146,&g_146};
    int16_t l_287[5][1][2] = {{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}}};
    int32_t l_297[6];
    uint8_t l_298 = 0xF5L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_93[i] = 0x2E61FFE8L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_185[i][j] = 5L;
    }
    for (i = 0; i < 6; i++)
        l_297[i] = 0xB29770BCL;
lbl_151:
    for (g_54 = 19; (g_54 != 28); g_54 = safe_add_func_int16_t_s_s(g_54, 1))
    { 
        int32_t *l_72 = &g_8;
        int32_t l_137[2][2][1];
        int32_t l_138 = 0x835DF1A5L;
        struct S3 *l_144 = &g_143;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_137[i][j][k] = 0x0716F034L;
            }
        }
        for (g_8 = 0; (g_8 <= 0); g_8 += 1)
        { 
            int32_t **l_73 = &l_72;
            (*l_73) = l_72;
        }
        for (p_65.f0 = 0; (p_65.f0 <= 0); p_65.f0 += 1)
        { 
            uint64_t l_100 = 0x238A52A621C2DF4BLL;
            uint64_t l_114 = 0xD70CC3162E151748LL;
            int32_t l_129 = 0x2A5ADA2CL;
            int32_t l_130 = 0x300DCE92L;
            int32_t l_135 = 0xF1B91DFBL;
            int32_t l_136 = 0x281BF5FEL;
            for (g_68.f0 = 0; (g_68.f0 >= 0); g_68.f0 -= 1)
            { 
                uint64_t *l_77[7];
                union U4 *l_90 = &g_91;
                union U4 **l_92 = &l_90;
                const int32_t l_96 = 0xBF82AF62L;
                int64_t *l_97 = &g_68.f2;
                int64_t *l_98 = &g_99;
                int32_t *l_101 = &l_79;
                int i;
                for (i = 0; i < 7; i++)
                    l_77[i] = &g_78;
                (*l_72) = (((safe_add_func_int64_t_s_s((*l_72), (l_79 = l_76[1]))) , (&l_72 != g_80)) == (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((*p_64) >= (((safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((g_68.f2 > (0x3AE4L <= p_66.f2)), (*l_72))), 6)) >= 0x6EL) >= (*p_64))), 4L)), g_68.f0)));
                (*l_92) = l_90;
                (*l_101) &= ((*l_72) = ((((g_68.f4 > (p_66.f1 <= l_93[0])) && (*p_64)) != ((*l_98) = ((*l_97) = (safe_rshift_func_uint8_t_u_s(1UL, (p_65.f1 == l_96)))))) && l_100));
            }
            (**g_80) = (-1L);
            for (p_66.f0 = 0; (p_66.f0 <= 0); p_66.f0 += 1)
            { 
                int32_t l_104 = 0x50F896C2L;
                uint8_t *l_105[7][1][3] = {{{&g_68.f1,&g_68.f1,&g_68.f1}},{{&g_68.f3,&g_68.f1,&g_68.f3}},{{&g_68.f1,&g_68.f1,&g_68.f1}},{{&g_68.f1,&g_68.f1,&g_68.f1}},{{&g_68.f1,&g_68.f1,&g_68.f1}},{{&g_68.f3,&g_68.f1,&g_68.f3}},{{&g_68.f1,&g_68.f1,&g_68.f1}}};
                int i, j, k;
                if ((**g_80))
                    break;
            }
        }
    }
    g_146 = g_146;
    if ((safe_rshift_func_uint16_t_u_u((++p_66.f2), 13)))
    { 
        uint64_t *l_166 = &g_78;
        int32_t l_167 = 0xE5F6D2A8L;
        int32_t *l_171 = &g_8;
        int32_t l_187 = 2L;
        int32_t l_194 = 0x510918F9L;
        int8_t l_225 = 8L;
        int16_t l_229 = 0x1BD5L;
        uint16_t l_230[7] = {0x576BL,0x576BL,0x576BL,0x576BL,0x576BL,0x576BL,0x576BL};
        struct S3 **l_269[5][5][3] = {{{&g_142,&g_142,&g_142},{(void*)0,&g_142,&g_142},{(void*)0,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,(void*)0}},{{&g_142,&g_142,(void*)0},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{(void*)0,&g_142,&g_142},{(void*)0,&g_142,&g_142},{&g_142,&g_142,&g_142}},{{&g_142,&g_142,(void*)0},{&g_142,&g_142,(void*)0},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{(void*)0,&g_142,&g_142},{(void*)0,&g_142,&g_142}}};
        int i, j, k;
        if (g_146.f4)
            goto lbl_151;
        if ((((l_167 = (safe_mul_func_int16_t_s_s((l_76[4] != g_143.f3.f0), ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((0x99FBL <= (((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((*l_166) |= (safe_div_func_uint16_t_u_u(0xC688L, ((*g_142) , ((safe_mul_func_uint16_t_u_u(p_65.f2, p_65.f4)) & g_146.f1))))), p_65.f3)), 0x8412L)) , 0x1DL) | (*p_64))), 7)), p_65.f1)) && l_167)))) >= p_66.f0) >= 4294967291UL))
        { 
            int32_t l_179 = 0x33249D86L;
            int32_t l_180 = 1L;
            int32_t l_183 = 1L;
            int32_t l_184 = 0x8194CA43L;
            int32_t l_188 = (-10L);
            int32_t l_226 = 0x6D19666DL;
            if (l_79)
            { 
                int32_t *l_170 = &l_167;
                for (g_54 = 0; (g_54 > 9); ++g_54)
                { 
                    (*g_80) = (*g_80);
                    return l_171;
                }
                for (g_146.f4 = 26; (g_146.f4 != 2); g_146.f4--)
                { 
                    uint32_t l_175 = 0UL;
                    l_174 = &g_80;
                    if (l_175)
                        break;
                    if (l_175)
                        break;
                }
            }
            else
            { 
                int8_t l_181 = 0x42L;
                int32_t l_182 = 0L;
                int32_t l_186 = (-1L);
                int32_t l_193[2][6][2] = {{{0x5C4C2692L,0x07F667E3L},{0x5C4C2692L,0x5C4C2692L},{0x07F667E3L,0x5C4C2692L},{0x5C4C2692L,0x07F667E3L},{0x5C4C2692L,0x5C4C2692L},{0x07F667E3L,0x5C4C2692L}},{{0x5C4C2692L,0x07F667E3L},{0x5C4C2692L,0x5C4C2692L},{0x07F667E3L,0x5C4C2692L},{0x5C4C2692L,0x07F667E3L},{0x5C4C2692L,0x5C4C2692L},{0x07F667E3L,0x5C4C2692L}}};
                uint8_t l_195 = 0UL;
                int16_t *l_221 = (void*)0;
                int16_t *l_222 = (void*)0;
                int16_t *l_223 = &g_68.f0;
                uint32_t *l_224[5][4] = {{&g_69.f0,&g_143.f3.f0,&l_93[0],&g_69.f0},{&l_93[1],&l_220,&l_93[1],&l_93[0]},{(void*)0,&l_220,&l_93[2],&g_69.f0},{&l_220,&g_143.f3.f0,&g_143.f3.f0,&l_220},{&l_93[1],&g_69.f0,&g_143.f3.f0,&l_93[0]}};
                int32_t *l_227 = &l_131;
                int32_t *l_228[7][7][1] = {{{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194}},{{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0}},{{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194}},{{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0}},{{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194}},{{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0}},{{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194},{(void*)0},{&l_194}}};
                int i, j, k;
                for (g_54 = (-13); (g_54 >= 4); ++g_54)
                { 
                    int32_t *l_178[1][2];
                    uint8_t l_189 = 255UL;
                    struct S3 **l_192 = &g_142;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_178[i][j] = &l_167;
                    }
                    l_189--;
                    (*l_192) = &g_143;
                    (*g_80) = l_178[0][1];
                    l_195++;
                    l_194 &= (**g_80);
                }
                for (g_69.f1 = 0; (g_69.f1 == 14); ++g_69.f1)
                { 
                    struct S2 *l_200[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_200[i] = &g_143.f3;
                    g_143.f3 = p_66;
                }
                l_194 ^= (((safe_div_func_uint64_t_u_u((l_193[1][2][1] , (safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_225 = (safe_lshift_func_int8_t_s_u(((0x54D3D32A36E6C8BFLL <= (safe_sub_func_uint32_t_u_u(((*l_171) = (safe_mul_func_int16_t_s_s((((*l_166) = (safe_sub_func_int8_t_s_s((l_215 , (g_143.f3.f2 ^ ((safe_sub_func_uint64_t_u_u((g_146.f0 & (6UL > (((safe_lshift_func_int16_t_s_s(((*l_223) = l_220), 7)) <= g_146.f0) > g_99))), 6L)) || l_184))), (*p_64)))) > g_146.f0), l_188))), p_66.f2))) & 0x34EB4003759828F9LL), 2))), (-2L))), 255UL))), g_69.f2)) < l_226) ^ g_20);
                l_230[6]++;
            }
            for (l_215.f1 = (-13); (l_215.f1 <= 9); ++l_215.f1)
            { 
                uint32_t l_243 = 0x892371F5L;
                int32_t *l_246 = &g_241[0][3][3];
                const struct S3 ****l_268 = &g_265[0];
                if (p_66.f2)
                { 
                    int32_t *l_235 = &l_187;
                    int32_t *l_236 = &l_183;
                    int32_t *l_237 = &l_185[0][0];
                    int32_t *l_238 = &l_180;
                    int32_t *l_239 = &l_167;
                    int32_t *l_240 = &l_79;
                    int32_t *l_242[4][6] = {{&l_185[0][4],&l_194,&l_194,&l_185[0][4],&l_185[0][4],&l_194},{&l_185[0][4],&l_185[0][4],&l_194,&l_194,&l_185[0][4],&l_185[0][4]},{&l_185[0][4],&l_194,&l_194,&l_185[0][4],&l_185[0][4],&l_194},{&l_185[0][4],&l_185[0][4],&l_194,&l_194,&l_185[0][4],&l_185[0][4]}};
                    int i, j;
                    --l_243;
                    (*g_80) = l_246;
                    (*l_236) |= (0x3C7E615FL || (p_65.f3 && (safe_rshift_func_int16_t_s_s((g_146 , (g_146.f4 & ((p_65.f1 != (0xE9902BEB2762E7ADLL ^ (0x8F5056CAB57D022CLL == p_65.f0))) <= g_69.f2))), (*l_246)))));
                }
                else
                { 
                    (*l_171) |= (safe_mul_func_int16_t_s_s(g_39, (safe_div_func_int64_t_s_s((1UL & (((p_64 == (void*)0) > (safe_mul_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(1L, ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((p_66 , g_68.f4) != p_66.f1) || 0x36L), 0)), g_143.f2)) , g_143.f1.f3))), g_143.f2)) && p_65.f4) > g_69.f1), 4UL))) || (-9L))), 7UL))));
                }
                (**g_80) = l_183;
                (*l_268) = g_265[0];
            }
        }
        else
        { 
            struct S1 *l_271 = (void*)0;
            int32_t l_283[5];
            int32_t **l_288 = &l_171;
            int i;
            for (i = 0; i < 5; i++)
                l_283[i] = 0x2B50C761L;
            (*l_171) &= (((void*)0 == p_64) , (l_269[4][0][0] == l_269[1][0][2]));
            l_271 = (g_143.f1.f2 , l_270[2]);
            (*l_288) = ((*g_80) = ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((*p_64) = ((safe_div_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s(((*l_171) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((p_66.f0 & (1UL || (&l_93[0] != ((*p_64) , l_171)))) >= l_283[3]), (safe_rshift_func_uint16_t_u_u(((((l_215.f1 <= 65530UL) , l_283[3]) , 0xB4429329F13FC4F8LL) , p_66.f1), g_68.f1)))), g_146.f2))))) && (-2L)), l_283[3])) || g_68.f2)), g_286)), l_287[0][0][1])) , &l_283[2]));
        }
        for (p_66.f0 = 0; p_66.f0 < 1; p_66.f0 += 1)
        {
            for (g_286 = 0; g_286 < 7; g_286 += 1)
            {
                for (p_65.f3 = 0; p_65.f3 < 5; p_65.f3 += 1)
                {
                    g_241[p_66.f0][g_286][p_65.f3] = 0L;
                }
            }
        }
    }
    else
    { 
        int16_t l_289 = 0L;
        int32_t l_290 = 0xAB01BE67L;
        int32_t *l_291 = &g_241[0][4][3];
        int32_t l_292 = 0x8166E1F4L;
        int32_t *l_293 = &l_131;
        int32_t *l_294 = &l_79;
        int32_t *l_295 = &l_79;
        int32_t *l_296[4][7] = {{&l_185[0][0],&g_241[0][4][3],&l_185[0][0],&g_8,&l_185[0][4],&l_185[0][4],&g_8},{&l_185[0][0],&g_241[0][4][3],&l_185[0][0],&g_8,&l_185[0][4],&l_185[0][4],&g_8},{&l_185[0][0],&g_241[0][4][3],&l_185[0][0],&g_8,&l_185[0][4],&l_185[0][4],&g_8},{&l_185[0][0],&g_241[0][4][3],&l_185[0][0],&g_8,&l_185[0][4],&l_185[0][4],&g_8}};
        int i, j;
        --l_298;
        (**g_80) |= l_215.f4;
        return (*g_80);
    }
    return &g_241[0][4][3];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
    transparent_crc(g_68.f3, "g_68.f3", print_hash_value);
    transparent_crc(g_68.f4, "g_68.f4", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1.f0, "g_143.f1.f0", print_hash_value);
    transparent_crc(g_143.f1.f1, "g_143.f1.f1", print_hash_value);
    transparent_crc(g_143.f1.f2, "g_143.f1.f2", print_hash_value);
    transparent_crc(g_143.f1.f3, "g_143.f1.f3", print_hash_value);
    transparent_crc(g_143.f1.f4, "g_143.f1.f4", print_hash_value);
    transparent_crc(g_143.f2, "g_143.f2", print_hash_value);
    transparent_crc(g_143.f3.f0, "g_143.f3.f0", print_hash_value);
    transparent_crc(g_143.f3.f1, "g_143.f3.f1", print_hash_value);
    transparent_crc(g_143.f3.f2, "g_143.f3.f2", print_hash_value);
    transparent_crc(g_143.f4, "g_143.f4", print_hash_value);
    transparent_crc(g_146.f0, "g_146.f0", print_hash_value);
    transparent_crc(g_146.f1, "g_146.f1", print_hash_value);
    transparent_crc(g_146.f2, "g_146.f2", print_hash_value);
    transparent_crc(g_146.f3, "g_146.f3", print_hash_value);
    transparent_crc(g_146.f4, "g_146.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_241[i][j][k], "g_241[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1096.f0, "g_1096.f0", print_hash_value);
    transparent_crc(g_1096.f1, "g_1096.f1", print_hash_value);
    transparent_crc(g_1096.f2, "g_1096.f2", print_hash_value);
    transparent_crc(g_1096.f3, "g_1096.f3", print_hash_value);
    transparent_crc(g_1096.f4, "g_1096.f4", print_hash_value);
    transparent_crc(g_1236, "g_1236", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1282[i], "g_1282[i]", print_hash_value);

    }
    transparent_crc(g_1300, "g_1300", print_hash_value);
    transparent_crc(g_1389, "g_1389", print_hash_value);
    transparent_crc(g_1433, "g_1433", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1546[i], "g_1546[i]", print_hash_value);

    }
    transparent_crc(g_1838, "g_1838", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
