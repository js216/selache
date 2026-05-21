// SPDX-License-Identifier: MIT
// cctest_csmith_d9934f6f.c --- cctest case csmith_d9934f6f (csmith seed 3650309999)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x59d20d5b */

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

// Options:   -s 3650309999 -o /tmp/csmith_gen_7pwtb4pw/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint16_t  f0;
   int16_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

union U1 {
   const uint32_t  f0;
   int16_t  f1;
   const uint32_t  f2;
   const int64_t  f3;
};


static uint64_t g_6 = 0x44D1878ABC106EC6LL;
static int32_t g_7[3][1][2] = {{{(-7L),(-7L)}},{{(-7L),(-7L)}},{{(-7L),(-7L)}}};
static uint8_t g_11 = 4UL;
static int64_t g_12 = 0x5EEC80F219A6FDD8LL;
static struct S0 g_36 = {0UL,-4L,-4L};
static int32_t g_61 = 0xF2FDD045L;
static uint16_t g_62[4] = {65526UL,65526UL,65526UL,65526UL};
static struct S0 g_84 = {0x40D7L,0xCFC2L,0xC89D8701L};
static int8_t g_89[1] = {0x8AL};
static int16_t g_98 = (-10L);
static uint16_t g_99 = 65535UL;
static int64_t g_112 = (-10L);
static uint32_t g_114 = 1UL;
static int64_t g_123[4][5][3] = {{{7L,9L,(-1L)},{0x7E67F6E1A6A6FFDELL,0xD1EAB3F10159D6D5LL,(-5L)},{(-1L),7L,(-1L)},{(-2L),0x95FD4EE7BA79B219LL,0x9C91ED130E403E3ALL},{0x5792D6E4BE99D439LL,1L,0xAB7D55596E0544DDLL}},{{0xD1EAB3F10159D6D5LL,0x3DF8C06C6856C279LL,0L},{(-1L),0x6BCC78BB94AC609CLL,0x6BCC78BB94AC609CLL},{0xD1EAB3F10159D6D5LL,0xC98E3433B3C15363LL,0x7E67F6E1A6A6FFDELL},{0x5792D6E4BE99D439LL,(-1L),0x307DCF4CFC3FE24BLL},{(-2L),0x7E67F6E1A6A6FFDELL,0xD1EAB3F10159D6D5LL}},{{(-1L),0xAB7D55596E0544DDLL,0x4F9E1A8ADBC88E9FLL},{0x7E67F6E1A6A6FFDELL,0x7E67F6E1A6A6FFDELL,0x3DF8C06C6856C279LL},{0x48C36732C95206BBLL,0x6BCC78BB94AC609CLL,0x4F9E1A8ADBC88E9FLL},{(-2L),0x9C91ED130E403E3ALL,(-5L)},{0xAB7D55596E0544DDLL,(-1L),0x6BCC78BB94AC609CLL}},{{(-5L),(-2L),(-5L)},{1L,9L,0x4F9E1A8ADBC88E9FLL},{1L,0xC98E3433B3C15363LL,0x3DF8C06C6856C279LL},{(-1L),0x48C36732C95206BBLL,0x5792D6E4BE99D439LL},{0x7E67F6E1A6A6FFDELL,3L,3L}}};
static uint8_t g_134 = 3UL;
static int16_t g_141 = 0x9FD8L;
static int64_t g_142 = 1L;
static int32_t g_150 = 0L;
static int32_t g_154 = (-6L);
static uint32_t g_164 = 9UL;
static int32_t g_213 = 8L;
static uint8_t g_214 = 0x02L;
static uint64_t g_229[2][2] = {{0x854730C7DF3491AELL,0x854730C7DF3491AELL},{0x854730C7DF3491AELL,0x854730C7DF3491AELL}};



static uint16_t  func_1(void);
static const struct S0  func_2(int16_t  p_3, int32_t  p_4, int32_t  p_5);
static int32_t  func_17(int64_t  p_18, int64_t  p_19, const int16_t  p_20, uint16_t  p_21, int32_t  p_22);
static uint8_t  func_27(int16_t  p_28);




static uint16_t  func_1(void)
{ 
    int32_t l_8 = (-1L);
    int32_t l_165 = (-1L);
    int32_t l_166 = 0xEE4FF998L;
    uint8_t l_167 = 0xB0L;
    int64_t l_177[5][5] = {{0x9021D3DD3D9F1B8DLL,(-10L),0x9021D3DD3D9F1B8DLL,0x9021D3DD3D9F1B8DLL,(-10L)},{(-10L),0x9021D3DD3D9F1B8DLL,0x9021D3DD3D9F1B8DLL,(-10L),0x9021D3DD3D9F1B8DLL},{(-10L),(-10L),0x599639025BF7B98ELL,(-10L),(-10L)},{0x9021D3DD3D9F1B8DLL,(-10L),0x9021D3DD3D9F1B8DLL,0x9021D3DD3D9F1B8DLL,(-10L)},{(-10L),0x9021D3DD3D9F1B8DLL,0x9021D3DD3D9F1B8DLL,(-10L),0x9021D3DD3D9F1B8DLL}};
    int32_t l_211 = 0x30DC4682L;
    uint8_t l_212 = 0x80L;
    int8_t l_236 = 0x40L;
    int i, j;
    l_166 |= (l_165 = (g_164 &= (((func_2((g_6 = 0x25EFL), g_7[0][0][1], (g_7[0][0][1] , l_8)) , g_89[0]) != g_7[1][0][1]) , g_11)));
    if ((g_134 > (l_8 != (l_166 = l_167))))
    { 
        uint8_t l_176 = 0UL;
        int32_t l_178 = 0xBD796243L;
        l_178 = (((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_154, (g_62[2] >= (safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(l_176, 0xD2L)) <= l_167), (-8L)))))), l_176)) > l_167) & 0UL) && g_84.f2) || l_177[1][2]);
lbl_187:
        for (g_84.f2 = 0; (g_84.f2 < (-23)); --g_84.f2)
        { 
            for (l_167 = 0; l_167 < 3; l_167 += 1)
            {
                for (l_166 = 0; l_166 < 1; l_166 += 1)
                {
                    for (g_154 = 0; g_154 < 2; g_154 += 1)
                    {
                        g_7[l_167][l_166][g_154] = 6L;
                    }
                }
            }
            for (l_176 = 0; (l_176 > 16); l_176 = safe_add_func_int32_t_s_s(l_176, 2))
            { 
                if (g_123[3][1][0])
                    break;
                g_154 = g_11;
            }
        }
        for (g_36.f2 = (-7); (g_36.f2 > (-4)); g_36.f2 = safe_add_func_uint8_t_u_u(g_36.f2, 4))
        { 
            const uint32_t l_210 = 0x59383596L;
            for (g_11 = 5; (g_11 >= 38); ++g_11)
            { 
                l_178 = 0x6A00515FL;
                l_178 = (-6L);
            }
            for (g_141 = 0; (g_141 <= 2); g_141 += 1)
            { 
                if (l_8)
                    goto lbl_187;
            }
            g_214 &= (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_154 = (((g_6 = (l_212 &= (safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((l_166 |= 0xFF02EEB52631F386LL) <= (((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(18446744073709551608UL, (g_12 = ((g_141 && (l_165 |= g_150)) <= 0x2BD3L)))) | 8L) == 0x252A57B0L), g_61)), g_84.f1)) <= 1L) ^ g_84.f2)) < g_99), l_176)), 0x98D2L)) & l_210) == g_123[3][1][0]), l_210)), l_211)) > l_210) , g_84.f2), l_176)), g_89[0])))) && g_98) , g_213)), l_176)), g_36.f0));
        }
    }
    else
    { 
        int32_t l_228 = 0x42725619L;
        l_166 = ((((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((((l_165 >= (1UL < (((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((1UL > ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((g_98 , g_84.f1) ^ g_36.f1), l_228)), 5)), 2)) & l_228)) | l_228))), 6)) , g_62[2]) , g_36.f1))) | g_150) <= l_212) <= g_114) & l_228), g_62[2])), g_98)) != g_229[0][0]) > l_228) > l_177[1][1]);
        l_166 = (~g_123[3][1][0]);
    }
    g_154 = ((!6L) ^ ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_167, 12)), l_236)) == (safe_lshift_func_int8_t_s_u(l_8, g_61))));
    return g_114;
}



static const struct S0  func_2(int16_t  p_3, int32_t  p_4, int32_t  p_5)
{ 
    int8_t l_9 = 0x54L;
    int32_t l_23 = 3L;
    int32_t l_146[5] = {0x8F565D05L,0x8F565D05L,0x8F565D05L,0x8F565D05L,0x8F565D05L};
    int i;
    if (l_9)
    { 
        int32_t l_10[3];
        int32_t l_13 = (-1L);
        int i;
        for (i = 0; i < 3; i++)
            l_10[i] = 1L;
        l_10[1] = (p_5 &= 0xF0488F4FL);
        g_11 = g_6;
        l_13 = (((p_3 ^= p_5) == (g_12 &= (p_4 , 0x74ADL))) & (p_4 , g_7[1][0][0]));
    }
    else
    { 
        int16_t l_120 = (-3L);
        const int64_t l_153 = 1L;
lbl_160:
        for (g_12 = (-5); (g_12 <= (-14)); --g_12)
        { 
            uint8_t l_16 = 9UL;
            int32_t l_128[5][1][4] = {{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}}};
            int i, j, k;
            l_16 = p_5;
            if (l_16)
            { 
                int64_t l_124 = (-1L);
                l_120 = func_17(g_7[0][0][1], (l_23 = p_3), (safe_add_func_int32_t_s_s((!func_27((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((g_11 | (safe_rshift_func_int16_t_s_u(0x9BFAL, g_12))), 10)) && g_7[0][0][1]), 0xD33BL)))), p_4)), g_36.f0, g_36.f0);
                l_124 ^= (safe_div_func_uint32_t_u_u(0xE8F9E78BL, g_123[3][1][0]));
            }
            else
            { 
                uint32_t l_133 = 0x86ECF404L;
                g_134 = (((((p_3 < (l_16 || (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u((++g_99), 65526UL)))))) | ((safe_lshift_func_uint8_t_u_s(g_7[0][0][1], l_133)) >= 4294967295UL)) != p_3) , l_23) > (-5L));
                g_142 = (g_141 = (safe_sub_func_int64_t_s_s(p_5, (0x50L > (p_5 > (safe_mod_func_int16_t_s_s((g_98 = (((safe_div_func_int64_t_s_s(l_133, l_128[3][0][3])) ^ 0xC6L) , 0L)), p_5)))))));
            }
        }
        for (l_23 = 2; (l_23 >= 0); l_23 -= 1)
        { 
            int32_t l_143 = (-10L);
            g_150 = (((g_36.f1 = (((l_143 >= p_3) , (safe_mod_func_int64_t_s_s((l_146[0] = l_143), (safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s((0xFB81438DL < l_143), 3))))))) , p_3)) | g_112) , l_146[2]);
            l_146[0] ^= ((safe_sub_func_int8_t_s_s(((((((g_154 = ((p_5 || g_7[0][0][1]) && l_153)) , (safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_u((p_3 = (g_84.f1 = (-1L))), g_36.f0)))) & g_12) && g_84.f2), l_120))) && 0x09L) && 0xACC5E6FE971D65AFLL) || 0x12C0L) < 1UL), g_7[0][0][1])) != (-10L));
            for (p_3 = 0; (p_3 <= 2); p_3 += 1)
            { 
                if (g_84.f1)
                    goto lbl_160;
            }
        }
    }
    l_23 = ((g_142 > l_146[0]) > (l_146[0] && g_99));
    for (g_98 = 0; (g_98 >= 28); g_98 = safe_add_func_int64_t_s_s(g_98, 5))
    { 
        const struct S0 l_163 = {0x47F4L,0xF2EDL,-1L};
        return l_163;
    }
    return g_36;
}



static int32_t  func_17(int64_t  p_18, int64_t  p_19, const int16_t  p_20, uint16_t  p_21, int32_t  p_22)
{ 
    int32_t l_75[4];
    int32_t l_85 = 0x9728EF6BL;
    int i;
    for (i = 0; i < 4; i++)
        l_75[i] = (-8L);
    l_75[1] = (((0x5432L <= ((p_20 ^ 0x3F06E912L) , g_36.f2)) | 1UL) , g_36.f0);
lbl_119:
    for (p_18 = 12; (p_18 <= 9); p_18 = safe_sub_func_uint32_t_u_u(p_18, 4))
    { 
        uint64_t l_86 = 18446744073709551611UL;
        int32_t l_87 = 3L;
        l_85 &= (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u(g_7[0][0][1], ((g_36.f1 = g_36.f0) != p_20))) >= ((g_84 , 0UL) , l_75[1])) >= p_21) == g_84.f1), g_84.f1)) > p_19), 0L));
        for (g_84.f2 = 0; (g_84.f2 >= 0); g_84.f2 -= 1)
        { 
            int16_t l_88 = 0x049BL;
            g_98 = ((((l_86 = p_22) < (g_11 = (l_88 ^= l_87))) > ((g_89[0] = g_12) <= ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((4294967295UL == g_62[1]), g_84.f1)), 5)) , 0x3AA3L), 65533UL)), p_20)) & p_20))) >= p_21);
            for (l_87 = 0; (l_87 >= 0); l_87 -= 1)
            { 
                g_99 = 0x4A0C5CC1L;
            }
        }
        for (g_61 = 0; (g_61 <= 0); g_61 += 1)
        { 
            int32_t l_113 = (-1L);
            int i;
            if ((safe_mod_func_uint8_t_u_u(((g_89[g_61] && (safe_rshift_func_int16_t_s_u((((((g_89[g_61] <= (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((g_36.f1 &= (l_87 = g_89[g_61])) < (l_86 , (-1L))), 10)), p_19))) , l_75[1]) | g_7[0][0][1]) < g_89[0]) != 0UL), p_20))) < 0x85L), l_85)))
            { 
                g_112 = (g_89[g_61] == (safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((g_36.f2 , l_87), 0xD0L)), (-2L))));
            }
            else
            { 
                ++g_114;
            }
        }
    }
    for (g_114 = 27; (g_114 >= 17); g_114 = safe_sub_func_uint16_t_u_u(g_114, 8))
    { 
        if (l_85)
            goto lbl_119;
        if (p_22)
            goto lbl_119;
    }
    return l_75[3];
}



static uint8_t  func_27(int16_t  p_28)
{ 
    int64_t l_35[2][1];
    int64_t l_57 = 8L;
    int32_t l_65 = 0xD7DC8934L;
    union U1 l_66 = {0xC1B334FEL};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_35[i][j] = (-9L);
    }
    for (g_11 = 0; (g_11 <= 0); g_11 += 1)
    { 
        uint16_t l_41 = 4UL;
        int32_t l_58 = 0L;
        l_41 = (g_36 , (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s(((!p_28) >= ((l_35[0][0] < (((g_11 == p_28) > g_11) | 0x5392L)) , g_12)))), 5)));
        for (g_36.f1 = 0; (g_36.f1 >= 0); g_36.f1 -= 1)
        { 
            union U1 l_50 = {0x041AC573L};
            for (g_6 = 0; (g_6 <= 0); g_6 += 1)
            { 
                int i, j;
                l_58 |= (safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((l_35[g_11][g_11] > (l_50 , ((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((0x72EA1289665FEC6BLL | (safe_sub_func_int64_t_s_s(p_28, 1UL))) , l_57) == p_28), l_50.f1)), g_7[0][0][1])) != p_28))) ^ p_28), 65535UL)), l_50.f0)), g_6));
                if (g_6)
                    continue;
            }
        }
        for (l_58 = 0; (l_58 <= 0); l_58 += 1)
        { 
            int8_t l_59[1][3];
            uint32_t l_60 = 1UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_59[i][j] = 3L;
            }
            for (g_36.f1 = 0; g_36.f1 < 2; g_36.f1 += 1)
            {
                for (g_36.f2 = 0; g_36.f2 < 1; g_36.f2 += 1)
                {
                    l_35[g_36.f1][g_36.f2] = (-2L);
                }
            }
            g_61 |= (g_36.f1 , ((((p_28 >= ((p_28 < (l_60 = (((l_59[0][1] = p_28) & p_28) | g_7[0][0][1]))) < p_28)) || p_28) , g_12) & g_36.f2));
            g_62[2]++;
        }
    }
    l_65 = 1L;
    l_65 = ((l_66 , ((((safe_mod_func_int8_t_s_s(((l_65 != (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((-1L) || ((((safe_div_func_int16_t_s_s(g_12, p_28)) == p_28) >= l_66.f1) || 18446744073709551615UL)) == p_28), 0xEE7BL)), l_66.f2)) >= g_61) == l_66.f2)) != g_36.f0), (-1L))) & g_7[2][0][1]) && g_6) && p_28)) | g_12);
    return l_66.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_89[i], "g_89[i]", print_hash_value);

    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_123[i][j][k], "g_123[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_229[i][j], "g_229[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
