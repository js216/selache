// SPDX-License-Identifier: MIT
// cctest_csmith_f41a68af.c --- cctest case csmith_f41a68af (csmith seed 4095371439)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30502003 */

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

// Options:   -s 4095371439 -o /tmp/csmith_gen_s64husok/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int8_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   struct S0  f1;
};


static uint64_t g_8 = 18446744073709551615UL;
static uint32_t g_30 = 0x609E820FL;
static uint8_t g_32 = 1UL;
static int64_t g_53 = 0x06571F67B260EC62LL;
static int32_t g_76 = 1L;
static uint8_t g_105 = 0xFDL;
static int16_t g_135 = 0x403EL;
static int16_t g_136 = 1L;
static uint64_t g_149[2][3][1] = {{{0xB759A07A57FB1E3ALL},{0x9ED47904A2F46FD7LL},{0xB759A07A57FB1E3ALL}},{{0x9ED47904A2F46FD7LL},{0xB759A07A57FB1E3ALL},{0x9ED47904A2F46FD7LL}}};
static int8_t g_153 = 0x78L;
static union U1 g_167 = {{0xBEC88D1BL,0xA0L,0x750EE913L}};
static uint64_t g_175 = 0xE466303744F0CC1BLL;
static uint64_t g_206 = 0UL;



static uint8_t  func_1(void);
static struct S0  func_2(uint64_t  p_3, uint16_t  p_4, int32_t  p_5, const uint32_t  p_6, uint64_t  p_7);
static int8_t  func_13(int64_t  p_14, int32_t  p_15, int32_t  p_16, uint32_t  p_17, const int32_t  p_18);
static uint64_t  func_37(int32_t  p_38);




static uint8_t  func_1(void)
{ 
    const int64_t l_21 = 0x3403CA955A63A74ALL;
    uint32_t l_22 = 1UL;
    uint8_t l_219 = 0x5BL;
    g_167.f1 = func_2(g_8, (((((safe_add_func_int32_t_s_s((g_8 <= ((safe_lshift_func_uint16_t_u_s((g_8 >= func_13((((safe_rshift_func_uint8_t_u_u(((((l_21 && g_8) <= 0xEEL) , g_8) < l_21), l_21)) == 255UL) | g_8), g_8, l_22, g_8, g_8)), l_21)) || l_21)), l_22)) < g_76) <= l_219) <= g_76) ^ 1L), g_8, l_22, g_76);
    return l_22;
}



static struct S0  func_2(uint64_t  p_3, uint16_t  p_4, int32_t  p_5, const uint32_t  p_6, uint64_t  p_7)
{ 
    int64_t l_220 = (-1L);
    uint64_t l_221 = 5UL;
    struct S0 l_224 = {-1L,0x13L,6L};
    ++l_221;
    return l_224;
}



static int8_t  func_13(int64_t  p_14, int32_t  p_15, int32_t  p_16, uint32_t  p_17, const int32_t  p_18)
{ 
    int32_t l_25[5][4] = {{(-4L),0x7E318B47L,0xAE65C342L,0x7E318B47L},{0x7E318B47L,2L,0xAE65C342L,0xAE65C342L},{(-4L),(-4L),0x7E318B47L,0xAE65C342L},{0xE6286C8AL,2L,0xE6286C8AL,0x7E318B47L},{0xE6286C8AL,0x7E318B47L,0x7E318B47L,0xE6286C8AL}};
    int32_t l_52 = 0xD5D2985DL;
    int32_t l_191 = 1L;
    int i, j;
    for (p_15 = 16; (p_15 > 11); p_15--)
    { 
        return g_8;
    }
    for (p_15 = 3; (p_15 >= 0); p_15 -= 1)
    { 
        int64_t l_28 = (-1L);
        int32_t l_29 = (-3L);
        if (((g_8 ^ (l_25[0][1] , (l_29 = (safe_rshift_func_uint8_t_u_s(l_28, 1))))) | (0x43L & 0L)))
        { 
            int32_t l_31 = 0x5C6F0D60L;
            l_29 = (((g_30 = (g_8 != (0UL <= 3L))) != ((l_25[0][0] , 1L) , 0x4965DA1F7977F45ALL)) && 0x3196L);
            --g_32;
            if ((safe_sub_func_uint64_t_u_u(func_37(((safe_mul_func_uint8_t_u_u((l_52 = ((((((safe_add_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(((((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_17, l_31)), (safe_add_func_uint64_t_u_u(((+p_14) > (l_29 , (-8L))), g_30)))) <= (-1L)) != g_8) == g_32), g_32)) == l_31), g_32)) != g_30) <= l_31) , g_32) < g_8) >= 0x066EL)), g_30)) < g_53)), 18446744073709551615UL)))
            { 
                int64_t l_180 = (-9L);
                p_16 = (safe_add_func_uint8_t_u_u((l_180 = 255UL), ((0xE3D3D57EL && (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(p_14, ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(g_149[1][2][0], 1)), p_17)) | l_29))) , l_25[4][3]), l_52)) == p_14), l_191))) >= g_167.f1.f0)));
                if (p_16)
                    continue;
                p_16 = (safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(0xE1L, (((l_31 || (safe_mod_func_uint8_t_u_u(l_52, 0xFFL))) == p_17) > g_167.f0.f1))), l_31)), 2L));
            }
            else
            { 
                int8_t l_202[2][3][4] = {{{0x58L,0x35L,(-1L),0x35L},{0x35L,(-1L),(-1L),(-1L)},{0x58L,0x58L,0x35L,(-1L)}},{{0xFEL,(-1L),0xFEL,0x35L},{0xFEL,0x35L,0x35L,0xFEL},{0x35L,0xFEL,(-1L),0xFEL}}};
                int32_t l_203[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_203[i] = 1L;
                if (p_17)
                    break;
                l_203[0] = (p_16 = ((1L >= (p_18 <= (g_149[0][1][0] >= (safe_mod_func_uint16_t_u_u(l_202[0][1][1], l_191))))) , p_15));
            }
        }
        else
        { 
            for (g_153 = 3; (g_153 >= 0); g_153 -= 1)
            { 
                uint8_t l_204 = 0x87L;
                p_16 &= l_204;
                if (p_14)
                    break;
            }
            for (l_29 = 3; (l_29 >= 0); l_29 -= 1)
            { 
                int32_t l_205 = 0xE9961A22L;
                int32_t l_217 = (-1L);
                --g_206;
                g_167.f0.f2 = (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0x8625L, 2)), (p_17 > (l_217 ^= l_29)))), (l_29 , 0x7AL))), p_17));
            }
        }
        for (g_30 = 0; (g_30 <= 3); g_30 += 1)
        { 
            int16_t l_218 = 4L;
            l_29 ^= (l_218 |= p_15);
            for (l_218 = 3; (l_218 >= 0); l_218 -= 1)
            { 
                if (p_17)
                    break;
            }
            for (p_17 = 0; (p_17 <= 3); p_17 += 1)
            { 
                if (p_17)
                    break;
                return g_149[1][2][0];
            }
        }
    }
    return l_191;
}



static uint64_t  func_37(int32_t  p_38)
{ 
    union U1 l_56[3][4][1] = {{{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}}},{{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}}},{{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}},{{{1L,0x42L,0L}}}}};
    int32_t l_61[1];
    int32_t l_104 = 0xC7924425L;
    int32_t l_106 = 0L;
    uint32_t l_133 = 18446744073709551615UL;
    uint64_t l_148 = 0x8C06C6856C279493LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_61[i] = 0x666C839CL;
    l_61[0] ^= (g_32 >= ((g_32 == (((((safe_sub_func_uint8_t_u_u((l_56[1][1][0] , (l_56[1][1][0].f0.f2 = ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(g_30, 4)) <= g_30), p_38)) ^ p_38))), 0x1BL)) | 0UL) , 0x5592ED99L) <= 4294967286UL) , g_32)) <= (-7L)));
lbl_85:
    if ((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((l_61[0] = (safe_rshift_func_uint16_t_u_s(p_38, p_38))), g_32)) , ((safe_rshift_func_int8_t_s_u(((p_38 , g_8) , l_61[0]), p_38)) > g_53)), p_38)))
    { 
        int16_t l_82 = (-3L);
        uint16_t l_83 = 65535UL;
        int32_t l_84 = (-6L);
        for (g_30 = 0; (g_30 < 8); g_30 = safe_add_func_int8_t_s_s(g_30, 2))
        { 
            int16_t l_81 = (-2L);
            l_84 = (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((l_83 |= (g_8 | (((((0xA9B06ECFL != ((g_76 ^ (safe_add_func_int32_t_s_s(((((safe_mod_func_int64_t_s_s(l_81, l_56[1][1][0].f0.f2)) >= g_8) ^ l_61[0]) >= p_38), 4294967293UL))) == p_38)) >= p_38) == l_82) | p_38) <= 0x5E7B382EL))), p_38)), 7));
            if (p_38)
                continue;
            if (l_83)
                goto lbl_85;
        }
    }
    else
    { 
        return g_30;
    }
    if (((safe_div_func_int64_t_s_s(0xE4A26432604E4D2DLL, (safe_div_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((g_105 &= (safe_mod_func_int8_t_s_s((l_104 = (l_61[0] = (g_8 || (safe_sub_func_int16_t_s_s((l_56[1][1][0].f1.f2 = (l_56[1][1][0] , (safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_56[1][1][0].f0.f1, 0x507BL)) <= p_38), p_38)), p_38)))), 1L))))), 0x8FL))), l_106)) , l_56[1][1][0].f1.f1) > p_38), g_8)) , 18446744073709551608UL), l_106)))) < 0xBF2B79F9L))
    { 
        uint32_t l_131[2][2][3] = {{{8UL,8UL,8UL},{7UL,0UL,7UL}},{{8UL,8UL,8UL},{7UL,0UL,7UL}}};
        int32_t l_134 = (-2L);
        int i, j, k;
        if (g_53)
        { 
            int32_t l_132 = (-1L);
            g_136 = ((l_61[0] = (safe_add_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(p_38, 14)) >= (g_135 = ((safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((-1L), 2)), 0xFEEDL)) && (safe_rshift_func_uint16_t_u_u((l_134 = ((safe_mod_func_int32_t_s_s(((((((safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((g_105++), (((l_131[1][0][1] = g_30) < 0x345EL) ^ l_132))) , l_133), 0x21L)) == 0x7340CD4C676C2307LL) | 0x73L) >= (-1L)) || 0L) > p_38), p_38)) , 0xE657L)), 12))) || 8UL), (-1L))) ^ g_32), l_132)) != g_8))) == g_76), p_38))) <= g_53);
        }
        else
        { 
            int16_t l_150 = 0x48BDL;
            union U1 l_168 = {{0xE00C6155L,0xFBL,0L}};
            if (g_105)
            { 
                uint64_t l_147 = 0x9B21912DA420BE38LL;
                l_150 = ((g_149[1][2][0] &= ((((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(p_38, (safe_sub_func_uint32_t_u_u((((g_136 >= (l_147 = (safe_mod_func_int64_t_s_s((g_53 = g_30), g_8)))) , p_38) && 0x259310AB7D55596ELL), 0L)))) , 0x2D1EL), g_32)) | g_76), p_38)) & l_148) > 253UL) >= 1UL)) | p_38);
            }
            else
            { 
                uint32_t l_154 = 1UL;
                l_154 |= (g_153 = (safe_lshift_func_uint16_t_u_u(g_32, 1)));
                l_61[0] = (g_175 ^= (safe_lshift_func_uint8_t_u_u((l_150 , (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((l_168 = g_167) , (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(65526UL, 6)) | (safe_add_func_uint64_t_u_u(0UL, g_167.f1.f2))), l_131[1][0][1]))), g_167.f0.f2)), p_38)) <= 0x6BL) , p_38) < p_38), (-8L))) <= 3L), g_53)), 9))), 3)));
            }
            for (l_168.f1.f0 = (-20); (l_168.f1.f0 > (-21)); l_168.f1.f0--)
            { 
                if (l_148)
                    break;
            }
        }
    }
    else
    { 
        return p_38;
    }
    return p_38;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_149[i][j][k], "g_149[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_167.f0.f0, "g_167.f0.f0", print_hash_value);
    transparent_crc(g_167.f0.f1, "g_167.f0.f1", print_hash_value);
    transparent_crc(g_167.f0.f2, "g_167.f0.f2", print_hash_value);
    transparent_crc(g_167.f1.f0, "g_167.f1.f0", print_hash_value);
    transparent_crc(g_167.f1.f1, "g_167.f1.f1", print_hash_value);
    transparent_crc(g_167.f1.f2, "g_167.f1.f2", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
