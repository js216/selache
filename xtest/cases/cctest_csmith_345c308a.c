// SPDX-License-Identifier: MIT
// cctest_csmith_345c308a.c --- cctest case csmith_345c308a (csmith seed 878456970)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2fbd0fe3 */

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

// Options:   -s 878456970 -o /tmp/csmith_gen_jb1qga1a/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
   int32_t  f2;
   const uint8_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint64_t  f0;
   const uint32_t  f1;
   int16_t  f2;
   int64_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int64_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

struct S3 {
   const int64_t  f0;
   const int16_t  f1;
   uint32_t  f2;
   uint8_t  f3;
};

union U4 {
   uint64_t  f0;
   uint64_t  f1;
   struct S3  f2;
};


static uint16_t g_9 = 0x0B44L;
static uint16_t g_13 = 0x82E7L;
static struct S2 g_22 = {-1L,0xC87778E1L};
static int32_t g_40 = (-3L);
static uint8_t g_41 = 0xD6L;
static struct S3 g_53 = {0xE78DE61175C875FFLL,2L,7UL,255UL};
static uint32_t g_54 = 0xE65120B8L;
static int16_t g_56 = 0L;
static const struct S2 g_79 = {0x0E9B690C290A7FA1LL,0x718AF62FL};
static uint32_t g_103[5] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL};
static uint32_t g_110 = 0x93F4BB62L;
static union U4 g_115 = {7UL};
static struct S2 g_119 = {1L,0xFCF45A8FL};
static uint32_t g_136 = 0x99855EAAL;
static struct S1 g_182[2] = {{0x54FBC6739B9925D8LL,0xB3311CE5L,0L,0xCD2030A4445ADC8ALL},{0x54FBC6739B9925D8LL,0xB3311CE5L,0L,0xCD2030A4445ADC8ALL}};
static uint16_t g_197 = 65527UL;
static uint64_t g_206[2][3][2] = {{{0x541AD1FF961AB1BALL,0x541AD1FF961AB1BALL},{0x40A8872ADFB2AA1FLL,0x541AD1FF961AB1BALL},{0x541AD1FF961AB1BALL,0x40A8872ADFB2AA1FLL}},{{0x541AD1FF961AB1BALL,0x541AD1FF961AB1BALL},{0x40A8872ADFB2AA1FLL,0x541AD1FF961AB1BALL},{0x541AD1FF961AB1BALL,0x40A8872ADFB2AA1FLL}}};
static uint32_t g_220 = 0x26ACF659L;
static struct S0 g_227 = {1UL,-6L,0xC875A03AL,247UL};
static int32_t g_263 = 0x7FCBA1A6L;
static int32_t g_264 = 0L;
static int64_t g_266 = 0xAEEF7D3C1AD6298BLL;
static uint16_t g_267[2] = {0xEF0EL,0xEF0EL};
static int8_t g_303 = (-1L);
static uint64_t g_305 = 0x92019EF7956898F9LL;
static uint8_t g_316[1] = {8UL};
static uint16_t g_319 = 5UL;



static struct S0  func_1(void);
static int32_t  func_14(uint8_t  p_15, struct S2  p_16, uint32_t  p_17, uint32_t  p_18, uint64_t  p_19);
static uint32_t  func_23(uint8_t  p_24);
static const struct S2  func_25(uint64_t  p_26, uint16_t  p_27);




static struct S0  func_1(void)
{ 
    int32_t l_4 = 0xC40ED3C1L;
    uint8_t l_12 = 254UL;
    uint64_t l_20 = 18446744073709551608UL;
    struct S2 l_21 = {0x6255D580090AE735LL,0x84225189L};
    int8_t l_198 = (-1L);
    int32_t l_304 = 1L;
    int16_t l_314 = (-6L);
    int32_t l_344 = 5L;
    struct S0 l_345 = {0xA085F5C8L,2L,0x0442118AL,251UL};
    g_13 = (((safe_sub_func_uint64_t_u_u(l_4, (safe_rshift_func_uint16_t_u_s(0x012DL, 12)))) , (((safe_div_func_int32_t_s_s((g_9 <= (safe_mul_func_int8_t_s_s(g_9, 246UL))), g_9)) > l_4) | l_12)) < g_9);
    if (func_14(l_20, (g_22 = l_21), (g_197 ^= func_23(g_13)), l_12, l_198))
    { 
        int16_t l_203 = (-1L);
        int32_t l_204 = 0xAFCB3562L;
        int32_t l_205 = 1L;
        struct S0 l_225 = {4294967287UL,0L,1L,0x38L};
        int64_t l_226 = 0x4C1B82195782F34ELL;
        for (g_54 = 0; (g_54 < 41); g_54 = safe_add_func_int16_t_s_s(g_54, 7))
        { 
            int64_t l_201 = 0xB092B1045D44334FLL;
            int32_t l_202 = 0xA35959F2L;
            g_206[0][0][1]--;
        }
        for (l_203 = 0; (l_203 <= 1); l_203 += 1)
        { 
            int32_t l_211 = 0L;
            const int32_t l_221 = 2L;
            g_40 ^= 0L;
            for (l_20 = 0; (l_20 <= 1); l_20 += 1)
            { 
                int i;
                g_40 = ((safe_sub_func_int64_t_s_s((((--g_9) > ((g_182[0] , (safe_mul_func_int8_t_s_s(0x15L, (safe_lshift_func_uint8_t_u_s(g_103[(l_203 + 3)], 7))))) & ((safe_lshift_func_uint16_t_u_s((((((((((l_211 = ((g_54 , g_220) != 0x9AB5L)) , g_136) < g_103[0]) == g_79.f1) <= g_103[(l_203 + 3)]) == l_221) != 0x9375EC8FL) == g_103[(l_203 + 3)]) ^ g_103[(l_203 + 3)]), g_206[0][0][1])) < 0xCE40L))) == 0xA2L), g_103[(l_203 + 3)])) | g_110);
                if (l_203)
                    break;
            }
            for (l_20 = 0; (l_20 <= 1); l_20 += 1)
            { 
                uint64_t l_222 = 0x6C36F7E94529B3CDLL;
                l_226 &= (((l_4 ^= l_222) != (safe_add_func_uint8_t_u_u((4L || (((l_225 , l_203) , l_211) & l_225.f0)), g_53.f3))) & 0x99L);
                if (g_115.f0)
                    break;
                return g_227;
            }
        }
        if (((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((l_225.f3 & ((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((l_204 |= (safe_rshift_func_uint8_t_u_s((l_225.f1 >= ((((g_53.f3 &= ((g_53.f0 , (((0UL > 0x7551396696816D0BLL) && g_103[1]) && l_226)) || g_119.f1)) != l_205) || l_21.f0) < l_205)), g_206[0][0][1]))), g_53.f0)) < g_227.f1) , 0L), l_225.f3)) < 2L)), 4)) > l_12) , 0L), 5)) && g_103[0]))
        { 
            for (l_198 = (-28); (l_198 > (-23)); ++l_198)
            { 
                if (g_53.f0)
                    break;
                g_227.f1 |= g_136;
            }
        }
        else
        { 
            int64_t l_246[3];
            int8_t l_247 = 0xA8L;
            int8_t l_256 = 0xCDL;
            int32_t l_258 = 0x935BCD32L;
            int32_t l_265 = 1L;
            uint64_t l_270 = 0x0EC6072FB50480B2LL;
            int i;
            for (i = 0; i < 3; i++)
                l_246[i] = 0xD16BD2D8D44CAB2CLL;
            if (((safe_sub_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((((l_226 || (((safe_lshift_func_uint8_t_u_s(g_220, 4)) >= l_21.f1) && l_12)) < l_246[0]) <= g_53.f0), 2UL)) && g_9), l_247)) & 0xF017ECE4L))
            { 
                int32_t l_257[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_257[i] = (-9L);
                g_40 = ((l_258 |= (((((g_182[0] , 1UL) ^ ((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_204 = l_225.f0), (((safe_sub_func_int16_t_s_s(((g_136 != l_256) , (-3L)), l_257[0])) == g_53.f0) || g_206[0][0][1]))), 0x880EL)), l_257[0])) , 254UL)) || l_246[0]) , l_20) <= g_182[0].f0)) || l_198);
                g_227.f1 = (g_182[1] , l_246[1]);
            }
            else
            { 
                int64_t l_261 = 0L;
                int32_t l_262 = (-1L);
                l_262 &= ((safe_mul_func_int16_t_s_s((g_56 = (l_12 >= ((l_261 ^ 0L) <= g_22.f0))), l_261)) < l_4);
                g_267[0]++;
                ++l_270;
            }
        }
    }
    else
    { 
        uint16_t l_285 = 0xB346L;
        int32_t l_286[3];
        struct S3 l_287 = {-3L,-9L,0x9F9E3E25L,0xA6L};
        struct S2 l_339 = {-4L,4294967290UL};
        int i;
        for (i = 0; i < 3; i++)
            l_286[i] = 0x2B155557L;
        for (g_266 = 1; (g_266 >= 0); g_266 -= 1)
        { 
            int32_t l_277 = 0xB4554AD1L;
            int32_t l_302 = 0xD0B388C1L;
            if ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_277, 3)), 7)))
            { 
                int32_t l_279[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_279[i] = 0x22A849F0L;
                l_286[0] = (((((~l_279[0]) && (g_41 && ((safe_div_func_uint32_t_u_u((+(safe_mul_func_uint16_t_u_u(65535UL, (g_56 = (g_182[0].f3 , 9L))))), l_285)) , 0xF94DL))) & l_279[0]) , 0x8506E6F45A59E427LL) == 0xE4CA516F9BB1D7BBLL);
                g_40 |= ((l_287 , 1UL) ^ (safe_lshift_func_int8_t_s_u((((((safe_mod_func_uint16_t_u_u((((l_198 | (safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((g_119.f0 = (safe_sub_func_uint32_t_u_u((g_227.f0 = (safe_add_func_uint8_t_u_u((g_266 , l_20), 0xFAL))), l_287.f3))) , l_277), g_182[0].f2)) && l_198), g_115.f1)) ^ g_53.f0), g_22.f1))) != 0x92L) & g_103[2]), g_197)) && l_279[0]) , g_206[0][0][1]) > g_22.f1) >= g_227.f1), 2)));
                g_263 = l_277;
            }
            else
            { 
                int32_t l_315 = 0xA6314827L;
                --g_305;
                l_277 = (((g_119.f1++) | ((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(l_314, g_227.f1)), 5)) & ((g_119.f0 | (((8L > l_315) > l_314) , g_53.f0)) | (-4L)))) , l_277);
                --g_316[0];
            }
            for (l_304 = 1; (l_304 >= 0); l_304 -= 1)
            { 
                g_319++;
                if (g_303)
                    break;
            }
            l_302 = (g_227.f1 |= (safe_sub_func_uint32_t_u_u(((((safe_add_func_uint16_t_u_u(65529UL, (safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_div_func_uint16_t_u_u((l_277 |= l_287.f2), (~(0x2BEAC055L & (safe_mod_func_uint64_t_u_u(18446744073709551615UL, l_302)))))) && l_287.f0) == g_79.f0), 4)) || l_21.f0), l_198)))) <= g_182[0].f2) && l_198) && g_303), l_21.f1)));
            for (g_40 = 1; (g_40 >= 0); g_40 -= 1)
            { 
                if (g_103[2])
                    break;
                return g_227;
            }
        }
        l_339 = func_25((safe_div_func_int16_t_s_s(((g_115.f1 = g_79.f0) & (safe_lshift_func_int16_t_s_s(g_56, 13))), g_316[0])), g_119.f0);
        for (g_227.f0 = 0; (g_227.f0 <= 1); g_227.f0 += 1)
        { 
            int i;
            l_286[g_227.f0] = ((g_267[g_227.f0] , (safe_mul_func_int8_t_s_s((((((((-5L) > (((safe_mod_func_int8_t_s_s((l_21.f0 && 0xC458L), (-1L))) >= 65535UL) != 1L)) && 0xFC6CF099D6D3E383LL) , 0x3F14258210A6BC44LL) , l_304) | 9L) & g_182[0].f2), 0x2DL))) , l_344);
        }
    }
    return l_345;
}



static int32_t  func_14(uint8_t  p_15, struct S2  p_16, uint32_t  p_17, uint32_t  p_18, uint64_t  p_19)
{ 
    return p_16.f1;
}



static uint32_t  func_23(uint8_t  p_24)
{ 
    int64_t l_36 = (-5L);
    int8_t l_37 = 0x6CL;
    struct S2 l_196 = {-1L,7UL};
    l_196 = func_25((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(l_36, l_36)) , (((l_37 && (safe_div_func_int8_t_s_s((g_9 == p_24), p_24))) & 1UL) && 0x2AL)), p_24)), 0)) <= g_13) ^ l_37), p_24)), p_24);
    return g_182[0].f1;
}



static const struct S2  func_25(uint64_t  p_26, uint16_t  p_27)
{ 
    uint8_t l_44 = 0x99L;
    int32_t l_55 = 5L;
    const struct S2 l_58 = {0xA82FB3486B686461LL,0x90BCC9DFL};
    uint32_t l_59[1][5][2] = {{{0x7B986AF2L,0x7B986AF2L},{0x7B986AF2L,0x7B986AF2L},{0x7B986AF2L,0x7B986AF2L},{0x7B986AF2L,0x7B986AF2L},{0x7B986AF2L,0x7B986AF2L}}};
    struct S3 l_101 = {-2L,0x5547L,0xA06C62CFL,8UL};
    int32_t l_105 = 0x44D68867L;
    int32_t l_162[2];
    uint8_t l_193 = 255UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_162[i] = 0xF18482C9L;
    ++g_41;
    if (l_44)
    { 
        uint16_t l_50 = 0x8B29L;
        int32_t l_57 = 0x7CCF76E5L;
        if (((l_44 | (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((((safe_rshift_func_int16_t_s_s(l_50, 12)) & ((((((l_55 = ((safe_div_func_int64_t_s_s(0x2E9D3B05E2623EE1LL, (g_54 = (g_53 , p_26)))) , g_53.f2)) <= 0x999369E1L) ^ g_9) <= 255UL) != g_56) >= g_53.f2)) == g_53.f3) ^ 0x74C89AEDL))), p_27))) > l_50))
        { 
            l_57 = l_55;
            return l_58;
        }
        else
        { 
            struct S2 l_61 = {1L,0xBC0A0867L};
            int32_t l_78 = 7L;
lbl_80:
            for (p_26 = 0; (p_26 <= 0); p_26 += 1)
            { 
                struct S2 l_60[4] = {{0x73394210AB9CA246LL,4294967287UL},{0x73394210AB9CA246LL,4294967287UL},{0x73394210AB9CA246LL,4294967287UL},{0x73394210AB9CA246LL,4294967287UL}};
                int i;
                l_61 = l_60[0];
                l_78 |= (g_40 = (safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((((!(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((0xF9L & (((1L && 0x778C533BL) < ((!(l_57 = (safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(g_40, l_61.f1)) == g_53.f1) <= 0UL), 0x668E5470L)))) < 0x2894906A58E0DE0CLL)) != l_58.f0)), 2)) <= 0x57L), 3)) | p_27) , 1L)) ^ g_56) > 0x2FL), 11)), p_26)) > l_50), g_53.f2)));
            }
            if (l_57)
            { 
                l_55 = p_27;
                return g_79;
            }
            else
            { 
                if (l_58.f0)
                    goto lbl_80;
                g_40 |= ((((l_58.f1 , (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0L, (~l_78))), ((((0UL <= l_44) != 9L) ^ p_27) , 1L)))) < l_59[0][1][0]) < p_27) | g_56);
            }
        }
    }
    else
    { 
        int64_t l_102 = 0x0E7A36831ADEC5ABLL;
        int32_t l_104[5][1];
        int8_t l_194[3];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_104[i][j] = 0x38594573L;
        }
        for (i = 0; i < 3; i++)
            l_194[i] = 0x88L;
        for (p_27 = 0; (p_27 >= 20); p_27 = safe_add_func_int32_t_s_s(p_27, 5))
        { 
            struct S2 l_88 = {0L,4294967291UL};
            l_88 = l_58;
            g_40 = (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((((((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((g_79 , (l_104[4][0] &= (safe_add_func_uint8_t_u_u((g_53.f2 , (safe_rshift_func_int8_t_s_s((l_101 , (l_55 = ((g_103[0] |= l_102) == g_40))), p_27))), l_88.f1)))) <= g_79.f1), g_53.f2)), g_53.f3)) , g_103[3]) & l_44) , 0x361DE361L) > l_105) > 0UL), g_40)), l_102));
            if (p_26)
                break;
        }
        if (g_103[0])
        { 
            uint16_t l_106 = 0UL;
            int32_t l_109 = 1L;
            int32_t l_127[1][5] = {{(-2L),(-2L),(-2L),(-2L),(-2L)}};
            int i, j;
            l_106++;
            g_110++;
            if ((safe_add_func_int8_t_s_s(p_27, (g_115 , ((g_56 ^= (safe_rshift_func_int16_t_s_s((l_59[0][1][0] >= 0x0AL), p_27))) < 0xE8F0L)))))
            { 
                return l_58;
            }
            else
            { 
                struct S2 l_118 = {-1L,0UL};
                struct S0 l_120 = {0x0CF43AC6L,0xAB63E390L,1L,0UL};
                g_119 = l_118;
                g_40 = ((((l_55 = (l_120 , ((g_119.f0 |= ((l_59[0][0][1] & ((((safe_add_func_uint16_t_u_u((p_27 = l_120.f0), ((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(p_26, 2)) | l_104[4][0]), 4294967295UL)) >= l_120.f0))) , l_127[0][3]) , 0xA4L) > 0xC6L)) == l_118.f1)) >= l_120.f1))) & g_53.f1) < 0UL) , l_120.f3);
                g_40 = (4294967290UL != ((p_26 < ((p_26 , (safe_lshift_func_int8_t_s_s((-1L), g_103[2]))) <= p_26)) || p_27));
            }
        }
        else
        { 
            int16_t l_147 = 0x2505L;
            const int32_t l_148[1][4][3] = {{{0L,0L,0L},{1L,1L,1L},{0L,0L,0L},{1L,1L,1L}}};
            int32_t l_163 = 0xE65A55B7L;
            int i, j, k;
            for (g_13 = 0; (g_13 >= 31); g_13++)
            { 
                l_104[4][0] = g_115.f1;
            }
            if ((((((((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((g_136--), g_9)), l_55)) , (safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(g_53.f3, (g_103[4] = (safe_mod_func_uint64_t_u_u(p_26, g_79.f0))))) < l_147), l_148[0][2][1])) && p_27), 0x2B42947BL))) & 0x76A8L) , 4UL) & 0xE60E50EEE4F3F740LL) < g_54) || g_56))
            { 
                uint32_t l_149 = 0x741B6539L;
                struct S0 l_152[4][5] = {{{0x5E69E21DL,0L,0xDC662D5AL,0xF6L},{1UL,0x397C00CBL,0L,1UL},{1UL,0x397C00CBL,0L,1UL},{0x5E69E21DL,0L,0xDC662D5AL,0xF6L},{1UL,0x397C00CBL,0L,1UL}},{{0x5E69E21DL,0L,0xDC662D5AL,0xF6L},{0x5E69E21DL,0L,0xDC662D5AL,0xF6L},{4294967292UL,0x6D92668AL,-1L,255UL},{0x5E69E21DL,0L,0xDC662D5AL,0xF6L},{0x5E69E21DL,0L,0xDC662D5AL,0xF6L}},{{1UL,0x397C00CBL,0L,1UL},{0x5E69E21DL,0L,0xDC662D5AL,0xF6L},{1UL,0x397C00CBL,0L,1UL},{1UL,0x397C00CBL,0L,1UL},{0x5E69E21DL,0L,0xDC662D5AL,0xF6L}},{{0x5E69E21DL,0L,0xDC662D5AL,0xF6L},{1UL,0x397C00CBL,0L,1UL},{1UL,0x397C00CBL,0L,1UL},{0x5E69E21DL,0L,0xDC662D5AL,0xF6L},{1UL,0x397C00CBL,0L,1UL}}};
                int32_t l_153[1][2][5];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_153[i][j][k] = 1L;
                    }
                }
                l_149 = 0x2C827C01L;
                g_40 = (g_103[0] != p_26);
                l_153[0][0][0] &= ((-1L) == (safe_div_func_int32_t_s_s(((l_152[2][1] , (l_149 ^ (((p_26 | 0xC5FBL) & 1UL) >= g_41))) == (-1L)), l_152[2][1].f1)));
            }
            else
            { 
                uint8_t l_160 = 0x60L;
                int32_t l_161 = 0x6B3F0A27L;
                l_163 = (((p_27 <= (l_162[0] = ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_26, (-10L))), (l_161 |= (l_55 = ((safe_add_func_uint64_t_u_u((p_27 | 0xDBL), l_160)) < g_56))))) & g_13))) , g_56) & (-6L));
            }
            l_163 |= ((l_104[4][0] = p_26) , ((l_104[1][0] = g_40) == (0x2917L == ((safe_mod_func_int16_t_s_s(p_26, 7L)) == l_58.f0))));
        }
        if (((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((p_26 | (safe_mod_func_int16_t_s_s(p_27, (safe_mul_func_int16_t_s_s((((-5L) ^ ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(0x697FC644L, p_26)) & g_119.f1), l_104[0][0])) < g_115.f0)) == p_27), g_56))))), 5)) != p_26), p_26)) > l_58.f0))
        { 
            int16_t l_185 = 1L;
            g_40 = ((p_27 = (g_13 = p_27)) | ((((((((safe_add_func_uint32_t_u_u((g_182[0] , (safe_lshift_func_int8_t_s_s(0x2CL, (l_162[0] = l_185)))), l_101.f0)) < 0xA8L) > p_26) , 0x5E34L) && l_104[3][0]) ^ 0xD4A109FDL) < 3UL) >= g_53.f1));
        }
        else
        { 
            uint8_t l_195 = 0xB1L;
            l_195 = (safe_mod_func_int64_t_s_s((+(g_182[0].f3 ^= (p_27 , ((((((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(9L, (1L < (l_194[2] = l_193)))), 1L)) || g_53.f2) > g_40) , g_110) != g_53.f0) != g_182[0].f1)))), g_103[0]));
        }
    }
    return l_58;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
    transparent_crc(g_53.f2, "g_53.f2", print_hash_value);
    transparent_crc(g_53.f3, "g_53.f3", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_103[i], "g_103[i]", print_hash_value);

    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_182[i].f0, "g_182[i].f0", print_hash_value);
        transparent_crc(g_182[i].f1, "g_182[i].f1", print_hash_value);
        transparent_crc(g_182[i].f2, "g_182[i].f2", print_hash_value);
        transparent_crc(g_182[i].f3, "g_182[i].f3", print_hash_value);

    }
    transparent_crc(g_197, "g_197", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_206[i][j][k], "g_206[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_227.f2, "g_227.f2", print_hash_value);
    transparent_crc(g_227.f3, "g_227.f3", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_267[i], "g_267[i]", print_hash_value);

    }
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_316[i], "g_316[i]", print_hash_value);

    }
    transparent_crc(g_319, "g_319", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
