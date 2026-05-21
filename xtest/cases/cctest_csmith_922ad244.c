// SPDX-License-Identifier: MIT
// cctest_csmith_922ad244.c --- cctest case csmith_922ad244 (csmith seed 2452279876)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdcfead3c */

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

// Options:   -s 2452279876 -o /tmp/csmith_gen_7drsxk93/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

union U1 {
   const uint64_t  f0;
};


static uint16_t g_5 = 0xC558L;
static struct S0 g_21[1] = {{0L}};
static uint32_t g_40 = 0x95C1F4ACL;
static uint8_t g_47 = 0x60L;
static int64_t g_71 = 0xE676CD85683D5260LL;
static uint8_t g_75[3] = {0xDBL,0xDBL,0xDBL};
static int32_t g_79 = 0x76B3EC5FL;
static int8_t g_81 = 0x90L;
static uint8_t g_82 = 0x32L;
static uint16_t g_107[5] = {0x253DL,0x253DL,0x253DL,0x253DL,0x253DL};
static int64_t g_125 = 1L;
static int16_t g_174 = 0x79D8L;
static uint32_t g_178 = 2UL;
static int32_t g_181 = 0xC6E98833L;
static int64_t g_241 = 0x6F053ABDBD69BE9ELL;
static int32_t g_242 = 0x90A8C73EL;
static uint32_t g_280 = 0x03F3BF9FL;
static int64_t g_300[2][4] = {{0xE4D3E2A85B44177ALL,0L,0xE4D3E2A85B44177ALL,0L},{0xE4D3E2A85B44177ALL,0L,0xE4D3E2A85B44177ALL,0L}};
static uint32_t g_301 = 0UL;
static uint8_t g_304 = 251UL;
static union U1 g_328[3][2] = {{{0x19EDD3A62704DB0DLL},{0x19EDD3A62704DB0DLL}},{{0x19EDD3A62704DB0DLL},{0x19EDD3A62704DB0DLL}},{{0x19EDD3A62704DB0DLL},{0x19EDD3A62704DB0DLL}}};
static struct S0 g_332[3] = {{9L},{9L},{9L}};
static int32_t g_343[2] = {0x31787920L,0x31787920L};
static uint16_t g_344 = 2UL;
static int8_t g_353 = 0x9BL;
static uint64_t g_380 = 0UL;
static uint32_t g_419 = 0x953933E5L;



static struct S0  func_1(void);
static const int32_t  func_2(uint32_t  p_3, uint64_t  p_4);
static int32_t  func_10(int32_t  p_11, const int32_t  p_12);
static int8_t  func_18(int64_t  p_19);




static struct S0  func_1(void)
{ 
    int32_t l_6[3];
    int32_t l_436[4][3] = {{0xBB398669L,0xBB398669L,0xBB398669L},{0xB92B1560L,0xB92B1560L,0xB92B1560L},{0xBB398669L,0xBB398669L,0xBB398669L},{0xB92B1560L,0xB92B1560L,0xB92B1560L}};
    int32_t l_445 = 0xBF3CCCA3L;
    int32_t l_446 = (-5L);
    int64_t l_467 = 0xD2907BF8908CF12DLL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_6[i] = 0xE7D214C4L;
lbl_473:
    if (func_2(g_5, l_6[0]))
    { 
        int32_t l_424[2];
        int i;
        for (i = 0; i < 2; i++)
            l_424[i] = 0x5A66BE07L;
        for (g_81 = 0; (g_81 >= 22); g_81++)
        { 
            if (l_424[0])
                break;
            if (g_353)
                goto lbl_473;
        }
        g_21[0] = g_21[0];
        g_242 = ((safe_mod_func_int32_t_s_s((((!(g_304 >= ((safe_sub_func_uint32_t_u_u(l_6[0], l_424[0])) >= ((((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(g_82, l_6[1])) < l_424[1]), g_280)) | 0x1AAEFFB6EFACE8F5LL) <= l_6[0]) , g_344)))) | g_21[0].f0) , l_6[2]), 0x5CE1E3A9L)) ^ l_6[2]);
    }
    else
    { 
        int16_t l_437 = (-7L);
        int32_t l_439 = 0x2C253FF1L;
        int32_t l_440 = (-1L);
        int32_t l_443 = (-2L);
        int32_t l_444[5][4][2] = {{{(-7L),7L},{(-7L),(-7L)},{(-7L),7L},{(-7L),(-7L)}},{{(-7L),7L},{(-7L),(-7L)},{(-7L),7L},{(-7L),(-7L)}},{{(-7L),7L},{(-7L),(-7L)},{(-7L),7L},{(-7L),(-7L)}},{{(-7L),7L},{(-7L),(-7L)},{(-7L),7L},{(-7L),(-7L)}},{{(-7L),7L},{(-7L),(-7L)},{(-7L),7L},{(-7L),(-7L)}}};
        uint8_t l_459 = 0x0FL;
        uint32_t l_469[3];
        struct S0 l_472[3] = {{1L},{1L},{1L}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_469[i] = 0x233A5F90L;
        for (g_178 = 0; (g_178 >= 31); g_178++)
        { 
            int16_t l_438[2][5][4] = {{{0x8648L,0xE39BL,1L,2L},{0xE39BL,(-1L),0L,(-1L)},{0x3A64L,0x5903L,0x235BL,(-1L)},{0L,0xA57CL,1L,0x8017L},{(-1L),1L,0xE39BL,0x235BL}},{{(-1L),0x1C9DL,1L,(-2L)},{0L,0x235BL,0x235BL,0L},{0x3A64L,2L,0L,0xACBBL},{0xE39BL,(-2L),1L,0x9754L},{0x8648L,0x8017L,0x5903L,0x9754L}}};
            int32_t l_441 = 0xCB349FEEL;
            int32_t l_442[1];
            uint8_t l_447 = 0x26L;
            uint16_t l_456 = 0x6499L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_442[i] = 1L;
            ++l_447;
            for (g_301 = 0; (g_301 != 36); g_301 = safe_add_func_uint16_t_u_u(g_301, 9))
            { 
                uint8_t l_452 = 255UL;
                int32_t l_455 = 0x3D9607B2L;
                g_242 = (g_71 | (l_452 || ((safe_rshift_func_int16_t_s_u(l_438[0][1][1], 7)) <= l_452)));
                ++l_456;
                l_459++;
            }
        }
        for (g_47 = 0; (g_47 == 25); g_47 = safe_add_func_int32_t_s_s(g_47, 4))
        { 
            int16_t l_464 = 0L;
            int32_t l_465 = 0x6FFB8773L;
            int32_t l_466[4][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
            int32_t l_468 = (-9L);
            int i, j;
            --l_469[0];
            return l_472[0];
        }
    }
    for (g_125 = (-30); (g_125 >= (-12)); ++g_125)
    { 
        for (g_178 = 0; (g_178 <= 0); g_178 += 1)
        { 
            int i;
            return g_21[g_178];
        }
        if (g_79)
            break;
    }
    for (g_344 = 10; (g_344 <= 3); g_344 = safe_sub_func_uint32_t_u_u(g_344, 8))
    { 
        for (g_242 = (-5); (g_242 > 20); g_242 = safe_add_func_int16_t_s_s(g_242, 3))
        { 
            struct S0 l_482 = {3L};
            for (g_81 = (-19); (g_81 <= 26); g_81 = safe_add_func_uint8_t_u_u(g_81, 4))
            { 
                l_482 = g_332[1];
            }
            g_332[1] = g_21[0];
        }
        g_242 = g_242;
    }
    return g_21[0];
}



static const int32_t  func_2(uint32_t  p_3, uint64_t  p_4)
{ 
    int32_t l_9 = (-1L);
    int16_t l_360 = 1L;
    int32_t l_368 = 8L;
    int32_t l_370 = 1L;
    int32_t l_371 = 0x509249F8L;
    int32_t l_372[3];
    int i;
    for (i = 0; i < 3; i++)
        l_372[i] = 0x20B7C3FBL;
    if ((safe_div_func_uint64_t_u_u(((l_9 && func_10((safe_rshift_func_uint8_t_u_u(((!(safe_mul_func_int16_t_s_s((((0UL || (func_18(g_5) > g_81)) , 0xAB2E5F26L) , g_5), g_125))) >= g_125), 0)), p_4)) & g_300[1][0]), 0x2EC38D991BF46D65LL)))
    { 
        int32_t l_365 = 0x7CD717D0L;
        int32_t l_366 = 4L;
        int32_t l_367 = 8L;
        int32_t l_369 = 0xCE8E05B0L;
        int32_t l_373 = 0x907BA93EL;
        int32_t l_374 = 1L;
        int64_t l_375 = (-1L);
        int32_t l_376 = 1L;
        int32_t l_377 = 1L;
        int32_t l_378 = 2L;
        int32_t l_379 = 0xF8B99F19L;
        uint8_t l_414 = 0xB0L;
        l_366 = (safe_add_func_int16_t_s_s(((l_9 = ((safe_sub_func_int8_t_s_s((g_81 = l_360), (safe_lshift_func_int16_t_s_u((p_4 >= ((safe_mod_func_int16_t_s_s((l_360 && (((p_3 || p_4) | p_4) , p_4)), 0x9722L)) , l_365)), 0)))) == 18446744073709551607UL)) || 0x15B69050L), g_82));
        g_380++;
        if ((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_370 || 1UL), (p_3 == ((safe_mod_func_uint64_t_u_u((l_376 = 18446744073709551615UL), p_3)) && 4294967292UL)))), (-1L))))
        { 
            const int8_t l_395 = 0x32L;
            int32_t l_404[1][1][2];
            uint16_t l_405[5][4][1] = {{{0UL},{0x4817L},{0x99F0L},{0x4817L}},{{0UL},{0x4817L},{0x99F0L},{0x4817L}},{{0UL},{0x4817L},{0x99F0L},{0x4817L}},{{0UL},{0x4817L},{0x99F0L},{0x4817L}},{{0UL},{0x4817L},{0x99F0L},{0x4817L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_404[i][j][k] = 0x6A23D219L;
                }
            }
            g_242 = (((safe_mod_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((safe_sub_func_int32_t_s_s((p_4 ^ l_395), (((safe_rshift_func_uint8_t_u_s((g_178 && (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((((2L && g_242) == l_395) == 0xB65CL), g_125)), 12)) < g_107[2]), p_4))), 3)) > 0UL) >= g_81))) < 0x76B6L) != g_125), p_3)), p_4)) && p_4) ^ g_343[1]);
            --l_405[1][0][0];
            return g_125;
        }
        else
        { 
            uint16_t l_415 = 0x1E2CL;
            int32_t l_416 = (-7L);
            l_416 |= (safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((g_107[2] = 2UL) == 0x7E62L) != (safe_mul_func_int8_t_s_s(g_380, l_414))) ^ p_4), l_415)), p_3));
        }
    }
    else
    { 
        int32_t l_417 = 0xA3A427FDL;
        int32_t l_418[4][1][1];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_418[i][j][k] = 0xCEF29B83L;
            }
        }
        ++g_419;
    }
    return p_3;
}



static int32_t  func_10(int32_t  p_11, const int32_t  p_12)
{ 
    int32_t l_262 = 5L;
    int8_t l_297 = 0x0AL;
    int16_t l_298 = 5L;
    struct S0 l_308 = {0x5930371CL};
    int32_t l_330 = (-1L);
lbl_263:
    for (g_178 = 0; (g_178 != 47); g_178++)
    { 
        uint64_t l_258 = 0xF094863BCAAB667DLL;
        l_258 = (safe_lshift_func_uint8_t_u_u((~0x77L), 6));
        l_262 ^= (+((p_12 != l_258) != (((safe_rshift_func_uint16_t_u_s(0x1819L, 6)) != p_12) || 255UL)));
        if (p_11)
            continue;
        if (l_258)
            goto lbl_263;
    }
    for (p_11 = 3; (p_11 < 15); p_11 = safe_add_func_uint32_t_u_u(p_11, 7))
    { 
        int8_t l_293 = (-6L);
        int32_t l_299 = 0x7C043BD0L;
        const struct S0 l_307 = {-5L};
        int64_t l_325 = (-1L);
        int32_t l_331 = 1L;
        struct S0 l_336 = {0x3DBD97F5L};
        for (g_5 = (-22); (g_5 != 8); g_5 = safe_add_func_uint8_t_u_u(g_5, 5))
        { 
            uint64_t l_286 = 0xA6B0373C0282D235LL;
            const int32_t l_296 = 0xB996A79BL;
            if ((safe_mul_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s(((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_s((l_299 = (+((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_280, ((safe_rshift_func_uint8_t_u_u((~(safe_add_func_uint32_t_u_u(((((++l_286) ^ ((safe_lshift_func_int16_t_s_u(g_5, 15)) & ((safe_add_func_int16_t_s_s((((l_293 > ((safe_sub_func_int64_t_s_s(0xD6DC47B37152B1CFLL, g_71)) <= p_11)) < l_262) , l_296), g_71)) >= g_242))) & g_71) & 0x03E1L), 1L))), l_297)) == 9UL))), l_298)) & g_47))), p_12)))) , g_40), 0x5F2BC74038AB7331LL)) >= p_12) <= g_107[2]), g_241)))
            { 
                if (g_241)
                    break;
                g_301++;
            }
            else
            { 
                g_304++;
                if (p_12)
                    continue;
                l_299 = g_280;
            }
            if (l_296)
                goto lbl_263;
        }
        if ((0x9FE80386AEEF4BBCLL < ((l_307 , (l_308 = g_21[0])) , (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((p_11 == p_12), 1L)), 7)), l_299)))))
        { 
            struct S0 l_335 = {-9L};
            if ((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(g_81, g_304)) || ((safe_mul_func_int8_t_s_s(4L, (((((0xFCL <= g_71) != p_11) == 0UL) && (-10L)) , g_40))) > l_325)), l_299)), p_11)), p_11)))
            { 
                int32_t l_329[5] = {1L,1L,1L,1L,1L};
                int i;
                l_330 &= (safe_mul_func_int16_t_s_s(g_300[1][3], (g_328[2][1] , (p_11 , ((g_178 |= (l_329[1] = 0UL)) , g_5)))));
                return l_330;
            }
            else
            { 
                g_242 = 0x652C32F7L;
                l_331 |= p_11;
                g_21[0] = (p_12 , g_332[1]);
            }
            for (g_81 = 13; (g_81 == (-25)); g_81 = safe_sub_func_int64_t_s_s(g_81, 7))
            { 
                if (g_242)
                    goto lbl_263;
                l_336 = l_335;
            }
        }
        else
        { 
            for (l_298 = 0; (l_298 < (-13)); --l_298)
            { 
                struct S0 l_342[2] = {{-10L},{-10L}};
                int32_t l_347[1];
                int32_t l_348 = 0x2D73772EL;
                int i;
                for (i = 0; i < 1; i++)
                    l_347[i] = (-9L);
                g_181 &= ((l_330 = ((!(l_299 &= ((safe_div_func_uint64_t_u_u((l_342[0] , (g_344--)), (l_348 ^= (((g_40 = 0x92B8C824L) , ((l_347[0] = p_11) != g_328[2][1].f0)) || p_12)))) && g_300[1][3]))) & (-5L))) ^ 0xE0DAL);
                g_343[1] = ((g_301 < (safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((g_353 |= g_75[2]), (safe_lshift_func_int8_t_s_u(((p_11 && p_11) , p_12), g_181)))), l_331))) , g_71);
            }
        }
    }
    return l_308.f0;
}



static int8_t  func_18(int64_t  p_19)
{ 
    uint32_t l_20[1];
    int32_t l_32 = 1L;
    int32_t l_41 = 0x6A8ACDD1L;
    uint32_t l_60 = 1UL;
    struct S0 l_96 = {0x3E8DF325L};
    uint32_t l_127 = 4294967295UL;
    int32_t l_194 = 2L;
    int32_t l_222 = 0x63535620L;
    int i;
    for (i = 0; i < 1; i++)
        l_20[i] = 0xC45C1D10L;
lbl_73:
    for (g_5 = 0; (g_5 <= 0); g_5 += 1)
    { 
        struct S0 l_22 = {0x941CE3CBL};
        int32_t l_31 = 1L;
        l_22 = g_21[0];
        if ((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((1UL ^ g_21[0].f0), (0x40A98CEEF9A8551BLL ^ (((((l_32 = ((l_31 |= (safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(p_19, 1UL)), p_19))) , p_19)) , g_21[0].f0) , 0xA5L) >= g_21[0].f0) != 4L)))), 0xCDC14C38L)))
        { 
            uint64_t l_42 = 0x36C1418E8DCE9DB3LL;
            l_31 |= (safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(0xB51FL)) >= (l_42 = (((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(((0xC23988F15EA37665LL != (((l_41 = (g_40 = ((l_32 ^= g_21[0].f0) | 0x7A32987C837E05AFLL))) == l_20[0]) && p_19)) & 0x12A7FAD5L), g_21[0].f0)) || 0L), 9)) != g_5) & g_21[0].f0))), 10));
        }
        else
        { 
            return l_31;
        }
    }
lbl_143:
    if ((((g_5 == l_41) , (0UL || l_20[0])) , (-7L)))
    { 
        int32_t l_61 = 0xD9F1AA49L;
        int32_t l_62 = 0x80EDED62L;
        l_62 = (safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((g_47 = l_41), ((l_61 = (safe_rshift_func_int8_t_s_u(((((l_20[0] & ((p_19 != (l_32 ^= ((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((g_5 = (safe_div_func_int64_t_s_s(g_5, g_21[0].f0))), p_19)) , g_5), 0xE444L)), g_40)), g_40)) , 4294967295UL))) , g_21[0].f0)) == 0xBD7BL) != g_40) == l_60), g_40))) && l_61))) ^ g_21[0].f0), p_19));
        return l_20[0];
    }
    else
    { 
        int32_t l_74[5];
        struct S0 l_120[2] = {{0x89573D52L},{0x89573D52L}};
        int i;
        for (i = 0; i < 5; i++)
            l_74[i] = 0x1971A050L;
        if ((safe_div_func_int16_t_s_s(0xE668L, (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((g_71 ^= (safe_rshift_func_int16_t_s_s((l_41 >= 0x30DD35930CB0470BLL), 14))), ((p_19 <= p_19) ^ 0UL))), 11)))))
        { 
            int32_t l_80[1];
            int i;
            for (i = 0; i < 1; i++)
                l_80[i] = 0xFF34F21DL;
            if ((~2UL))
            { 
lbl_78:
                if (l_41)
                    goto lbl_73;
                g_75[2]--;
            }
            else
            { 
                if (l_41)
                    goto lbl_78;
                if (g_5)
                    goto lbl_73;
            }
            for (p_19 = 2; (p_19 >= 0); p_19 -= 1)
            { 
                ++g_82;
            }
            for (g_47 = 0; (g_47 <= 4); g_47 = safe_add_func_int16_t_s_s(g_47, 5))
            { 
                uint32_t l_87[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_87[i] = 18446744073709551611UL;
                if (l_87[1])
                    break;
            }
        }
        else
        { 
            uint16_t l_93 = 65535UL;
            int8_t l_118 = 0xD6L;
lbl_119:
            if (((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s(((((safe_sub_func_int8_t_s_s(l_93, (safe_mod_func_int64_t_s_s((((l_96 , ((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((g_71 = ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((l_93 < (safe_mod_func_int8_t_s_s(g_81, l_93))) | p_19), 0xD5L)), 6)) & l_96.f0)) | (-10L)), p_19)), 9L)) == p_19)) <= g_40) , g_75[1]), 0xE7447E3892391BE1LL)))) || p_19) & l_74[2]) , l_41))), l_74[3])) && p_19))
            { 
                if (g_71)
                    goto lbl_73;
                return l_74[3];
            }
            else
            { 
                --g_107[2];
            }
            if (((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_107[2], (p_19 || ((g_40 ^ l_118) || g_5)))), l_118)), l_74[3])), l_74[4])) ^ 8L))
            { 
                if (l_118)
                    goto lbl_73;
            }
            else
            { 
                if (l_93)
                    goto lbl_119;
            }
            l_120[0] = l_96;
        }
    }
    for (g_47 = 0; (g_47 >= 32); g_47 = safe_add_func_uint32_t_u_u(g_47, 3))
    { 
        int16_t l_150 = (-5L);
        int32_t l_151 = 1L;
        int32_t l_152 = 0x4279C2BDL;
        int32_t l_177 = 1L;
        for (g_79 = 0; (g_79 >= (-20)); --g_79)
        { 
            return p_19;
        }
        for (l_96.f0 = 0; (l_96.f0 >= 0); l_96.f0 -= 1)
        { 
            for (p_19 = 0; (p_19 >= 0); p_19 -= 1)
            { 
                int32_t l_126 = (-1L);
                struct S0 l_130 = {-1L};
                --l_127;
                g_21[0] = l_130;
            }
            for (l_60 = 0; (l_60 <= 0); l_60 += 1)
            { 
                int32_t l_142[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_142[i] = (-7L);
                l_41 ^= ((safe_lshift_func_uint16_t_u_u((g_107[2] ^= (g_5 ^= (~0x07556C5F0395E10BLL))), 7)) , (l_142[1] = (l_20[l_60] > (((safe_mul_func_int8_t_s_s(g_107[2], ((((safe_div_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s(65535UL, 11)) | l_20[l_60]) ^ g_47) || p_19) , g_75[2]), 9UL)) , p_19), g_40)) , g_125) || (-1L)) != 0x89L))) >= 0UL) && p_19))));
                if (l_60)
                    goto lbl_143;
            }
        }
        if ((safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((l_151 = (l_150 = ((g_47 <= (safe_mod_func_uint64_t_u_u(p_19, p_19))) , (p_19 | l_32)))) || l_151), l_32)), l_152)))
        { 
            uint32_t l_173[3][3][5] = {{{18446744073709551615UL,18446744073709551608UL,9UL,1UL,1UL},{0x47E018F5L,0x6A61A6B3L,0x47E018F5L,0x764A2DA5L,18446744073709551608UL},{0x50D3AC3EL,1UL,18446744073709551608UL,0x764A2DA5L,0x47E018F5L}},{{18446744073709551608UL,9UL,1UL,1UL,9UL},{9UL,18446744073709551613UL,18446744073709551608UL,0x47E018F5L,4UL},{0x6A61A6B3L,18446744073709551613UL,0x47E018F5L,5UL,0x92C6C47EL}},{{0x7B476EADL,9UL,9UL,0x7B476EADL,5UL},{0x6A61A6B3L,1UL,4UL,18446744073709551615UL,5UL},{9UL,0x6A61A6B3L,0x92C6C47EL,18446744073709551608UL,0x92C6C47EL}}};
            int32_t l_197 = 1L;
            int32_t l_198 = 0xD1C9D4F0L;
            int i, j, k;
            g_174 = ((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((0x353C7893L > (((safe_mul_func_int16_t_s_s((-9L), (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((l_152 <= (p_19 && l_152)), g_21[0].f0)), 1L)) | l_127), 3)), 7)))) | 6L) | 0x159E33F92C7F7F81LL)) | l_150), 0x262ADE66L)) && l_152), g_125)), 6)), l_173[2][0][4])), p_19)) ^ 9L);
            if ((safe_mod_func_int32_t_s_s(((g_107[2] & ((l_177 = ((--g_178) <= (g_181 = l_151))) ^ p_19)) && ((safe_lshift_func_uint16_t_u_s(l_150, 1)) || (-4L))), 0x016727E7L)))
            { 
                union U1 l_199 = {18446744073709551609UL};
                l_151 |= (l_194 &= (safe_div_func_int16_t_s_s(((l_32 &= (((safe_rshift_func_uint8_t_u_u(g_79, ((safe_lshift_func_int8_t_s_u((l_41 = (safe_sub_func_int32_t_s_s((g_181 = (-1L)), ((safe_sub_func_uint32_t_u_u(l_173[2][0][4], (((l_177 = l_152) > 1UL) >= p_19))) ^ p_19)))), l_173[1][2][3])) , p_19))) != 1L) >= l_173[2][0][4])) < l_173[2][0][4]), g_81)));
                l_198 |= (l_41 > ((safe_lshift_func_int8_t_s_u((l_197 ^= ((g_181 & ((6L <= (g_47 & g_178)) , p_19)) != 0xF759L)), g_47)) & 1L));
                g_181 ^= (g_107[2] && (l_199 , (+3L)));
            }
            else
            { 
                int64_t l_201 = (-1L);
                int32_t l_212 = 0xB93C28B9L;
                struct S0 l_217 = {-2L};
                l_201 &= 0xBE43F028L;
                l_212 = ((g_21[0] , (safe_sub_func_uint32_t_u_u((l_201 > (((safe_rshift_func_int16_t_s_s(((safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((((p_19 == g_181) , 0x715622FDL) , p_19) < p_19), 0x302D848DL)) > l_201), g_71)) >= p_19), g_82)) <= g_40) >= l_151)), l_32))) , g_181);
                l_197 |= (safe_mul_func_int16_t_s_s((-1L), ((safe_sub_func_int64_t_s_s((l_217 , g_75[2]), (g_107[2] && g_40))) , g_75[1])));
            }
            for (l_96.f0 = (-12); (l_96.f0 <= 11); l_96.f0 = safe_add_func_int32_t_s_s(l_96.f0, 5))
            { 
                l_177 = (g_181 = l_32);
                l_198 ^= 0x45B0E519L;
            }
        }
        else
        { 
            uint32_t l_240[5] = {1UL,1UL,1UL,1UL,1UL};
            uint32_t l_252 = 8UL;
            int i;
            for (l_60 = 0; (l_60 == 4); l_60 = safe_add_func_uint64_t_u_u(l_60, 4))
            { 
                uint32_t l_223 = 0xAA762861L;
                l_223++;
            }
            if ((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((g_21[0] , (safe_unary_minus_func_uint64_t_u((g_242 |= (g_241 = ((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((-2L))), (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(0L, (safe_sub_func_int16_t_s_s((p_19 <= 1UL), g_181)))) < 246UL), l_152)))) > l_240[3])))))) == l_96.f0), g_107[1])), p_19)))
            { 
                uint64_t l_250 = 18446744073709551608UL;
                int32_t l_251 = 0x46F7C305L;
                g_181 &= ((l_251 = (p_19 , (safe_mod_func_uint64_t_u_u(((g_242 ^ g_82) | ((!((((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((7L <= l_151), 5)), l_250)) == 6UL) >= g_107[2]) < g_81)) && l_240[0])), l_250)))) , g_178);
                g_242 &= l_252;
                if (g_75[1])
                    continue;
            }
            else
            { 
                g_242 = l_222;
            }
        }
    }
    return l_32;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_21[i].f0, "g_21[i].f0", print_hash_value);

    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);

    }
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);

    }
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_300[i][j], "g_300[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_328[i][j].f0, "g_328[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_332[i].f0, "g_332[i].f0", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_343[i], "g_343[i]", print_hash_value);

    }
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
