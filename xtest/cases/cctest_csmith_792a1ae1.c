// SPDX-License-Identifier: MIT
// cctest_csmith_792a1ae1.c --- cctest case csmith_792a1ae1 (csmith seed 2032802529)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdfa24730 */

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

// Options:   -s 2032802529 -o /tmp/csmith_gen_2poaitxi/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   const uint64_t  f1;
   int32_t  f2;
   uint16_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint64_t  f0;
   int32_t  f1;
   struct S0  f2;
   const uint32_t  f3;
};
#pragma pack(pop)

struct S3 {
   struct S0  f0;
   const struct S0  f1;
   uint8_t  f2;
   int8_t  f3;
};

struct S4 {
   int32_t  f0;
   uint64_t  f1;
};

union U5 {
   uint32_t  f0;
   uint64_t  f1;
   int16_t  f2;
};


static struct S0 g_10 = {-1L,0xAFC1DA7BC9995890LL,-1L,0x6968L};
static struct S1 g_22 = {1L,0x860BC23CL,0xA2FFL};
static const union U5 g_52 = {0x44B1310FL};
static struct S2 g_57 = {18446744073709551615UL,-10L,{1L,0UL,1L,8UL},4294967294UL};
static uint8_t g_73 = 250UL;
static struct S4 g_75 = {0x13771C77L,1UL};
static uint8_t g_92 = 3UL;
static int64_t g_119 = 0L;
static int32_t g_134 = (-7L);
static uint32_t g_148[3][3][2] = {{{0x67BC55C7L,1UL},{0x15DF2204L,0xEEED4EC5L},{0x15DF2204L,1UL}},{{0x67BC55C7L,0x15DF2204L},{1UL,0xEEED4EC5L},{0x63CAD6C9L,0x63CAD6C9L}},{{0x67BC55C7L,0x63CAD6C9L},{0x63CAD6C9L,0xEEED4EC5L},{1UL,0x15DF2204L}}};
static struct S3 g_154 = {{0x28784709L,0xD9AF42D7022298E1LL,1L,3UL},{0x435B83ECL,0xE7E9A979A3CF2E7ELL,-9L,1UL},1UL,-6L};



static int32_t  func_1(void);
static int32_t  func_4(uint32_t  p_5, uint64_t  p_6, const struct S0  p_7, uint8_t  p_8, const uint32_t  p_9);
static struct S1  func_13(uint64_t  p_14, int32_t  p_15, uint16_t  p_16, uint64_t  p_17, struct S0  p_18);
static int8_t  func_23(int32_t  p_24, int32_t  p_25, struct S4  p_26);




static int32_t  func_1(void)
{ 
    uint16_t l_21 = 0xD1EDL;
    int32_t l_120 = 0L;
    uint64_t l_144 = 0x04BF6FAEDB3878E0LL;
    struct S4 l_151 = {1L,0x3D26D1B1C2D19084LL};
    if ((safe_rshift_func_int8_t_s_u(0xCBL, 1)))
    { 
        uint32_t l_121[4];
        int32_t l_129 = 0xB3554E5FL;
        uint64_t l_130 = 5UL;
        int i;
        for (i = 0; i < 4; i++)
            l_121[i] = 0x901E9BB6L;
        l_120 |= (g_119 ^= func_4((g_10 , (safe_div_func_int32_t_s_s(((func_13(g_10.f3, g_10.f1, (safe_lshift_func_int8_t_s_u(l_21, 6)), g_10.f3, g_10) , 253UL) > l_21), 3L))), l_21, g_10, g_10.f3, g_22.f1));
        g_57.f2.f2 ^= (((++l_121[3]) | (g_73 > l_21)) < (l_130 = (((safe_mod_func_int32_t_s_s(g_57.f0, (safe_div_func_int16_t_s_s(((~2UL) > 0x6C8505D4L), l_129)))) & g_22.f1) | (-1L))));
    }
    else
    { 
        uint16_t l_136 = 1UL;
        int32_t l_145 = 0L;
        int32_t l_146 = (-1L);
        if (g_57.f2.f1)
        { 
            int8_t l_135 = (-10L);
            int32_t l_147[1][5][5] = {{{0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L,0x1BD0BA19L}}};
            int i, j, k;
            g_22.f0 = (g_73 ^ (g_75.f1 = ((safe_add_func_int16_t_s_s(((g_57.f2.f3 < (0UL > (safe_unary_minus_func_int64_t_s(((--l_136) , (safe_add_func_int64_t_s_s((g_119 = (safe_rshift_func_int8_t_s_u((l_136 < l_136), 1))), g_10.f2))))))) > 0x6E5E9EF7L), 0xF815L)) && 5L)));
            g_57.f1 = (safe_unary_minus_func_uint8_t_u((g_73 = l_144)));
            --g_148[0][2][0];
        }
        else
        { 
            for (g_10.f3 = 0; (g_10.f3 <= 1); g_10.f3 += 1)
            { 
                g_75 = l_151;
            }
        }
        g_75.f0 = (!(!((g_75.f0 , (l_151.f0 = (g_73 ^= ((g_154 , l_144) || l_146)))) >= 1UL)));
    }
    for (g_154.f0.f0 = 28; (g_154.f0.f0 >= 23); g_154.f0.f0 = safe_sub_func_uint8_t_u_u(g_154.f0.f0, 1))
    { 
        g_75.f0 = 0x1E6FE0F2L;
    }
    g_22 = g_22;
    return l_144;
}



static int32_t  func_4(uint32_t  p_5, uint64_t  p_6, const struct S0  p_7, uint8_t  p_8, const uint32_t  p_9)
{ 
    int32_t l_27 = 0x73B01729L;
    int32_t l_36 = 0xA9025B0DL;
    int32_t l_37 = (-10L);
    struct S4 l_38 = {-8L,0x4D1CD05094191B86LL};
    int32_t l_91 = 0x2BCECFDEL;
    struct S1 l_97 = {-1L,5UL,0x81D6L};
    uint16_t l_99 = 0xED61L;
    int32_t l_100 = 0xFD86C084L;
    int32_t l_101 = 4L;
    int32_t l_102 = (-1L);
    uint64_t l_103 = 6UL;
    if (((func_23(l_27, ((g_10.f3 && (safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((((safe_div_func_int32_t_s_s((g_22.f2 | (l_36 |= ((g_10.f0 != g_10.f2) > g_10.f3))), l_37)) <= g_10.f2) > g_22.f1) ^ 0x9719L), 7)), g_10.f0)), 0UL))) <= p_9), l_38) || 0L) || 4L))
    { 
        int16_t l_56[5][4][4];
        int32_t l_74 = 0L;
        int8_t l_93 = 0x1FL;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 4; k++)
                    l_56[i][j][k] = 0x9F56L;
            }
        }
        for (g_10.f0 = 3; (g_10.f0 >= 0); g_10.f0 -= 1)
        { 
            uint64_t l_82 = 0x7089988BF30E8C00LL;
            g_10.f2 |= (((g_57 , ((safe_mod_func_uint32_t_u_u((~(l_74 = (safe_sub_func_uint32_t_u_u(((g_73 |= ((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((g_22.f2 && p_7.f0), (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(5UL, l_38.f0)), 3)))), g_57.f2.f3)), 0xE84F54957FAA682DLL)) ^ 65535UL)) , 0x32CC17BCL), 0xA535ACB9L)))), l_36)) >= 0x4FD301F6L)) == l_37) || 0xC2FF03E53C530558LL);
            for (g_22.f1 = 0; (g_22.f1 <= 3); g_22.f1 += 1)
            { 
                return l_37;
            }
            g_10.f2 &= (g_57.f2.f3 & 0x570066BE38A8812ELL);
            for (l_38.f0 = 3; (l_38.f0 >= 0); l_38.f0 -= 1)
            { 
                uint16_t l_76 = 3UL;
                g_75 = g_75;
                if (l_76)
                    break;
                g_75.f0 ^= (g_10.f1 < (!(18446744073709551614UL ^ (safe_add_func_int16_t_s_s((l_36 = ((safe_div_func_int32_t_s_s((-6L), p_7.f1)) > g_57.f0)), l_82)))));
            }
        }
        l_74 = (g_22.f0 = (safe_sub_func_int8_t_s_s((l_93 = (g_92 = (((p_5 == ((func_13((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_38.f0 = (p_8 < ((safe_mod_func_int8_t_s_s(((8L < g_10.f2) & 6UL), l_56[2][2][1])) >= 65528UL))), g_57.f0)), l_91)), p_7.f2, g_57.f1, p_7.f1, g_57.f2) , l_74) & l_56[1][2][3])) == p_7.f3) | 0x21B1L))), l_74)));
    }
    else
    { 
        int16_t l_94 = 0xA57AL;
        int32_t l_98 = 0x4F1309CAL;
        l_36 = l_94;
        l_99 = (l_98 = (0x25A2E691EA77C7A1LL != (((1L & ((safe_rshift_func_int16_t_s_s(((p_5 , (l_97 , p_7.f1)) > l_37), g_73)) <= g_57.f2.f0)) || g_57.f2.f1) <= 0xD5L)));
    }
    l_103--;
    l_100 |= (g_10.f2 = ((l_97.f0 = (((safe_mul_func_int16_t_s_s(((((((((safe_add_func_uint32_t_u_u(((g_22.f2 &= (l_99 , (safe_rshift_func_int16_t_s_u((g_10 , ((((safe_rshift_func_uint16_t_u_s((~(safe_mod_func_uint16_t_u_u((g_75.f1 ^ ((safe_mul_func_uint16_t_u_u(l_27, l_36)) && 0x83CA8B6AEB2B1B5CLL)), p_8))), l_38.f1)) == 0xA0A5L) >= 7L) | g_75.f1)), 4)))) , 0UL), g_10.f2)) , g_52.f0) && 0x878EC111L) , l_36) , p_5) , l_97) , g_10.f2) <= l_97.f1), l_97.f2)) > l_36) | g_75.f1)) || 0xADF514A7L));
    return g_57.f2.f0;
}



static struct S1  func_13(uint64_t  p_14, int32_t  p_15, uint16_t  p_16, uint64_t  p_17, struct S0  p_18)
{ 
    return g_22;
}



static int8_t  func_23(int32_t  p_24, int32_t  p_25, struct S4  p_26)
{ 
    uint64_t l_41 = 0xD8D4885C3B36352BLL;
    const uint8_t l_53 = 0UL;
    int32_t l_54 = 0x6C077406L;
    int32_t l_55 = 0L;
    p_26.f0 &= (((safe_lshift_func_int16_t_s_s(l_41, ((safe_sub_func_uint64_t_u_u((g_10 , (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_55 = (safe_sub_func_uint8_t_u_u(((g_22.f0 , ((((l_54 &= (safe_mul_func_uint16_t_u_u((((g_52 , g_52) , 4UL) || 0x720FAE2361AE7D51LL), l_53))) < 9L) != l_41) && g_10.f3)) | p_25), p_26.f1))), g_52.f2)), l_41))), 0x9FD8DD93F870A655LL)) == 0x91L))) != g_10.f0) == l_53);
    p_26.f0 = 0x7D1D410AL;
    return p_26.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    transparent_crc(g_10.f3, "g_10.f3", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_57.f2.f0, "g_57.f2.f0", print_hash_value);
    transparent_crc(g_57.f2.f1, "g_57.f2.f1", print_hash_value);
    transparent_crc(g_57.f2.f2, "g_57.f2.f2", print_hash_value);
    transparent_crc(g_57.f2.f3, "g_57.f2.f3", print_hash_value);
    transparent_crc(g_57.f3, "g_57.f3", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_148[i][j][k], "g_148[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_154.f0.f0, "g_154.f0.f0", print_hash_value);
    transparent_crc(g_154.f0.f1, "g_154.f0.f1", print_hash_value);
    transparent_crc(g_154.f0.f2, "g_154.f0.f2", print_hash_value);
    transparent_crc(g_154.f0.f3, "g_154.f0.f3", print_hash_value);
    transparent_crc(g_154.f1.f0, "g_154.f1.f0", print_hash_value);
    transparent_crc(g_154.f1.f1, "g_154.f1.f1", print_hash_value);
    transparent_crc(g_154.f1.f2, "g_154.f1.f2", print_hash_value);
    transparent_crc(g_154.f1.f3, "g_154.f1.f3", print_hash_value);
    transparent_crc(g_154.f2, "g_154.f2", print_hash_value);
    transparent_crc(g_154.f3, "g_154.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
