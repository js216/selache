// SPDX-License-Identifier: MIT
// cctest_csmith_98fdf7d8.c --- cctest case csmith_98fdf7d8 (csmith seed 2566780888)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x91a2d127 */
/* @exp_ticks 0x3883 */

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

// Options:   -s 2566780888 -o /tmp/csmith_gen_qzswfm4o/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U2 {
   int8_t  f0;
   struct S0  f1;
   struct S0  f2;
   uint16_t  f3;
};

union U3 {
   const int32_t  f0;
   struct S0  f1;
};

union U4 {
   const uint64_t  f0;
};


static uint16_t g_14 = 65534UL;
static int8_t g_16 = (-7L);
static uint32_t g_17 = 0xD9E96BB6L;
static struct S0 g_27[3][5] = {{{0xB7L},{0xB7L},{0xB7L},{0xB7L},{0xB7L}},{{0x15L},{252UL},{0x15L},{252UL},{0x15L}},{{0xB7L},{0xB7L},{0xB7L},{0xB7L},{0xB7L}}};
static union U2 g_34 = {0L};
static const union U4 g_40 = {0UL};
static struct S1 g_59 = {18446744073709551614UL,7L,0x94B98F8D6FFBA4BDLL,0UL,0xD119E2D4L};
static struct S0 g_71 = {0x0FL};
static uint32_t g_76[1] = {0UL};
static uint32_t g_93[3] = {9UL,9UL,9UL};
static int8_t g_140[4] = {(-9L),(-9L),(-9L),(-9L)};
static int32_t g_143 = 0x41019322L;
static int8_t g_144 = 0x5EL;
static int32_t g_157 = 0L;



static uint32_t  func_1(void);
static struct S0  func_23(uint16_t  p_24);
static int32_t  func_28(union U2  p_29, union U3  p_30, int16_t  p_31, int64_t  p_32, const uint32_t  p_33);
static union U3  func_35(int32_t  p_36, int64_t  p_37, const union U4  p_38, uint32_t  p_39);




static uint32_t  func_1(void)
{ 
    int32_t l_4 = (-5L);
    uint8_t l_15[1][2];
    struct S1 l_134 = {5UL,0L,1UL,0x7E95F642L,-1L};
    int64_t l_158 = 0x61988898D0BA58DELL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_15[i][j] = 4UL;
    }
    if ((safe_rshift_func_int16_t_s_u(l_4, 10)))
    { 
        int16_t l_11 = 0x1AC3L;
        g_17 ^= ((safe_lshift_func_int8_t_s_u((g_16 |= (((((0xDE0184DCC80FC3A0LL == (safe_lshift_func_uint8_t_u_u(0UL, 3))) || (l_11 || (((safe_mod_func_int16_t_s_s(((((g_14 >= 0xB64DL) > l_15[0][0]) < l_11) <= 0x8BBD1883L), 3L)) < 0x300CE3D97867A7BFLL) != g_14))) , 18446744073709551606UL) > l_15[0][0]) > 0UL)), l_11)) , l_11);
    }
    else
    { 
        int16_t l_22 = 1L;
        uint64_t l_25[4];
        int i;
        for (i = 0; i < 4; i++)
            l_25[i] = 0xA2E255BB5FB49A5CLL;
        for (g_14 = (-19); (g_14 != 2); ++g_14)
        { 
            int8_t l_112 = (-2L);
            l_22 ^= ((safe_sub_func_int8_t_s_s(g_17, 0xF5L)) , g_17);
            g_27[1][1] = func_23(l_25[1]);
            if (func_28(g_34, func_35(g_14, l_4, g_40, l_4), g_40.f0, l_15[0][0], l_25[1]))
            { 
                if (g_59.f0)
                    break;
                return l_112;
            }
            else
            { 
                int8_t l_113[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_113[i] = 0xD2L;
                if (l_113[1])
                    break;
                return g_71.f0;
            }
        }
    }
    if (g_34.f2.f0)
    { 
        int64_t l_139 = 0xFC28CD2B34E314DBLL;
        int64_t l_145 = (-1L);
        int32_t l_146 = 0xC9C021E9L;
lbl_161:
        for (g_16 = 0; (g_16 <= 0); g_16 += 1)
        { 
            const uint32_t l_137 = 0x03485599L;
            for (g_71.f0 = 0; (g_71.f0 <= 0); g_71.f0 += 1)
            { 
                uint64_t l_138 = 0x60FB40517B6AFEBALL;
                int i, j;
                g_140[3] &= ((safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((func_23((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(0xDAL, (l_15[g_16][g_16] = l_15[0][0]))), ((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((l_134 , (((safe_add_func_uint32_t_u_u(l_137, g_59.f0)) != 0xF2L) , g_59.f4)), 8)) , (-1L)), g_93[1])) < l_138)))) , l_139), l_139)), 0L)), l_139)), g_27[1][1].f0)), l_4)), 2UL)) , l_137);
            }
        }
        for (g_59.f1 = 0; (g_59.f1 >= 11); g_59.f1++)
        { 
            uint32_t l_147 = 1UL;
            struct S0 l_154[2][2] = {{{6UL},{6UL}},{{6UL},{6UL}}};
            int32_t l_159 = 0xDA66330FL;
            const struct S1 l_160 = {1UL,0x63A6EC57L,0UL,1UL,1L};
            int i, j;
            l_147--;
            if ((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_154[1][1] , (((safe_mul_func_uint8_t_u_u(l_154[1][1].f0, 1L)) , ((g_157 = 0x46F7BBE7L) , l_158)) && g_143)), g_34.f0)) ^ l_159), g_17)))
            { 
                if (l_147)
                    break;
            }
            else
            { 
                uint64_t l_162 = 0x5FBE3FE1AB333187LL;
                l_134 = l_160;
                if (g_59.f1)
                    goto lbl_161;
                g_59.f4 = l_162;
            }
            for (g_34.f1.f0 = (-29); (g_34.f1.f0 <= 56); ++g_34.f1.f0)
            { 
                if (g_34.f2.f0)
                    goto lbl_161;
            }
        }
    }
    else
    { 
        union U4 l_165 = {18446744073709551615UL};
        g_143 = (l_165 , (g_140[1] < g_17));
        return g_76[0];
    }
    return g_17;
}



static struct S0  func_23(uint16_t  p_24)
{ 
    struct S0 l_26 = {255UL};
    return l_26;
}



static int32_t  func_28(union U2  p_29, union U3  p_30, int16_t  p_31, int64_t  p_32, const uint32_t  p_33)
{ 
    int64_t l_74[3][3][3] = {{{0x3D8312ED8564F5E9LL,8L,8L},{0x6586993EB33379BBLL,0xFFB082E2804CE6FALL,0xA55AEF27357609E5LL},{0x3D8312ED8564F5E9LL,0x73647B8CEE114377LL,0x3D8312ED8564F5E9LL}},{{(-1L),0x6586993EB33379BBLL,0xA55AEF27357609E5LL},{0x739A15FBE5B57573LL,0x739A15FBE5B57573LL,8L},{(-1L),0x6586993EB33379BBLL,0x6586993EB33379BBLL}},{{8L,0x739A15FBE5B57573LL,0x73647B8CEE114377LL},{0xA55AEF27357609E5LL,(-1L),0xA55AEF27357609E5LL},{8L,0x3D8312ED8564F5E9LL,0x73647B8CEE114377LL}}};
    int32_t l_79[3][2][1] = {{{0x3385642BL},{0x1402E791L}},{{0x3385642BL},{0x1402E791L}},{{0x3385642BL},{0x1402E791L}}};
    uint8_t l_80 = 9UL;
    int i, j, k;
    if ((g_76[0] |= ((g_34.f0 = (p_30.f0 || ((p_29.f2.f0 | ((l_74[2][2][1] > (((g_16 = (~((g_17 || 0x3439BF9AL) == 0xFCL))) == l_74[2][2][1]) != l_74[2][1][1])) & g_59.f4)) , 0x5754D5C1L))) >= p_33)))
    { 
        for (p_32 = (-8); (p_32 > 26); p_32 = safe_add_func_int32_t_s_s(p_32, 2))
        { 
            --l_80;
            if (p_30.f0)
                break;
        }
    }
    else
    { 
        uint64_t l_92 = 0UL;
        int32_t l_101 = 0x6B54986CL;
        int32_t l_103 = 0x2CA71060L;
        if (p_29.f0)
        { 
            return g_59.f0;
        }
        else
        { 
            int16_t l_85 = (-9L);
            int32_t l_102 = 0x111D5598L;
            uint8_t l_104 = 0xF6L;
            for (g_71.f0 = 0; (g_71.f0 == 54); g_71.f0 = safe_add_func_int32_t_s_s(g_71.f0, 4))
            { 
                int32_t l_86 = 0x2BF9DFF4L;
                if (p_30.f1.f0)
                    break;
                l_86 &= l_85;
            }
            if (p_29.f0)
            { 
                union U4 l_96[3] = {{0xBAF5A799B5C0F6DBLL},{0xBAF5A799B5C0F6DBLL},{0xBAF5A799B5C0F6DBLL}};
                int i;
                g_59.f4 = (safe_div_func_uint64_t_u_u((((+(safe_div_func_uint16_t_u_u((l_92 >= (((p_29.f0 , (1L > (((g_93[0] ^= (l_92 != p_29.f2.f0)) > 0UL) && p_33))) <= p_29.f1.f0) == 0x2FD2206DCC1A10FBLL)), g_59.f2))) , g_71.f0) | 0xF3L), 2UL));
                g_59.f4 = ((safe_div_func_uint8_t_u_u(((l_96[1] , ((!(((safe_mul_func_uint8_t_u_u((p_29.f2.f0 = ((((g_59 , p_30.f1.f0) , l_96[1].f0) > p_29.f1.f0) != g_93[1])), g_59.f0)) ^ l_92) <= p_32)) & p_31)) | g_76[0]), p_30.f0)) && p_30.f1.f0);
            }
            else
            { 
                int32_t l_100 = (-5L);
                --l_104;
                g_59.f4 = ((safe_add_func_uint32_t_u_u(0x29FA7991L, ((safe_add_func_uint32_t_u_u(9UL, (((~(p_30.f1.f0 <= 0xA0BC11C5L)) <= p_31) >= 0xB1L))) , 4294967288UL))) & l_92);
                l_102 = l_103;
            }
        }
        return p_29.f2.f0;
    }
    return l_74[2][2][1];
}



static union U3  func_35(int32_t  p_36, int64_t  p_37, const union U4  p_38, uint32_t  p_39)
{ 
    uint32_t l_41 = 0xE2192FE2L;
    const struct S0 l_49 = {0x89L};
    int32_t l_50 = 4L;
    const int32_t l_51 = (-1L);
    int32_t l_52 = 9L;
    struct S1 l_55[4] = {{1UL,1L,0xC79A83ADAB8F5B6ELL,1UL,0x579AB673L},{1UL,1L,0xC79A83ADAB8F5B6ELL,1UL,0x579AB673L},{1UL,1L,0xC79A83ADAB8F5B6ELL,1UL,0x579AB673L},{1UL,1L,0xC79A83ADAB8F5B6ELL,1UL,0x579AB673L}};
    union U2 l_61 = {-1L};
    union U3 l_73 = {0x198F9F05L};
    int i;
lbl_72:
    l_41--;
    if ((l_52 = (l_41 & (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((p_36 || ((((g_14 & (l_50 |= ((+(l_49 , g_34.f1.f0)) > g_14))) && 0x7B8AL) < l_41) > l_51)) || 0x95L), 8)), 15)))))
    { 
        const int16_t l_60 = (-2L);
        struct S0 l_62 = {246UL};
        int16_t l_67[5];
        int i;
        for (i = 0; i < 5; i++)
            l_67[i] = (-1L);
        for (g_17 = 0; (g_17 == 9); ++g_17)
        { 
            l_55[1] = l_55[1];
            for (g_16 = 19; (g_16 <= 28); g_16 = safe_add_func_int16_t_s_s(g_16, 2))
            { 
                struct S1 l_58 = {0UL,0x4C7B934CL,18446744073709551615UL,18446744073709551615UL,0x60F1475AL};
                g_59 = l_58;
                l_62 = func_23(((l_60 , l_61) , p_37));
            }
            for (l_41 = 14; (l_41 <= 32); l_41 = safe_add_func_uint32_t_u_u(l_41, 8))
            { 
                int32_t l_68 = (-2L);
                g_59.f4 = (safe_sub_func_int64_t_s_s(p_36, (((0x0C8B8AFECA80087DLL && l_67[0]) < (l_68 > 0x26019FDEE1321855LL)) <= g_59.f0)));
            }
        }
        g_71 = func_23((safe_add_func_uint64_t_u_u(((p_39 < (p_38.f0 > g_34.f2.f0)) | g_34.f0), g_59.f4)));
    }
    else
    { 
        if (l_61.f1.f0)
            goto lbl_72;
    }
    return l_73;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_27[i][j].f0, "g_27[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1.f0, "g_34.f1.f0", print_hash_value);
    transparent_crc(g_34.f2.f0, "g_34.f2.f0", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_59.f4, "g_59.f4", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_93[i], "g_93[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);

    }
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
