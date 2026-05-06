// SPDX-License-Identifier: MIT
// cctest_csmith_f9837051.c --- cctest case csmith_f9837051 (csmith seed 4186140753)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf194c9bd */

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

// Options:   -s 4186140753 -o /tmp/csmith_gen_2g_9wba4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 7;
   unsigned f1 : 2;
};
#pragma pack(pop)

struct S1 {
   const unsigned f0 : 30;
   unsigned f1 : 13;
   const signed f2 : 7;
   unsigned f3 : 14;
   signed f4 : 16;
};

struct S2 {
   unsigned f0 : 17;
   signed f1 : 26;
   const signed f2 : 14;
   const unsigned f3 : 11;
};

struct S3 {
   int8_t  f0;
   int16_t  f1;
};

union U4 {
   uint32_t  f0;
   int8_t  f1;
   uint8_t  f2;
   uint64_t  f3;
};

union U5 {
   int16_t  f0;
   const uint16_t  f1;
   const uint8_t  f2;
   int32_t  f3;
};

union U6 {
   const signed f0 : 14;
   int64_t  f1;
   const signed f2 : 15;
   struct S3  f3;
};


static uint32_t g_3 = 4294967295UL;
static struct S2 g_7 = {307,3297,77,1};
static union U5 g_27 = {0xECC3L};
static uint64_t g_29 = 0x631CD1AC8C6DCFF2LL;
static uint8_t g_62 = 1UL;
static struct S0 g_75 = {10,0};
static int32_t g_81 = 0xC4137E2FL;
static int16_t g_82 = 6L;
static int32_t g_84 = 9L;
static uint32_t g_86[2] = {18446744073709551610UL,18446744073709551610UL};
static struct S3 g_89 = {-1L,1L};
static uint16_t g_111 = 1UL;
static struct S1 g_123 = {17276,52,-4,22,-244};
static uint32_t g_141 = 1UL;
static int16_t g_175[1] = {0L};
static const uint64_t g_188 = 0x6114F9EE90AB4F1ELL;



static struct S1  func_1(void);
static union U5  func_4(uint64_t  p_5, struct S2  p_6);
static const uint16_t  func_12(uint64_t  p_13, uint8_t  p_14);
static uint8_t  func_16(uint32_t  p_17, int64_t  p_18, union U5  p_19);




static struct S1  func_1(void)
{ 
    const uint16_t l_20 = 65535UL;
    struct S2 l_107 = {113,-1638,119,44};
    int16_t l_109 = 0x015BL;
    uint32_t l_110 = 0x0370FD57L;
    int16_t l_124[3][4][1] = {{{5L},{0L},{0x90DCL},{0x04F0L}},{{0x90DCL},{0L},{5L},{0L}},{{0x90DCL},{0x04F0L},{0x90DCL},{0L}}};
    int i, j, k;
    if ((g_7.f1 = (~(g_3 && (func_4(g_3, g_7) , g_7.f1)))))
    { 
        int32_t l_15 = 1L;
        union U4 l_108 = {0xED0B757FL};
        union U5 l_118[2] = {{0L},{0L}};
        int i;
        g_7.f1 ^= ((safe_lshift_func_uint16_t_u_s(func_12(l_15, (g_29 &= func_16((l_20 > (g_3 >= (safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_20, 6)), l_15)), 2)))), g_7.f3, g_27))), 15)) , l_20);
        if ((g_7.f3 < (g_111 = ((l_15 <= (l_110 ^= (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((g_89.f0 = (safe_div_func_int64_t_s_s(g_86[1], (g_29 |= ((!((((((l_107 , l_108) , l_108.f0) > g_7.f0) | l_107.f3) , g_27.f1) == g_89.f1)) <= (-10L)))))), l_108.f2)) < l_109), 1)))) || l_107.f2))))
        { 
            l_107.f1 &= (l_108 , (g_111 < ((safe_lshift_func_uint16_t_u_s(l_107.f3, 15)) >= g_29)));
        }
        else
        { 
            uint32_t l_120 = 0x7220935DL;
            for (g_89.f0 = 20; (g_89.f0 > 4); g_89.f0 = safe_sub_func_int16_t_s_s(g_89.f0, 5))
            { 
                l_120 &= (((g_7.f3 == (safe_mod_func_uint64_t_u_u((1UL == (l_118[1] , ((!0UL) <= l_118[1].f2))), l_108.f0))) && 0xDBL) != 0x3A17D067C9850C21LL);
            }
            for (g_3 = 0; (g_3 != 52); g_3 = safe_add_func_int64_t_s_s(g_3, 4))
            { 
                return g_123;
            }
        }
    }
    else
    { 
        uint32_t l_125 = 1UL;
        int32_t l_142[1][1][2];
        union U4 l_158 = {0xB2B9B809L};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_142[i][j][k] = 1L;
            }
        }
        ++l_125;
        for (g_62 = (-7); (g_62 >= 35); g_62++)
        { 
            uint64_t l_136 = 4UL;
            int32_t l_144[4];
            int8_t l_185 = 1L;
            int64_t l_187 = 0L;
            int i;
            for (i = 0; i < 4; i++)
                l_144[i] = 0xCCE5AB66L;
            for (g_111 = (-24); (g_111 != 36); g_111 = safe_add_func_uint16_t_u_u(g_111, 4))
            { 
                int64_t l_143 = (-2L);
                l_142[0][0][1] = (((g_141 = (safe_sub_func_int32_t_s_s(((l_107.f1 = ((g_89 , (((safe_mul_func_uint8_t_u_u((g_27 , (l_136 != (safe_rshift_func_uint8_t_u_u(((g_3 != g_123.f1) == 0L), 6)))), l_125)) & 0x1370L) >= l_107.f2)) ^ 0xE95E56FB4F1CBC00LL)) & g_62), l_124[1][0][0]))) != 5L) >= l_20);
                l_144[0] = ((g_7 , g_3) >= l_143);
            }
            if ((g_123.f2 , (~(safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((((((safe_div_func_uint32_t_u_u(l_136, ((safe_lshift_func_int8_t_s_u((((((g_89 , (safe_mod_func_uint8_t_u_u(g_7.f2, l_144[2]))) < 0x604849EAACEA8682LL) || l_144[0]) | g_89.f0) | 0x1D41L), 5)) && l_144[1]))) == g_62) , g_123.f0) && g_86[1]) , l_158) , l_110), g_3)), 0x5F1C8C37E72653B0LL)), g_27.f0)))))
            { 
                uint16_t l_174 = 0xE2B4L;
                int32_t l_176 = 0xF606E3EFL;
                g_84 = ((0x32D6L & ((g_3++) , (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((l_176 = ((safe_mod_func_uint8_t_u_u(l_158.f0, (l_144[0] = (safe_lshift_func_uint8_t_u_s(l_107.f0, (+(safe_sub_func_uint8_t_u_u(((g_175[0] = ((l_174 = (g_84 || 4L)) <= g_62)) == 5UL), g_86[1])))))))) && l_124[1][2][0])), l_136)) , g_27.f1), 0xDDL)), 0L)))) || 0xEAF7AE4149FED21ALL);
                g_27.f3 = ((65535UL & ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_136 || (((g_89.f0 < (safe_mul_func_int16_t_s_s((((g_3 , l_185) & g_175[0]) || 18446744073709551614UL), l_176))) != l_110) == 1UL)), g_27.f0)), 0x83L)) <= 2UL)) || 4294967295UL);
            }
            else
            { 
                int16_t l_186[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_186[i] = (-4L);
                l_187 = (l_186[0] , 1L);
                l_144[0] = g_188;
                g_7.f1 &= g_111;
            }
        }
    }
    return g_123;
}



static union U5  func_4(uint64_t  p_5, struct S2  p_6)
{ 
    int32_t l_8 = 1L;
    union U5 l_9 = {-8L};
    l_8 &= 0xCADFB1AFL;
    return l_9;
}



static const uint16_t  func_12(uint64_t  p_13, uint8_t  p_14)
{ 
    int16_t l_30 = 0x8394L;
    int32_t l_31 = 0xD9780293L;
    int32_t l_56 = 0xA312446BL;
    int32_t l_57 = 0x9878FF5FL;
    int32_t l_58 = 0x926F5D9AL;
    int32_t l_59 = 0x6675F713L;
    int32_t l_60 = 0xCFF5F9F7L;
    int32_t l_61 = 4L;
    union U6 l_71 = {0x484183AAL};
    int16_t l_83 = 0xBD24L;
    if (((l_31 = l_30) & 0x84B6L))
    { 
        const uint32_t l_50 = 0xD2DC0978L;
        int32_t l_53 = (-2L);
        int32_t l_54 = 1L;
        int32_t l_55[4][5] = {{0x4D75F053L,(-1L),(-1L),0x4D75F053L,8L},{1L,0x8F83F3A8L,0x8F83F3A8L,1L,0x924E19C7L},{0x4D75F053L,(-1L),(-1L),0x4D75F053L,8L},{1L,0x8F83F3A8L,0x8F83F3A8L,1L,0x924E19C7L}};
        int i, j;
        g_27.f3 = (g_7.f3 , g_7.f3);
        for (p_13 = (-25); (p_13 <= 28); p_13 = safe_add_func_uint8_t_u_u(p_13, 1))
        { 
            int16_t l_34[1][2];
            uint16_t l_35 = 0x9313L;
            int32_t l_51 = 1L;
            int32_t l_52 = 0xB20E9505L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_34[i][j] = (-1L);
            }
            l_35--;
            l_53 ^= (safe_add_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((g_7.f2 , (l_52 = (g_29 = ((g_7.f2 >= g_27.f3) ^ (safe_mod_func_int16_t_s_s((l_51 = (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_31, g_7.f3)), 0x30E8L)) >= l_30), l_50))), 65529UL)))))), p_14)) < p_14), g_7.f0));
        }
        --g_62;
    }
    else
    { 
        uint16_t l_67 = 0UL;
        int32_t l_68 = 0xD19DDA5CL;
        int32_t l_77 = 0x5CA43862L;
        struct S3 l_94 = {-8L,0x4BB8L};
        struct S3 l_95[4] = {{0x03L,-2L},{0x03L,-2L},{0x03L,-2L},{0x03L,-2L}};
        int i;
        for (l_60 = 0; (l_60 == (-3)); l_60--)
        { 
            l_67 = g_29;
            return g_27.f0;
        }
        if (l_67)
        { 
            int16_t l_72[2][1][3] = {{{(-1L),0xF806L,0xF806L}},{{(-1L),0xF806L,(-1L)}}};
            int i, j, k;
            l_68 = (-1L);
            l_57 = (safe_sub_func_int16_t_s_s((((p_13 ^ (l_67 , (l_71 , ((((l_72[0][0][1] = l_59) > p_14) > p_13) <= l_68)))) <= 0xFC9EL) | 0x8474L), p_13));
        }
        else
        { 
            uint8_t l_73[3];
            int32_t l_79[1][1];
            int8_t l_80[1][4];
            int i, j;
            for (i = 0; i < 3; i++)
                l_73[i] = 255UL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_79[i][j] = 0xBF60C7DCL;
            }
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_80[i][j] = 0x5BL;
            }
            for (l_60 = 2; (l_60 >= 0); l_60 -= 1)
            { 
                struct S0 l_74 = {1,1};
                int32_t l_76 = 0x69F207B6L;
                int32_t l_78 = 0x4AF31781L;
                int32_t l_85[5][5][3] = {{{1L,(-1L),1L},{0xA778B6DBL,0xA778B6DBL,1L},{0xDF6458A2L,(-1L),0xDF6458A2L},{0xA778B6DBL,1L,1L},{1L,(-1L),1L}},{{0xA778B6DBL,0xA778B6DBL,1L},{0xDF6458A2L,(-1L),0xDF6458A2L},{0xA778B6DBL,1L,1L},{1L,(-1L),1L},{0xA778B6DBL,0xA778B6DBL,1L}},{{0xDF6458A2L,(-1L),0xDF6458A2L},{0xA778B6DBL,1L,1L},{1L,(-1L),1L},{0xA778B6DBL,0xA778B6DBL,1L},{0xDF6458A2L,(-1L),0xDF6458A2L}},{{0xA778B6DBL,1L,1L},{1L,(-1L),1L},{0xA778B6DBL,0xA778B6DBL,1L},{0xDF6458A2L,(-1L),0xDF6458A2L},{0xA778B6DBL,1L,1L}},{{1L,(-1L),1L},{0xA778B6DBL,0xA778B6DBL,1L},{0xDF6458A2L,(-1L),0xDF6458A2L},{0xA778B6DBL,1L,1L},{1L,(-1L),1L}}};
                int i, j, k;
                g_75 = l_74;
                ++g_86[1];
            }
            g_27.f3 = (-1L);
        }
        if (l_60)
        { 
            l_71.f3 = g_89;
            g_84 = (safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s((g_7.f2 || 0x69L), (7L | g_89.f1))), 0x463939075E3015D2LL));
            l_95[2] = l_94;
        }
        else
        { 
            uint32_t l_98 = 0xECBDE39FL;
            struct S3 l_99 = {6L,0x751BL};
            g_27.f3 = (safe_lshift_func_uint8_t_u_u(l_98, 4));
            g_89 = l_99;
        }
    }
    return p_13;
}



static uint8_t  func_16(uint32_t  p_17, int64_t  p_18, union U5  p_19)
{ 
    int16_t l_28 = 1L;
    return l_28;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);

    }
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_123.f1, "g_123.f1", print_hash_value);
    transparent_crc(g_123.f2, "g_123.f2", print_hash_value);
    transparent_crc(g_123.f3, "g_123.f3", print_hash_value);
    transparent_crc(g_123.f4, "g_123.f4", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);

    }
    transparent_crc(g_188, "g_188", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
