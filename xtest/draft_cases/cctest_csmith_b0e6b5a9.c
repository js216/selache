// SPDX-License-Identifier: MIT
// cctest_csmith_b0e6b5a9.c --- cctest case csmith_b0e6b5a9 (csmith seed 2967909801)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xafac968 */

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

// Options:   -s 2967909801 -o /tmp/csmith_gen_o5sff4_d/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int64_t  f1;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   uint8_t  f1;
};

union U2 {
   uint32_t  f0;
   int64_t  f1;
   int8_t * f2;
};

union U3 {
   const signed f0 : 12;
   uint16_t  f1;
};

union U4 {
   const int8_t * f0;
   uint16_t  f1;
};

union U5 {
   uint8_t  f0;
   int16_t  f1;
   uint8_t  f2;
   unsigned f3 : 17;
   int32_t  f4;
};

union U6 {
   uint64_t  f0;
   const struct S0  f1;
   int64_t  f2;
   struct S0  f3;
};


static int8_t g_9[6] = {1L,0L,1L,1L,0L,1L};
static int8_t *g_8[2] = {&g_9[3],&g_9[3]};
static int32_t g_27 = 1L;
static uint16_t g_40 = 0xEF40L;
static union U6 g_41 = {1UL};
static uint8_t g_52 = 0xC4L;
static int8_t g_75 = (-1L);
static uint16_t g_76[2][4][4] = {{{0x01CCL,0x01CCL,0x01CCL,0x01CCL},{0x01CCL,0x01CCL,0x01CCL,0x01CCL},{0x01CCL,0x01CCL,0x01CCL,0x01CCL},{0x01CCL,0x01CCL,0x01CCL,0x01CCL}},{{0x01CCL,0x01CCL,0x01CCL,0x01CCL},{0x01CCL,0x01CCL,0x01CCL,0x01CCL},{0x01CCL,0x01CCL,0x01CCL,0x01CCL},{0x01CCL,0x01CCL,0x01CCL,0x01CCL}}};
static const union U3 g_81 = {0x7453A37FL};
static int16_t g_101 = 1L;
static int32_t g_102 = (-1L);
static int16_t g_103 = 0xA479L;
static uint32_t g_104 = 0UL;
static int32_t ** const g_112 = (void*)0;
static int32_t ** const *g_111[2] = {&g_112,&g_112};
static uint64_t g_169[4][3] = {{0x3861B4666DC25B18LL,0xA0D05BA9ED696CBCLL,0x3861B4666DC25B18LL},{0UL,0UL,18446744073709551615UL},{1UL,0x3861B4666DC25B18LL,1UL},{18446744073709551615UL,0UL,18446744073709551615UL}};
static struct S0 g_175[7][4] = {{{4294967295UL,1L},{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,1L},{4294967295UL,1L}},{{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,0x346E159BBAF6B6E5LL},{4294967295UL,0xF13F4DB05CABCBA9LL}},{{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,1L},{4294967295UL,1L},{4294967295UL,0xF13F4DB05CABCBA9LL}},{{4294967295UL,1L},{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,1L},{4294967295UL,1L}},{{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,0x346E159BBAF6B6E5LL},{4294967295UL,0xF13F4DB05CABCBA9LL}},{{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,1L},{4294967295UL,1L},{4294967295UL,0xF13F4DB05CABCBA9LL}},{{4294967295UL,1L},{4294967295UL,0xF13F4DB05CABCBA9LL},{4294967295UL,1L},{4294967295UL,1L}}};
static uint64_t g_206[1][2] = {{18446744073709551615UL,18446744073709551615UL}};
static union U1 g_235 = {4294967294UL};
static uint16_t g_261 = 0UL;
static int16_t g_282 = 1L;
static int32_t *g_366 = &g_27;
static int64_t *g_379 = &g_41.f2;
static union U5 g_409 = {3UL};
static union U2 g_476 = {0UL};
static const int32_t g_489[5][2] = {{0x85A905C7L,0x85A905C7L},{0x85A905C7L,0x85A905C7L},{0x85A905C7L,0x85A905C7L},{0x85A905C7L,0x85A905C7L},{0x85A905C7L,0x85A905C7L}};
static union U4 *g_492 = (void*)0;
static union U4 g_494 = {0};
static union U3 g_513 = {-6L};
static int32_t g_527[5][4][6] = {{{2L,2L,0x7F081A31L,0L,0x7F081A31L,2L},{0x7F081A31L,9L,0L,0L,9L,0x7F081A31L},{2L,0x7F081A31L,0L,0x7F081A31L,2L,2L},{(-4L),0x7F081A31L,0x7F081A31L,(-4L),9L,(-4L)}},{{(-4L),9L,(-4L),0x7F081A31L,0x7F081A31L,(-4L)},{2L,2L,0x7F081A31L,0L,0x7F081A31L,2L},{0x7F081A31L,9L,0L,0L,9L,0x7F081A31L},{2L,0x7F081A31L,0L,0x7F081A31L,2L,2L}},{{(-4L),0x7F081A31L,0x7F081A31L,(-4L),9L,(-4L)},{(-4L),9L,(-4L),0x7F081A31L,0x7F081A31L,(-4L)},{2L,2L,0x7F081A31L,0L,0x7F081A31L,2L},{0x7F081A31L,9L,0L,0L,9L,0x7F081A31L}},{{2L,0x7F081A31L,0L,0x7F081A31L,2L,2L},{(-4L),0x7F081A31L,0x7F081A31L,(-4L),9L,(-4L)},{(-4L),9L,(-4L),0x7F081A31L,0x7F081A31L,(-4L)},{2L,2L,0x7F081A31L,0L,0x7F081A31L,2L}},{{0x7F081A31L,9L,0L,0L,9L,0x7F081A31L},{2L,0x7F081A31L,0L,0x7F081A31L,2L,2L},{(-4L),0x7F081A31L,0x7F081A31L,(-4L),9L,(-4L)},{(-4L),9L,(-4L),0x7F081A31L,0x7F081A31L,(-4L)}}};
static const union U4 g_574 = {0};
static uint8_t g_615 = 0x64L;
static int32_t g_701 = 0xC054D865L;
static uint16_t g_730 = 1UL;
static struct S0 g_771 = {0x097CA5D8L,-1L};
static uint8_t *g_832 = &g_52;
static union U3 g_893 = {1L};
static union U3 g_897 = {-1L};
static uint64_t g_939 = 0xC229014E6C07E01ELL;
static uint16_t g_946 = 0xC598L;
static union U2 *g_963 = &g_476;
static union U2 **g_962 = &g_963;
static int64_t g_976 = 0x086DBC37E1D09D54LL;
static uint16_t g_978 = 0x7946L;
static int16_t *g_982 = &g_409.f1;
static int16_t **g_981[3] = {&g_982,&g_982,&g_982};
static int32_t *g_998 = (void*)0;



static int64_t  func_1(void);
static uint8_t  func_4(int8_t * p_5, int8_t * p_6, int16_t  p_7);
static int8_t ** func_11(const int8_t * p_12, uint64_t  p_13, int16_t  p_14);
static int8_t * func_15(union U6  p_16, uint64_t  p_17);
static int32_t  func_23(int8_t * p_24);
static union U6  func_28(int8_t ** p_29, uint64_t  p_30, int8_t ** p_31);
static int8_t ** func_32(struct S0  p_33, int8_t ** p_34, union U1  p_35, const int32_t * p_36);
static union U6  func_38(int32_t * p_39);




static int64_t  func_1(void)
{ 
    uint32_t l_10 = 0xAFA01777L;
    uint8_t *l_614 = &g_615;
    union U3 l_616[4][7] = {{{0xCA2F0FAFL},{0x74B36B86L},{-1L},{0x74B36B86L},{0xCA2F0FAFL},{0x835874AFL},{0xCA2F0FAFL}},{{0xD87D1F0DL},{2L},{2L},{0xD87D1F0DL},{2L},{2L},{0xD87D1F0DL}},{{0x65B36DE8L},{0x74B36B86L},{0x65B36DE8L},{-1L},{0xCA2F0FAFL},{-1L},{-1L}},{{2L},{2L},{0xD87D1F0DL},{2L},{2L},{0xD87D1F0DL},{2L}}};
    int32_t l_617 = (-1L);
    uint32_t *l_624 = &g_175[6][0].f0;
    int8_t l_657[6] = {0x6FL,0x6FL,0x6FL,0x6FL,0x6FL,0x6FL};
    int32_t l_658 = 0xB30010F9L;
    int32_t *l_664 = (void*)0;
    union U4 *l_679 = (void*)0;
    uint64_t *l_711[6][4][1] = {{{&g_41.f0},{&g_169[0][2]},{&g_206[0][0]},{&g_169[1][1]}},{{(void*)0},{&g_169[1][1]},{&g_206[0][0]},{&g_169[0][2]}},{{&g_41.f0},{&g_206[0][0]},{&g_41.f0},{&g_169[0][2]}},{{&g_206[0][0]},{&g_169[1][1]},{(void*)0},{&g_169[1][1]}},{{&g_206[0][0]},{&g_169[0][2]},{&g_41.f0},{&g_206[0][0]}},{{&g_41.f0},{&g_169[0][2]},{&g_206[0][0]},{&g_169[1][1]}}};
    int32_t **l_723[7][7] = {{(void*)0,(void*)0,&g_366,&g_366,(void*)0,(void*)0,(void*)0},{&l_664,(void*)0,(void*)0,&l_664,(void*)0,&l_664,(void*)0},{&g_366,&g_366,(void*)0,&g_366,(void*)0,&g_366,&g_366},{&g_366,(void*)0,&g_366,(void*)0,&g_366,&g_366,(void*)0},{&l_664,(void*)0,&l_664,(void*)0,(void*)0,&l_664,(void*)0},{(void*)0,(void*)0,&g_366,&g_366,(void*)0,(void*)0,(void*)0},{&l_664,(void*)0,(void*)0,&l_664,(void*)0,&l_664,(void*)0}};
    int32_t ***l_722 = &l_723[5][1];
    int32_t ****l_721 = &l_722;
    int16_t l_725 = 9L;
    uint8_t l_726 = 254UL;
    union U6 l_741 = {0x1FE177DC308F15A7LL};
    union U2 l_766 = {0x74DB7582L};
    struct S0 l_770 = {0x60757A7AL,0x9AB5C3F090DA66D3LL};
    union U1 l_799[7][2][1] = {{{{0x4EBE61BDL}},{{0xD465DB1FL}}},{{{0xD465DB1FL}},{{0x4EBE61BDL}}},{{{0xD465DB1FL}},{{0xD465DB1FL}}},{{{0x4EBE61BDL}},{{0xD465DB1FL}}},{{{0xD465DB1FL}},{{0x4EBE61BDL}}},{{{0xD465DB1FL}},{{0xD465DB1FL}}},{{{0x4EBE61BDL}},{{0xD465DB1FL}}}};
    uint64_t l_835 = 0x6FD045ADBE8EFE86LL;
    int8_t l_856 = 2L;
    const int32_t l_857 = 0xD016767FL;
    uint32_t l_870[5][3][2] = {{{0x1AF364D4L,0UL},{0xDC8989CDL,0x85932B28L},{1UL,0x32782046L}},{{0UL,4294967286UL},{4294967286UL,4294967286UL},{0UL,0x32782046L}},{{1UL,0x85932B28L},{0xDC8989CDL,0UL},{0x1AF364D4L,0xDC8989CDL}},{{0x570568EEL,0xCE4D5D3BL},{0x570568EEL,0xDC8989CDL},{0x1AF364D4L,0UL}},{{0xDC8989CDL,0x85932B28L},{1UL,0x32782046L},{0UL,4294967286UL}}};
    int32_t l_907 = 8L;
    int32_t l_921 = (-1L);
    union U5 *l_925 = &g_409;
    uint32_t l_944 = 1UL;
    int8_t **l_945 = &g_8[1];
    int32_t l_954 = 4L;
    int64_t l_974[6][7] = {{0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL},{0L,0L,0L,0L,0L,0L,0L},{0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL},{0L,0L,0L,0L,0L,0L,0L},{0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL,0x8518F2191BF7969BLL},{0L,0L,0L,0L,0L,0L,0L}};
    int64_t l_986 = 4L;
    int32_t *l_996 = (void*)0;
    int64_t l_1007 = 0x2033A1D00C47E282LL;
    const uint64_t l_1011[5][6] = {{0x840FE9D6374E5D7ALL,8UL,0x19A4602A03FE4F19LL,0x9C1985C94CAD0DB0LL,0x168D4D161B17876ELL,18446744073709551615UL},{0x0A22721B31BF34D8LL,0xDF19A27C6A31E9ECLL,0x7FC576D84EEEDE95LL,0x168D4D161B17876ELL,0x7FC576D84EEEDE95LL,0xDF19A27C6A31E9ECLL},{0x0A22721B31BF34D8LL,18446744073709551615UL,0x168D4D161B17876ELL,0x9C1985C94CAD0DB0LL,0x19A4602A03FE4F19LL,18446744073709551615UL},{8UL,0xD716E89D387F6D64LL,18446744073709551615UL,0x0A22721B31BF34D8LL,0x0A22721B31BF34D8LL,18446744073709551615UL},{0xD716E89D387F6D64LL,0xD716E89D387F6D64LL,0xDF19A27C6A31E9ECLL,8UL,0x7FC576D84EEEDE95LL,0x0A22721B31BF34D8LL}};
    uint16_t *l_1015[4];
    int32_t l_1024 = (-5L);
    int32_t l_1025 = (-1L);
    int32_t l_1026 = 0xEF125F87L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1015[i] = &g_730;
    if (((safe_lshift_func_uint8_t_u_u(func_4(g_8[1], &g_9[3], l_10), ((*l_614) = l_10))) == ((l_617 = (l_616[0][6] , l_10)) != l_10)))
    { 
        uint32_t *l_626 = (void*)0;
        uint32_t **l_625 = &l_626;
        int32_t l_631 = 0xF1671384L;
        int32_t l_655[1];
        const struct S0 l_675 = {0xF7D04B28L,0x452092522005CB9ALL};
        int8_t **l_676 = &g_8[0];
        int8_t *l_680 = (void*)0;
        int8_t *l_681 = (void*)0;
        int8_t *l_682 = (void*)0;
        int8_t *l_683[7][3][4] = {{{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&g_9[1],&l_657[0]}},{{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&g_9[1],&l_657[0]}},{{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&g_9[1],&l_657[0]}},{{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&g_9[1],&l_657[0]}},{{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&g_9[1],&l_657[0]}},{{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&g_9[1],&l_657[0]}},{{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&l_657[0],&l_657[0]},{&l_657[0],&l_657[0],&g_9[1],&l_657[0]}}};
        uint32_t l_684 = 0x803AF015L;
        const union U3 l_689[6][4] = {{{0xF395023FL},{0xF395023FL},{0xF395023FL},{0xF395023FL}},{{0xF395023FL},{0xF395023FL},{0xF395023FL},{0xF395023FL}},{{0xF395023FL},{0xF395023FL},{0xF395023FL},{0xF395023FL}},{{0xF395023FL},{0xF395023FL},{0xF395023FL},{0xF395023FL}},{{0xF395023FL},{0xF395023FL},{0xF395023FL},{0xF395023FL}},{{0xF395023FL},{0xF395023FL},{0xF395023FL},{0xF395023FL}}};
        int16_t * const l_769 = &g_103;
        int32_t *l_786 = (void*)0;
        int16_t l_805 = 0xD6F3L;
        uint8_t *l_830[5][3][1] = {{{&g_409.f2},{&g_409.f2},{&g_615}},{{(void*)0},{&g_615},{(void*)0}},{{&g_615},{&g_409.f2},{&g_409.f2}},{{&g_615},{(void*)0},{&g_615}},{{(void*)0},{&g_615},{&g_409.f2}}};
        struct S0 **l_847 = (void*)0;
        struct S0 *l_849[6] = {&g_175[3][3],&g_175[6][0],&g_175[6][0],&g_175[3][3],&g_175[6][0],&g_175[6][0]};
        struct S0 **l_848 = &l_849[3];
        union U3 *l_896 = &g_897;
        const union U1 l_898 = {4294967292UL};
        union U6 l_910 = {18446744073709551614UL};
        int32_t *l_932 = &g_27;
        int16_t l_948 = (-6L);
        union U2 *l_961 = &g_476;
        union U2 **l_960 = &l_961;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_655[i] = (-3L);
lbl_782:
        if ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_int16_t_s_s((l_624 != (l_616[0][6].f0 , ((*l_625) = g_366))), (safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((l_631 && (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(0xB93DL, (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(((g_81 , ((g_489[1][0] , (void*)0) == (void*)0)) | 1UL), g_103)) < 6L) | l_631), l_631)), 4294967295UL)))), 1L)) , l_631), 15))), l_10)), 0x81BC31CBFCBBED8ALL)))) | l_10), 0)), 6)))
        { 
            int32_t l_648 = 0x7FDAE021L;
            (*g_366) = (safe_add_func_uint16_t_u_u(g_489[1][0], 0x30EAL));
            for (l_617 = 0; (l_617 >= (-10)); l_617 = safe_sub_func_uint32_t_u_u(l_617, 1))
            { 
                uint64_t l_649[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_649[i] = 0xEB733B659FABF4D2LL;
                l_648 ^= ((*g_366) = l_617);
                for (g_261 = 0; (g_261 <= 1); g_261 += 1)
                { 
                    int32_t *l_652 = &g_527[2][3][2];
                    (*l_652) ^= ((l_649[1] || (*g_366)) || (++(*l_614)));
                }
            }
            (*g_366) ^= (-1L);
        }
        else
        { 
            int32_t l_654[7] = {1L,2L,2L,1L,2L,2L,1L};
            uint64_t l_659 = 0xD307729216D352B8LL;
            int i;
            (*g_366) = l_631;
            for (g_409.f0 = 1; (g_409.f0 <= 5); g_409.f0 += 1)
            { 
                int32_t *l_653[1];
                int8_t l_656 = (-1L);
                int i;
                for (i = 0; i < 1; i++)
                    l_653[i] = &g_527[4][2][2];
                l_659++;
                (*g_366) &= (-5L);
                for (l_10 = 0; (l_10 <= 1); l_10 += 1)
                { 
                    int32_t *l_662 = &g_527[2][3][2];
                    int32_t **l_663 = &l_653[0];
                    int i;
                    l_664 = ((*l_663) = l_662);
                    if (g_9[l_10])
                        break;
                }
            }
        }
        if ((((safe_rshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u((((*l_624) ^= g_75) , l_631), (safe_mul_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((&l_657[0] != (l_675 , ((*l_676) = &l_657[0]))), (safe_rshift_func_int8_t_s_u((g_9[4] = ((void*)0 == l_679)), l_675.f1)))) <= l_675.f1), 0x20AC1293L)) < g_27) ^ (*g_379)) != g_76[0][3][3]), g_527[4][1][4])))) > (-1L)), g_175[6][0].f1)) ^ 0x96C1B6E958A770ACLL) >= l_684))
        { 
            uint16_t l_692[2];
            struct S0 l_757 = {0x07C45752L,0L};
            int32_t l_773 = 0x0FB81C83L;
            int8_t l_774 = (-8L);
            uint16_t l_804 = 0x15BBL;
            uint32_t l_817 = 0x7516B1AAL;
            int i;
            for (i = 0; i < 2; i++)
                l_692[i] = 3UL;
            for (g_409.f1 = 0; (g_409.f1 < (-6)); g_409.f1--)
            { 
                uint64_t *l_710 = &g_41.f0;
                int32_t l_724 = 0x150CA5FEL;
                union U4 * const l_806 = &g_494;
                if ((safe_add_func_uint8_t_u_u((l_689[2][2] , 0xA5L), (247UL & ((safe_add_func_int16_t_s_s(l_692[1], (((safe_add_func_uint16_t_u_u((l_692[0] , g_206[0][0]), ((void*)0 == (*l_676)))) & (*g_366)) != 18446744073709551611UL))) >= 0x3004L)))))
                { 
                    struct S0 *l_695 = (void*)0;
                    struct S0 *l_696 = &g_175[6][0];
                    int32_t l_727[4][2] = {{0xE5929F89L,0xE5929F89L},{0xE5929F89L,0xE5929F89L},{0xE5929F89L,0xE5929F89L},{0xE5929F89L,0xE5929F89L}};
                    int i, j;
                    (*l_696) = l_675;
                    l_655[0] &= (safe_rshift_func_int16_t_s_u(g_261, ((safe_rshift_func_int8_t_s_s(g_701, 5)) >= (safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((l_710 != l_711[1][3][0]) >= (safe_sub_func_uint16_t_u_u(((&g_111[0] != ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((0x91BA7710L == (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(((*g_366) = (&g_574 == (void*)0)))) || g_489[3][1]), g_41.f2))) > g_282) == 0x82L), 1UL)), g_76[0][3][3])) , l_721)) > 0xD0L), l_724))), l_724)), 0xD8L)) > l_725), l_726)) != 1L), g_409.f2)))));
                    if (l_727[0][0])
                        continue;
                    (*g_366) = (safe_rshift_func_int16_t_s_u(l_692[1], l_727[0][0]));
                    g_730--;
                }
                else
                { 
                    uint8_t l_733 = 1UL;
                    return l_733;
                }
                for (g_41.f3.f1 = (-13); (g_41.f3.f1 == (-6)); g_41.f3.f1++)
                { 
                    union U1 *l_737[2];
                    union U1 **l_736 = &l_737[1];
                    union U1 *l_739 = &g_235;
                    union U1 **l_738 = &l_739;
                    int32_t l_740 = 0x7E209260L;
                    const struct S0 *l_748 = &g_175[6][0];
                    uint16_t *l_751 = &l_616[0][6].f1;
                    uint16_t *l_752[6];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_737[i] = &g_235;
                    for (i = 0; i < 6; i++)
                        l_752[i] = (void*)0;
                    l_740 = (((*l_738) = ((*l_736) = &g_235)) == &g_235);
                    (*g_366) &= (65528UL == (0xDCACL & ((l_741 , ((g_175[6][0].f1 <= ((g_52 , ((((0xB4CDL & (g_169[3][2] != 0x5BL)) , (*g_379)) < (-1L)) , &l_655[0])) != (void*)0)) >= g_169[3][2])) ^ l_740)));
                    (*g_366) = (l_740 < (safe_mod_func_int64_t_s_s(((+(safe_unary_minus_func_int64_t_s((((((l_748 == (void*)0) , g_282) , g_76[0][3][3]) > (g_261 ^= (safe_mul_func_int16_t_s_s(g_701, ((&g_494 != (void*)0) >= l_692[0]))))) || 0xEA7BEC90L)))) > l_740), (*g_379))));
                    (*g_366) = (safe_sub_func_uint16_t_u_u((0xFAL ^ (((l_757 , (safe_sub_func_int8_t_s_s(((**l_676) = (safe_lshift_func_int16_t_s_s((((-7L) || (safe_sub_func_uint32_t_u_u(((l_692[1] >= g_175[6][0].f0) || g_169[3][2]), (safe_mul_func_int16_t_s_s((l_692[1] != l_757.f0), l_724))))) & l_675.f0), g_513.f0))), l_655[0]))) || l_655[0]) == l_692[1])), g_40));
                }
                (*g_366) &= (((l_766 , ((**l_676) ^= (safe_mul_func_int16_t_s_s(0L, ((void*)0 != l_769))))) | (((g_771 = l_770) , ((l_616[1][0] , ((safe_unary_minus_func_int16_t_s((((l_773 ^= (0x1E5D66A3L ^ l_724)) ^ 0xB4L) , l_675.f0))) , l_774)) == l_631)) | l_724)) || l_724);
                for (l_770.f0 = 0; (l_770.f0 <= 58); l_770.f0 = safe_add_func_uint8_t_u_u(l_770.f0, 8))
                { 
                    union U2 *l_778 = &l_766;
                    union U2 **l_777 = &l_778;
                    union U2 **l_779 = (void*)0;
                    union U2 *l_781 = &l_766;
                    union U2 **l_780 = &l_781;
                    struct S0 *l_783 = &g_175[6][0];
                    (*l_780) = ((*l_777) = &l_766);
                    if (g_235.f1)
                        goto lbl_782;
                    (*l_783) = g_175[6][0];
                }
                for (l_774 = 0; (l_774 == 29); l_774++)
                { 
                    union U2 l_787 = {18446744073709551615UL};
                    int32_t *l_788 = &l_773;
                    l_786 = &l_655[0];
                    l_788 = (l_787 , &l_773);
                    (*l_786) = (1L != (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((g_527[0][0][1] != ((+(!(safe_sub_func_uint8_t_u_u((((*g_379) && (l_799[3][1][0] , ((g_489[1][0] == (safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(0xDED0L, ((((g_81.f0 == g_771.f0) != 0xBEL) >= g_527[2][3][2]) != g_175[6][0].f0))), 18446744073709551615UL))) <= g_527[2][3][2]))) >= (*l_786)), l_804)))) != 0xB0204CC1L)), l_805)), (*l_788))), g_701)));
                    l_773 = (l_806 == (void*)0);
                    (*l_788) |= ((((*l_786) ^= ((~0x561AB618L) | ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_u(((*l_614) = 0xD1L), 0)))), g_235.f0)) <= ((safe_add_func_int16_t_s_s(((l_724 >= g_169[0][1]) && (safe_mul_func_uint16_t_u_u(6UL, ((&g_81 == &g_81) , g_476.f0)))), l_724)) | (*g_379))))) & 0xAB8E049DL) == l_631);
                }
            }
            l_817--;
        }
        else
        { 
            int32_t l_820 = 0x8892ABF8L;
            return l_820;
        }
        if (g_235.f1)
            goto lbl_846;
lbl_846:
        for (l_726 = 0; (l_726 > 13); l_726 = safe_add_func_uint8_t_u_u(l_726, 1))
        { 
            uint64_t l_823 = 0x26BB727783D4E661LL;
            uint16_t *l_827[5] = {&g_40,&g_40,&g_40,&g_40,&g_40};
            uint8_t **l_831[7] = {&l_830[0][0][0],&l_830[0][0][0],&l_830[0][0][0],&l_830[0][0][0],&l_830[0][0][0],&l_830[0][0][0],&l_830[0][0][0]};
            uint8_t ***l_840 = &l_831[5];
            uint8_t **l_841 = &g_832;
            const union U3 **l_842[1][6];
            const union U3 ***l_843 = (void*)0;
            const union U3 ***l_844 = (void*)0;
            const union U3 ***l_845 = &l_842[0][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_842[i][j] = (void*)0;
            }
            (*g_366) = (l_823 <= ((safe_add_func_uint32_t_u_u(((g_76[1][1][3] = (+(255UL < 0x59L))) && (g_101 <= ((safe_mul_func_uint16_t_u_u(((l_770 , l_830[0][0][0]) == (g_832 = &g_615)), g_489[1][1])) & 0UL))), g_235.f0)) > l_655[0]));
            if (g_409.f1)
                goto lbl_782;
            if (l_655[0])
                break;
            (*g_366) = (safe_rshift_func_int8_t_s_s((((l_835 , &g_112) != &g_112) > (safe_div_func_uint64_t_u_u((((*l_840) = ((safe_lshift_func_int8_t_s_u(l_823, 6)) , &l_614)) != l_841), (g_574 , (*g_379))))), 0));
            (*l_845) = l_842[0][0];
        }
lbl_867:
        (*l_848) = &l_770;
        if ((l_655[0] | (((g_489[4][1] && (safe_sub_func_uint64_t_u_u((((((((g_409.f1 ^ ((g_169[1][2] == ((safe_rshift_func_int16_t_s_u(g_169[3][2], g_527[2][3][2])) == (safe_mul_func_int16_t_s_s((g_41 , l_655[0]), g_52)))) == 0xE0L)) < g_206[0][0]) >= 0x93L) & 0xDA891C48L) >= l_856) , g_103) != l_857), (*g_379)))) ^ 1L) & g_9[3])))
        { 
            uint64_t l_866 = 0xB5283C3EDD3608AELL;
            int32_t l_869 = 0x87F4F67BL;
            int32_t *l_880[1][7] = {{&l_655[0],&g_527[2][3][2],&g_527[2][3][2],&l_655[0],&g_527[2][3][2],&g_527[2][3][2],&l_655[0]}};
            int32_t l_881 = (-5L);
            int i, j;
            for (l_741.f0 = 0; (l_741.f0 >= 37); l_741.f0 = safe_add_func_int32_t_s_s(l_741.f0, 6))
            { 
                int16_t l_868 = 0L;
                for (g_27 = 0; (g_27 != 4); g_27 = safe_add_func_int64_t_s_s(g_27, 2))
                { 
                    int32_t l_862[2];
                    uint32_t l_863 = 0x40B4D732L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_862[i] = (-10L);
                    l_863++;
                    l_866 &= l_863;
                }
                if (g_409.f1)
                    goto lbl_867;
                ++l_870[0][1][1];
            }
            for (l_741.f3.f1 = (-28); (l_741.f3.f1 >= (-1)); l_741.f3.f1 = safe_add_func_uint16_t_u_u(l_741.f3.f1, 2))
            { 
                union U1 l_877 = {4294967290UL};
                int64_t *l_878 = &g_476.f1;
                int32_t l_879 = 0xAFA8B6A1L;
                const union U3 *l_883[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                const union U3 **l_882 = &l_883[2];
                int i;
                l_869 = (safe_rshift_func_uint16_t_u_u((l_877 , (l_877.f0 & ((*l_878) = (*g_379)))), ((g_101 != (l_879 &= 0L)) , ((func_38(&l_879) , 0UL) & 18446744073709551615UL))));
                l_880[0][3] = &l_869;
                l_881 ^= (*g_366);
                (*l_882) = &g_81;
            }
        }
        else
        { 
            int8_t l_887 = 1L;
            union U3 *l_892 = &g_893;
            int32_t *l_922 = &l_921;
            int32_t l_947[1][3];
            uint8_t * const l_949 = &g_615;
            int32_t l_975[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
            int16_t l_987 = 0xDA53L;
            uint64_t l_988 = 18446744073709551615UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_947[i][j] = 0x96AC7B1CL;
            }
            for (g_730 = 19; (g_730 <= 41); g_730 = safe_add_func_int64_t_s_s(g_730, 8))
            { 
                struct S0 l_886 = {0UL,1L};
                int32_t l_903 = 0x4B51A3EDL;
                g_175[4][0] = l_886;
                if (l_887)
                { 
                    int32_t l_888 = 0x54E594B7L;
                    (*g_366) &= l_888;
                }
                else
                { 
                    union U3 *l_895 = &g_513;
                    union U3 **l_894[5] = {&l_895,&l_895,&l_895,&l_895,&l_895};
                    int32_t l_902[7];
                    struct S0 l_904 = {4294967295UL,6L};
                    int i;
                    for (i = 0; i < 7; i++)
                        l_902[i] = 0xC88DB6D6L;
                    (**l_848) = g_175[5][3];
                    l_903 ^= (+((safe_div_func_uint64_t_u_u((g_169[3][2] = ((((l_896 = (l_892 = &g_513)) == &l_689[2][2]) <= l_887) ^ 253UL)), (l_898 , (safe_mod_func_int32_t_s_s((!((*g_379) = ((l_902[6] == l_684) ^ l_886.f1))), g_27))))) ^ g_9[5]));
                    if ((*g_366))
                        continue;
                    (**l_848) = l_904;
                    l_922 = ((safe_mul_func_uint16_t_u_u(g_771.f1, ((((l_907 >= (((safe_div_func_int64_t_s_s((l_910 , (((safe_rshift_func_uint16_t_u_s((l_903 = (safe_mul_func_int8_t_s_s(((((**l_676) = l_886.f0) > 0UL) && (safe_lshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((g_175[6][0] , (safe_rshift_func_int16_t_s_s(g_41.f2, 3))), g_615)) | l_904.f1), g_701))), (*g_832)))), 4)) == 0L) >= l_921)), l_887)) > (-1L)) != l_886.f1)) && g_235.f0) , 0x458D6BCAL) > g_52))) , &l_903);
                }
            }
            for (g_893.f1 = 17; (g_893.f1 > 58); g_893.f1 = safe_add_func_uint64_t_u_u(g_893.f1, 3))
            { 
                int8_t l_933 = 0L;
                int32_t l_934 = 0x7E389755L;
                for (l_631 = 0; (l_631 < (-14)); l_631 = safe_sub_func_uint64_t_u_u(l_631, 2))
                { 
                    int32_t *l_931 = &l_658;
                    l_932 = l_931;
                    return (*g_379);
                }
                if (g_81.f0)
                    goto lbl_867;
                l_934 = l_933;
            }
            l_947[0][2] &= (((*l_614) = (g_102 < (0xA73C05CB0897A596LL | (func_28(func_11(&g_9[4], (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((**l_676) = (g_939 && (safe_div_func_uint16_t_u_u(65528UL, g_206[0][1])))), (safe_add_func_int16_t_s_s(g_206[0][1], 0L)))), g_76[0][3][3])) && 0x56L) || l_944), g_615), g_41.f0, l_945) , g_946)))) > l_887);
            if (l_948)
            { 
                int16_t l_953 = 0x1CA6L;
                int32_t l_967 = 0x3ACCAE72L;
                int16_t l_968 = 0x8EF2L;
                int32_t l_969 = 1L;
                int32_t l_970 = 0L;
                int32_t l_977 = 0xE14FEC97L;
                (*l_932) ^= (l_680 == l_949);
                for (l_805 = 0; (l_805 <= 3); l_805 += 1)
                { 
                    int32_t *l_950 = &g_701;
                    l_922 = (l_950 = &l_631);
                    return (*l_932);
                }
                for (g_897.f1 = (-14); (g_897.f1 >= 38); ++g_897.f1)
                { 
                    uint32_t l_955 = 18446744073709551612UL;
                    if (l_953)
                        break;
                    g_41.f3 = g_175[5][0];
                    (*l_932) = l_954;
                    ++l_955;
                }
                if ((*g_366))
                { 
                    int32_t * const l_958 = &g_527[2][3][2];
                    int32_t **l_959 = &l_932;
                    (*l_959) = l_958;
                    return (*g_379);
                }
                else
                { 
                    uint32_t l_964[7][5][2] = {{{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL}},{{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL}},{{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL}},{{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL}},{{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL}},{{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL}},{{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL},{4294967295UL,4294967295UL},{4294967295UL,0xA26F6E9EL}}};
                    int32_t l_971 = (-1L);
                    int32_t l_972 = (-1L);
                    int32_t l_973[3][6] = {{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L}};
                    int16_t ***l_983 = &g_981[0];
                    int i, j, k;
                    g_962 = l_960;
                    ++l_964[4][3][1];
                    g_978++;
                    (*l_983) = g_981[1];
                }
                for (g_946 = 0; (g_946 != 54); g_946 = safe_add_func_uint8_t_u_u(g_946, 6))
                { 
                    return l_986;
                }
            }
            else
            { 
                (*g_366) = (&g_963 != &g_963);
            }
            l_988--;
        }
    }
    else
    { 
        uint32_t l_993 = 0x595D2DBEL;
        struct S0 l_994[3][3][1] = {{{{0UL,0x1FCCAE40CB3B1CE8LL}},{{0xD50E2D49L,0x88E1A786C47ACB09LL}},{{0UL,0x1FCCAE40CB3B1CE8LL}}},{{{0xD50E2D49L,0x88E1A786C47ACB09LL}},{{0UL,0x1FCCAE40CB3B1CE8LL}},{{0xD50E2D49L,0x88E1A786C47ACB09LL}}},{{{0UL,0x1FCCAE40CB3B1CE8LL}},{{0xD50E2D49L,0x88E1A786C47ACB09LL}},{{0UL,0x1FCCAE40CB3B1CE8LL}}}};
        struct S0 *l_995 = &l_770;
        int32_t *l_997[5][1][4] = {{{&g_701,&l_658,&l_658,&g_701}},{{&l_921,&l_658,&l_921,&l_658}},{{&l_658,&g_701,&l_921,&l_921}},{{&l_921,&l_921,&l_658,&l_921}},{{&g_701,&g_701,&g_701,&l_658}}};
        const uint16_t l_999 = 65535UL;
        uint8_t l_1001[1];
        int32_t ***l_1010[4][2][7] = {{{&l_723[2][0],&l_723[3][6],&l_723[3][6],&l_723[2][0],&l_723[3][3],&l_723[2][0],&l_723[3][6]},{(void*)0,(void*)0,&l_723[0][2],&l_723[5][3],&l_723[0][2],(void*)0,(void*)0}},{{(void*)0,&l_723[3][6],&l_723[2][0],&l_723[3][6],(void*)0,(void*)0,&l_723[3][6]},{&l_723[5][1],&l_723[3][5],&l_723[5][1],&l_723[0][2],&l_723[0][2],&l_723[5][1],&l_723[3][5]}},{{&l_723[3][6],&l_723[3][3],&l_723[2][0],&l_723[2][0],&l_723[3][3],&l_723[3][6],&l_723[3][3]},{&l_723[5][1],&l_723[0][2],&l_723[0][2],&l_723[5][1],&l_723[3][5],&l_723[5][1],&l_723[0][2]}},{{(void*)0,(void*)0,&l_723[3][6],&l_723[2][0],&l_723[3][6],(void*)0,(void*)0},{(void*)0,&l_723[0][2],&l_723[5][3],&l_723[0][2],(void*)0,(void*)0,&l_723[0][2]}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1001[i] = 0UL;
        for (g_41.f0 = 0; (g_41.f0 >= 37); ++g_41.f0)
        { 
            g_111[0] = &g_112;
        }
        (*l_995) = (l_994[1][2][0] = (l_993 , l_994[1][2][0]));
        g_998 = (l_997[0][0][2] = l_996);
        (*g_366) ^= l_999;
        if ((!l_1001[0]))
        { 
            int16_t l_1004[4] = {0xC9C6L,0xC9C6L,0xC9C6L,0xC9C6L};
            int i;
            (*g_366) = ((((**l_945) |= (safe_mul_func_int16_t_s_s((((((0x6F8C4FEC0BAE6850LL == 0UL) || ((l_1004[1] ^ (!(((+(g_897 , (((((*l_624) &= l_1007) < 0x2E4DF3CEL) > (+(!((((((void*)0 != l_1010[2][1][3]) != g_41.f2) , (void*)0) == (void*)0) != l_1004[1])))) < 18446744073709551615UL))) ^ l_1011[0][3]) > 0xB930E15FL))) || 0x0C10L)) > l_1004[1]) , 4294967295UL) || 4294967295UL), 0xE8A2L))) ^ (*g_832)) , (*g_366));
            return (*g_379);
        }
        else
        { 
            const int32_t *l_1012[7] = {&l_954,&l_954,&l_954,&l_954,&l_954,&l_954,&l_954};
            const int32_t **l_1013 = &l_1012[2];
            int i;
            (*l_1013) = l_1012[2];
        }
    }
    (*g_366) = (safe_unary_minus_func_int64_t_s(((g_169[3][2] = ((((void*)0 != l_1015[0]) ^ 0xA3L) < (((*g_832) < (safe_div_func_uint16_t_u_u(((g_939 = (safe_mod_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((*g_963) , (safe_mod_func_uint8_t_u_u(1UL, l_1024))), g_261)) >= l_1025), 0xF2EDL))) || g_41.f0), l_1026))) & (*g_832)))) == 0xBEC0A8A9380159EELL)));
    return (*g_379);
}



static uint8_t  func_4(int8_t * p_5, int8_t * p_6, int16_t  p_7)
{ 
    union U6 l_18[4][6] = {{{0UL},{0x629C4DDB84C6A37DLL},{0UL},{0UL},{0x629C4DDB84C6A37DLL},{18446744073709551615UL}},{{18446744073709551615UL},{0UL},{18446744073709551615UL},{18446744073709551615UL},{0UL},{18446744073709551615UL}},{{18446744073709551615UL},{0UL},{18446744073709551615UL},{18446744073709551615UL},{0UL},{18446744073709551615UL}},{{18446744073709551615UL},{0UL},{18446744073709551615UL},{18446744073709551615UL},{0UL},{18446744073709551615UL}}};
    uint32_t l_25 = 0x1718BC69L;
    int32_t *l_26 = &g_27;
    struct S0 l_37 = {0x7A88FF76L,0x3ED13222C7E12FD8LL};
    int8_t **l_42 = (void*)0;
    union U1 l_43 = {0xBEC767DBL};
    const int32_t *l_44 = &g_27;
    uint16_t l_153 = 0x68A6L;
    int8_t ***l_613 = &l_42;
    int i, j;
    (*l_613) = func_11(func_15(l_18[3][2], ((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((func_23(((((*l_26) ^= l_25) , func_28(func_32(l_37, (func_38(&g_27) , l_42), l_43, l_44), g_27, l_42)) , p_6)) & g_81.f0), p_7)), l_153)) == g_102)), p_7, p_7);
    return g_235.f0;
}



static int8_t ** func_11(const int8_t * p_12, uint64_t  p_13, int16_t  p_14)
{ 
    int32_t *l_518 = &g_27;
    int32_t l_529 = 1L;
    union U4 *l_571 = (void*)0;
    int8_t **l_612 = &g_8[1];
    for (g_104 = 0; (g_104 > 40); g_104 = safe_add_func_int32_t_s_s(g_104, 9))
    { 
        int32_t **l_519 = &g_366;
        int32_t l_552[5];
        int32_t l_554 = 1L;
        int8_t l_556 = 6L;
        struct S0 l_560[6] = {{0x373109FEL,0x34AE466705D42B5DLL},{0xC0F35E6EL,0x19F8074F60302927LL},{0x373109FEL,0x34AE466705D42B5DLL},{0x373109FEL,0x34AE466705D42B5DLL},{0xC0F35E6EL,0x19F8074F60302927LL},{0x373109FEL,0x34AE466705D42B5DLL}};
        union U1 l_604 = {5UL};
        union U3 *l_609[7] = {&g_513,(void*)0,&g_513,&g_513,(void*)0,&g_513,&g_513};
        union U3 **l_608 = &l_609[6];
        uint32_t l_611 = 0xA048EEF2L;
        int i;
        for (i = 0; i < 5; i++)
            l_552[i] = (-7L);
        (*l_519) = l_518;
        for (g_40 = 29; (g_40 > 14); g_40 = safe_sub_func_uint16_t_u_u(g_40, 1))
        { 
            uint64_t l_540 = 3UL;
            int32_t *l_543 = (void*)0;
            int64_t l_546 = 0x05BE661460219F34LL;
            int32_t l_549 = (-9L);
            int32_t l_551 = (-2L);
            int32_t l_553 = 0xB12D0C62L;
            int32_t l_555[1];
            int32_t l_576 = 0xDC23DE0AL;
            int16_t *l_594 = (void*)0;
            int16_t *l_595 = &g_282;
            union U1 *l_605 = &g_235;
            int32_t *l_610 = &g_527[2][3][2];
            int i;
            for (i = 0; i < 1; i++)
                l_555[i] = (-5L);
            if ((**l_519))
                break;
            for (g_409.f4 = 0; (g_409.f4 <= 15); g_409.f4 = safe_add_func_uint32_t_u_u(g_409.f4, 5))
            { 
                int32_t *l_526 = &g_527[2][3][2];
                int32_t l_550[1][6][6] = {{{0xED2D2094L,0x7B271EB0L,0xC4A7DDCFL,(-1L),(-1L),0xC4A7DDCFL},{(-1L),(-1L),0xC4A7DDCFL,0x7B271EB0L,0xED2D2094L,0xC4A7DDCFL},{0x7B271EB0L,0xED2D2094L,0xC4A7DDCFL,0xED2D2094L,0x7B271EB0L,0xC4A7DDCFL},{0xED2D2094L,0x7B271EB0L,0xC4A7DDCFL,(-1L),(-1L),0xC4A7DDCFL},{(-1L),(-1L),0xC4A7DDCFL,0x7B271EB0L,0xED2D2094L,0xC4A7DDCFL},{0x7B271EB0L,0xED2D2094L,0xC4A7DDCFL,0xED2D2094L,0x7B271EB0L,0xC4A7DDCFL}}};
                int i, j, k;
            }
            (*g_366) = ((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*l_595) |= p_14), ((*l_518) || (safe_div_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(p_14, 0x4500L)) <= ((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s((((((**l_519) == ((*l_610) = (((*l_605) = l_604) , (safe_add_func_uint64_t_u_u(((void*)0 != l_608), 0L))))) | p_13) < 6L) ^ p_14), 0x4611L)), (*g_379))) && (*l_518))), g_101))))), p_14)), (*l_518))), l_611)) || (**l_519));
        }
    }
    return l_612;
}



static int8_t * func_15(union U6  p_16, uint64_t  p_17)
{ 
    union U3 l_154 = {0xD32158A7L};
    struct S0 l_159 = {0xCF75C71EL,0xB35E0E5596EFE925LL};
    uint32_t l_160 = 0xD68E89C7L;
    int8_t *l_177 = &g_9[0];
    int32_t l_195 = 0L;
    int16_t *l_249 = &g_103;
    union U5 l_264 = {0UL};
    int32_t l_273 = 1L;
    int32_t l_278[5] = {0L,0L,0L,0L,0L};
    int16_t l_287 = 0x587DL;
    uint32_t l_288 = 18446744073709551609UL;
    int32_t **l_306 = (void*)0;
    uint64_t l_312 = 0x3D9CF59EB566F395LL;
    uint8_t l_321 = 0xFBL;
    uint32_t l_340 = 6UL;
    uint16_t l_348 = 65535UL;
    uint16_t l_387 = 0x04AFL;
    union U1 l_392[4][1][1] = {{{{0x40954607L}}},{{{1UL}}},{{{0x40954607L}}},{{{1UL}}}};
    union U4 *l_493 = &g_494;
    int i, j, k;
    if (((((l_154 , p_16) , (((safe_lshift_func_int16_t_s_u(l_154.f0, 5)) , ((safe_rshift_func_uint16_t_u_u(((void*)0 != &g_76[1][2][1]), p_16.f2)) > ((l_159 , l_160) < 0xE55B4935L))) & l_160)) ^ g_75) ^ l_159.f1))
    { 
        uint16_t *l_166 = &g_76[0][3][0];
        uint64_t *l_167 = (void*)0;
        uint64_t *l_168 = &g_169[3][2];
        int32_t l_170[7][3][7] = {{{(-10L),0xF62B27B7L,0xCE38ADB6L,8L,0xF42965CCL,7L,0x1B36AA6FL},{(-10L),6L,0x4DF38324L,4L,1L,0x70C75418L,0x670BDA24L},{0L,0x0C70B845L,0x76412926L,0xB3EC86C0L,7L,1L,7L}},{{7L,1L,1L,7L,0xB86E312BL,0x342DAB2CL,0L},{1L,0xDD0B5AA5L,0x70C75418L,(-9L),0x70E42B31L,(-1L),0L},{5L,0x1B36AA6FL,0xB3EC86C0L,0xBB45D56EL,0x70C75418L,0x70E42B31L,0L}},{{1L,(-1L),0L,6L,1L,0x5CBDD7E7L,7L},{(-1L),0x0624A242L,0xD11B3277L,(-1L),0x2ECB4BFEL,0x1121B7D6L,0x670BDA24L},{1L,5L,0L,0x1E68239DL,(-1L),0x05076384L,0x1B36AA6FL}},{{0x670BDA24L,0x342DAB2CL,0xACC00A57L,1L,6L,0x05076384L,0x70E42B31L},{1L,0x670BDA24L,0xBB45D56EL,(-1L),0x7D1AE754L,0x1121B7D6L,0xACC00A57L},{0x232493ECL,(-1L),1L,0x5CBDD7E7L,0x670BDA24L,0x5CBDD7E7L,1L}},{{0x70C75418L,0x70C75418L,1L,(-7L),0x1E68239DL,0x70E42B31L,0x4DF38324L},{0x0C70B845L,0x2ECB4BFEL,0x670BDA24L,1L,4L,(-1L),9L},{1L,0x1121B7D6L,(-10L),1L,0x1E68239DL,0x342DAB2CL,8L}},{{0x70E42B31L,0xF42965CCL,(-1L),0xB86E312BL,0x670BDA24L,1L,0xDD0B5AA5L},{1L,(-1L),1L,0xDD0B5AA5L,0xB3EC86C0L,1L,0x984F7DABL},{0xCE38ADB6L,(-1L),0xB3EC86C0L,1L,0x2ECB4BFEL,0xB86E312BL,0x1E68239DL}},{{0x5CBDD7E7L,0xF62B27B7L,0x70E42B31L,1L,1L,0L,(-1L)},{1L,3L,5L,0xDD0B5AA5L,0L,6L,0L},{0x0C70B845L,0x342DAB2CL,0x05076384L,0x4DF38324L,0x05076384L,0x342DAB2CL,0x0C70B845L}}};
        int32_t *l_171 = &g_27;
        int i, j, k;
        (*l_171) ^= (65535UL > (safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((g_41.f0 , 0x3930L), (g_40 &= (l_159.f0 != (0x05E6A080L < ((safe_unary_minus_func_uint8_t_u((((*l_168) &= ((((void*)0 == l_166) , 0xA1D4D899L) , 18446744073709551609UL)) <= l_170[1][2][1]))) > 0x4A82L)))))) < l_170[2][2][5]), p_16.f2)));
    }
    else
    { 
        const int32_t l_174 = 0xB8245084L;
        struct S0 *l_198 = &l_159;
        int32_t l_207 = 0x0AE34072L;
        uint8_t l_211 = 247UL;
        uint8_t l_216 = 0x8EL;
        int16_t *l_250 = &g_101;
        int32_t l_276[3][6] = {{0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L},{0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L},{0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L,0x5C10D9C3L}};
        uint32_t l_283 = 0x1C388CC7L;
        uint8_t l_298 = 0x84L;
        uint32_t l_342 = 9UL;
        int32_t *l_347[2];
        int32_t ** const l_346 = &l_347[0];
        int64_t *l_364[7][5][2] = {{{&g_175[6][0].f1,&g_175[6][0].f1},{&g_175[6][0].f1,&g_175[6][0].f1},{(void*)0,&g_41.f2},{(void*)0,&g_175[6][0].f1},{&g_175[6][0].f1,&g_175[6][0].f1}},{{&g_175[6][0].f1,(void*)0},{&g_41.f2,(void*)0},{&g_175[6][0].f1,&g_175[6][0].f1},{&g_175[6][0].f1,&g_175[6][0].f1},{(void*)0,&g_41.f2}},{{(void*)0,&g_175[6][0].f1},{&g_175[6][0].f1,&g_175[6][0].f1},{&g_175[6][0].f1,(void*)0},{&g_41.f2,(void*)0},{&g_175[6][0].f1,&g_175[6][0].f1}},{{&g_175[6][0].f1,&g_175[6][0].f1},{(void*)0,&g_41.f2},{(void*)0,&g_175[6][0].f1},{&g_175[6][0].f1,&g_175[6][0].f1},{&g_175[6][0].f1,(void*)0}},{{&g_41.f2,(void*)0},{&g_175[6][0].f1,&g_175[6][0].f1},{&g_175[6][0].f1,&g_175[6][0].f1},{(void*)0,&g_41.f2},{(void*)0,&g_175[6][0].f1}},{{&g_175[6][0].f1,&g_175[6][0].f1},{&g_175[6][0].f1,(void*)0},{&g_41.f2,(void*)0},{&g_175[6][0].f1,&g_175[6][0].f1},{&g_175[6][0].f1,&g_175[6][0].f1}},{{(void*)0,&g_41.f2},{(void*)0,&g_175[6][0].f1},{&g_175[6][0].f1,&g_175[6][0].f1},{&g_175[6][0].f1,(void*)0},{&g_41.f2,(void*)0}}};
        uint64_t *l_371[1][2];
        uint32_t l_430 = 4294967295UL;
        uint32_t l_509 = 0xC8A954A3L;
        const union U3 *l_512[5];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_347[i] = &l_278[4];
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_371[i][j] = (void*)0;
        }
        for (i = 0; i < 5; i++)
            l_512[i] = &g_513;
        if (l_160)
        { 
            union U3 *l_173 = &l_154;
            union U3 **l_172 = &l_173;
            struct S0 *l_186 = &g_175[6][1];
            union U4 l_187 = {0};
            int32_t l_191 = 0x208AA583L;
            int32_t *l_232 = &l_195;
            int32_t **l_231 = &l_232;
            int32_t ***l_230 = &l_231;
            int32_t l_279 = 4L;
            int32_t l_280[7][4][1] = {{{0xABD1A8F1L},{0xC7B62B50L},{0xABD1A8F1L},{0xD1925C74L}},{{0x6D5FB649L},{0xD1925C74L},{0xABD1A8F1L},{0xC7B62B50L}},{{0xABD1A8F1L},{0xD1925C74L},{0x6D5FB649L},{0xD1925C74L}},{{0xABD1A8F1L},{0xC7B62B50L},{0xABD1A8F1L},{0xD1925C74L}},{{0x6D5FB649L},{0xD1925C74L},{0xABD1A8F1L},{0xC7B62B50L}},{{0xABD1A8F1L},{0xD1925C74L},{0x6D5FB649L},{0xD1925C74L}},{{0xABD1A8F1L},{0xC7B62B50L},{0xABD1A8F1L},{0xD1925C74L}}};
            int8_t l_286[4] = {0xA4L,0xA4L,0xA4L,0xA4L};
            union U1 l_313 = {0UL};
            int i, j, k;
lbl_208:
            (*l_172) = &l_154;
            if (l_174)
            { 
                int16_t l_192 = 1L;
                int32_t l_194[5] = {0xD6128A66L,0xD6128A66L,0xD6128A66L,0xD6128A66L,0xD6128A66L};
                const int32_t l_204 = 0x603EDA38L;
                uint64_t *l_205[1];
                int32_t ****l_233 = &l_230;
                int64_t *l_234 = &g_41.f3.f1;
                int32_t *l_236 = (void*)0;
                int32_t *l_237 = &l_194[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_205[i] = &g_206[0][0];
                for (l_159.f1 = 1; (l_159.f1 >= 0); l_159.f1 -= 1)
                { 
                    struct S0 *l_176 = &g_41.f3;
                    (*l_176) = g_175[6][0];
                    return l_177;
                }
                for (l_159.f0 = 0; (l_159.f0 <= 1); l_159.f0 += 1)
                { 
                    uint16_t l_178 = 0xFDDCL;
                    int32_t *l_193[2][3] = {{&g_27,&g_27,&g_27},{(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    l_194[1] = (l_178 ^ (safe_sub_func_uint32_t_u_u(p_16.f0, ((((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint32_t_u_u((~((g_175[1][2] , l_186) != (l_187 , &g_175[5][1]))), ((((((((((((safe_mod_func_int32_t_s_s((~l_191), 0xAA57C4A0L)) & p_16.f2) & l_178) || g_175[6][0].f0) & g_103) != p_16.f0) , p_17) > p_16.f0) , p_16.f2) < l_178) >= g_175[6][0].f0) ^ l_192))) > p_16.f2) > g_175[6][0].f1), p_17)) | l_174) && p_16.f0) >= 1UL))));
                    l_195 &= l_154.f0;
                }
                if ((((l_207 |= (p_17 = (l_191 |= (((safe_sub_func_int8_t_s_s((((void*)0 != l_198) <= (g_169[3][2] >= ((-1L) ^ (l_154.f0 < (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((~((l_160 , g_169[3][2]) ^ 65535UL)), g_104)) > l_174), l_204)))))), g_41.f0)) ^ 0xF920L) >= p_17)))) ^ 0x75E7628BC1734EC9LL) , 0xBD6B8222L))
                { 
                    if (l_160)
                        goto lbl_208;
                }
                else
                { 
                    int32_t *l_209 = (void*)0;
                    int32_t *l_210[2][6] = {{(void*)0,&g_27,(void*)0,(void*)0,&g_27,(void*)0},{(void*)0,&g_27,(void*)0,(void*)0,&g_27,(void*)0}};
                    int i, j;
                    l_211--;
                }
                (*l_237) &= ((safe_div_func_int32_t_s_s(l_216, ((0x8A53L & (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((l_159 , ((p_16.f0 || 8L) | 0x7D20L)), (+(safe_rshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((**l_231) = (safe_mod_func_uint16_t_u_u((((((*l_234) = (((l_230 != (void*)0) , &g_111[0]) == l_233)) , g_235) , 0xD7338BB7L) , 0xA404L), 0x2332L))), g_206[0][0])) > l_154.f0), g_52))))), p_17)), 0x0FE699EEL))) && 0x46DEBD74L))) , (****l_233));
            }
            else
            { 
                int16_t *l_248 = &g_101;
                union U5 l_259 = {0xA0L};
                int8_t l_260 = 0x28L;
                const int32_t l_265 = 1L;
                int32_t ***l_268 = &l_231;
                int32_t ****l_269 = &l_268;
                int32_t *l_270 = &g_27;
                int32_t *l_271 = &l_207;
                int32_t *l_272 = &g_27;
                int32_t *l_274 = &l_191;
                int32_t *l_275 = &g_27;
                int32_t *l_277[1];
                int32_t l_281 = 0x616235A8L;
                int i;
                for (i = 0; i < 1; i++)
                    l_277[i] = &g_27;
                for (l_195 = 0; (l_195 == (-6)); --l_195)
                { 
                    uint32_t *l_251 = &g_41.f3.f0;
                    uint32_t *l_252 = (void*)0;
                    uint32_t *l_253 = &g_175[6][0].f0;
                    int32_t *l_254 = &g_27;
                    (*l_254) = ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_27 && (safe_mod_func_int64_t_s_s(((-1L) & ((*l_253) = ((*l_251) = ((l_248 != &g_103) > ((g_41 , l_249) != l_250))))), p_16.f2))), p_16.f2)), 5UL)) || 1UL);
                }
                (**l_231) |= ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((l_259 , ((l_260 != (g_261 <= p_17)) <= (safe_add_func_uint8_t_u_u(((l_264 , l_265) ^ (((safe_lshift_func_uint8_t_u_u(((((*l_269) = l_268) != &g_112) <= p_16.f0), 3)) ^ p_16.f2) ^ g_103)), l_154.f0)))), g_27)) <= g_104), 1)) | g_9[3]);
                --l_283;
                l_288--;
                for (g_104 = 0; (g_104 > 4); ++g_104)
                { 
                    return l_177;
                }
            }
            (**l_231) &= (l_283 <= (l_198 != (void*)0));
            for (g_103 = (-24); (g_103 != (-25)); --g_103)
            { 
                int8_t **l_311 = &g_8[1];
                for (p_16.f2 = 0; (p_16.f2 <= 25); p_16.f2++)
                { 
                    int32_t *l_297 = &l_278[1];
                    uint64_t *l_309 = &g_206[0][0];
                    int32_t *l_314 = &l_273;
                    (*l_297) = ((*l_232) = 0xC35B8B97L);
                    --l_298;
                    (*l_297) = (***l_230);
                    (**l_231) = ((*l_314) &= (g_103 | (safe_rshift_func_int16_t_s_u((+(-1L)), ((((((((safe_add_func_int32_t_s_s(((*l_297) = 0x5214DAFFL), (((l_306 == ((safe_rshift_func_int8_t_s_u((((*l_309) &= 0UL) || ((((((*l_250) = (safe_unary_minus_func_int32_t_s(((void*)0 != l_311)))) , &g_282) != &g_282) >= 0xA1L) < g_235.f1)), p_16.f2)) , (void*)0)) | 0xCEL) != (-1L)))) ^ p_17) < 4294967286UL) >= (***l_230)) , g_169[3][0]) <= l_312) , l_313) , l_276[0][3])))));
                }
                if (p_16.f0)
                    continue;
            }
        }
        else
        { 
            struct S0 l_333 = {1UL,1L};
            uint64_t *l_339 = &g_206[0][1];
            int64_t *l_341 = &l_333.f1;
            uint16_t *l_343 = &g_76[0][3][3];
            int32_t *l_345 = &l_273;
            int32_t **l_344 = &l_345;
            int32_t *l_380[4][3] = {{&l_278[1],(void*)0,&l_278[1]},{&l_276[2][4],&l_278[4],&l_276[2][4]},{&l_278[1],(void*)0,&l_278[1]},{&l_276[2][4],&l_278[4],&l_276[2][4]}};
            int32_t * const ***l_410 = (void*)0;
            int8_t *l_418 = &g_75;
            int8_t l_421 = 0x59L;
            int32_t l_429[6][3] = {{1L,0xBFE7EAF6L,4L},{4L,1L,4L},{4L,1L,4L},{4L,1L,4L},{4L,1L,4L},{4L,1L,4L}};
            uint32_t l_471 = 9UL;
            int8_t l_483 = 0x81L;
            const int32_t *l_488 = &g_489[1][0];
            int i, j;
            if ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((((p_16.f0 ^ (safe_sub_func_uint16_t_u_u(l_321, ((safe_unary_minus_func_int8_t_s(((*l_177) &= ((safe_mul_func_int16_t_s_s(((*l_250) |= (safe_add_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(0x51L, (safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int16_t_s_s(p_16.f0, (((*l_198) = l_333) , (((((((*l_341) = (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((((*l_339) ^= (~(((p_16.f2 , g_175[5][2]) , &g_112) != (void*)0))) != 2L) || l_283), l_340)), p_17))) && l_342) || p_17) >= p_17) , l_249) != l_343)))) , l_344) == l_346) && (**l_346)), 7)))) || l_348), g_76[0][3][3]))), 5L)) | 0x3DL)))) & (**l_344))))) >= g_52) != (**l_344)) || g_282), 0x99FC73D9L)), 7)))
            { 
                int32_t ***l_355[6][3] = {{&l_306,&l_344,&l_306},{&l_306,(void*)0,&l_306},{&l_306,&l_344,&l_306},{&l_306,(void*)0,&l_306},{&l_306,&l_344,&l_306},{&l_306,(void*)0,&l_306}};
                uint32_t *l_365 = &l_342;
                int i, j;
lbl_367:
                g_175[6][0] = ((0x153BCF03L > ((*l_365) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((l_355[0][1] != &l_344) != (safe_mod_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(p_16.f2, (safe_mul_func_uint16_t_u_u((251UL | (p_16.f0 & (safe_sub_func_uint64_t_u_u(((p_16.f0 , l_364[5][2][1]) != (void*)0), p_16.f2)))), g_103)))) > p_16.f2), g_104))), p_17)), p_17)), g_206[0][0])))) , g_175[6][0]);
                (*l_346) = g_366;
                if (l_348)
                    goto lbl_367;
            }
            else
            { 
                int32_t *l_378 = &l_278[4];
                uint8_t *l_398 = &l_321;
                uint8_t *l_399 = &g_52;
                int64_t l_419 = 0xDA58D73FEE7B1319LL;
                (*l_378) = (safe_mod_func_int16_t_s_s((+(l_341 == (l_371[0][1] = &g_169[3][2]))), ((*l_343) ^= (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((*l_344) = l_378) != ((*l_346) = (((l_364[0][2][0] = g_379) == (void*)0) , l_380[0][0]))), (p_16.f0 || p_16.f0))), p_16.f2)), g_40)))));
lbl_400:
                (*g_366) |= (*l_378);
                if ((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_16.f0, (safe_mul_func_int8_t_s_s(l_387, (-3L))))), (safe_mul_func_uint8_t_u_u(((*l_399) = ((safe_sub_func_int16_t_s_s((l_392[0][0][0] , (l_364[0][2][0] == ((safe_lshift_func_uint16_t_u_u((((((!g_103) , ((safe_mul_func_uint8_t_u_u(((*l_398) = g_81.f0), p_16.f0)) > g_104)) , (*g_379)) && (*l_378)) | 0xE70DL), 3)) , (void*)0))), 0UL)) >= (*l_378))), p_16.f2)))))
                { 
                    return l_177;
                }
                else
                { 
                    int8_t *l_417[3][5];
                    int32_t l_420 = 0xE340233AL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_417[i][j] = &g_75;
                    }
                    if (l_160)
                        goto lbl_400;
                    (*g_366) &= (l_421 |= (safe_mul_func_uint16_t_u_u((((*l_249) ^= (18446744073709551613UL <= 18446744073709551615UL)) || (((safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((&g_111[0] == (g_409 , l_410)), 6)), (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((**l_344), (safe_add_func_uint8_t_u_u((l_417[1][1] == l_418), p_16.f2)))), 8L)))) && l_419), p_16.f0)) || g_409.f2) && l_420)), p_17)));
                }
            }
            (*g_366) ^= 7L;
            if ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((((&l_347[0] == &l_347[0]) == (g_41.f2 == l_264.f0)) & (p_16.f0 >= ((safe_lshift_func_int16_t_s_s((-1L), 10)) && p_16.f2))) > (**l_344)), 13)) >= p_16.f2), (*l_345))))
            { 
                int32_t l_428 = (-6L);
                int32_t ***l_459 = &l_306;
                const uint16_t l_466 = 0x8BE9L;
                --l_430;
                l_195 = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_81 , g_103), ((*l_250) = (safe_rshift_func_uint16_t_u_s((+((void*)0 == &l_211)), (safe_rshift_func_int16_t_s_s((((void*)0 == &g_282) || ((((*g_366) = ((**l_344) = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((*l_418) = ((safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s((~((~((0UL > (*g_379)) && p_17)) > 0x61FDAA67L)), 0L)))) <= g_27)), 3)), g_9[2])) || p_17), 0xDB0C693CL)) , 0x86L), 3)), (-5L))))) || p_16.f0) ^ p_17)), 6))))))), p_16.f0)), 0x55L));
                (*l_459) = l_306;
                (*l_345) = (-6L);
                (*g_366) &= (((((*l_341) = (*g_379)) | (safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((p_16.f2 < (g_169[1][2] |= (safe_lshift_func_uint16_t_u_u((l_466 >= p_17), (safe_lshift_func_uint8_t_u_u(g_75, (((*l_345) = (((g_175[6][0].f1 = (safe_sub_func_uint64_t_u_u(((*l_339) = p_17), g_261))) >= p_17) , p_16.f0)) < 0xE14C3020L))))))) & l_471), p_17)) >= 1UL), 0xE0F3BD27L))) , g_175[6][0].f0) == p_16.f0);
            }
            else
            { 
                int32_t l_484 = (-6L);
                int32_t *l_487 = &l_278[4];
                for (g_103 = 0; (g_103 == 26); ++g_103)
                { 
                    (*l_345) = (((((*l_345) == (g_409.f2 <= ((safe_lshift_func_int16_t_s_u(((g_476 = g_476) , ((+(safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((g_81 , (0xB4ECL || g_75)) , (+l_483)), 7)) != p_16.f2), l_484))) ^ g_104)), 10)) <= l_484))) >= p_16.f0) ^ g_101) <= (*g_379));
                    return &g_9[3];
                }
                if ((g_409.f0 & (((p_16.f2 , (void*)0) == (void*)0) & (l_484 == ((safe_mod_func_int32_t_s_s((4294967295UL & 0x13FB3EEBL), 0x18BB75CDL)) && p_16.f2)))))
                { 
                    const int32_t *l_491 = &l_276[1][0];
                    const int32_t **l_490 = &l_491;
                    (*l_344) = l_487;
                    (*l_490) = (l_488 = l_487);
                    l_493 = g_492;
                }
                else
                { 
                    uint32_t l_495 = 1UL;
                    uint8_t *l_506 = &g_409.f0;
                    (*g_366) |= ((*l_345) &= (*l_488));
                    l_495++;
                    (*l_487) |= (0x1D54BFCD77D2FB4ALL < ((p_16.f0--) , (safe_mul_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(g_41.f2, (++(*l_343)))), ((0xD5L < ((*l_506)--)) >= g_104)))));
                }
            }
            ++l_509;
        }
        l_512[3] = &g_81;
        for (l_430 = (-3); (l_430 == 38); l_430++)
        { 
            return l_177;
        }
    }
    (*g_366) |= p_16.f2;
    return l_177;
}



static int32_t  func_23(int8_t * p_24)
{ 
    uint32_t l_140 = 0x41A9C47EL;
    const union U4 l_147 = {0};
    int16_t *l_150[5][7] = {{&g_101,&g_103,&g_103,&g_101,&g_101,&g_101,&g_101},{&g_103,&g_101,&g_101,&g_101,&g_103,&g_103,&g_101},{&g_101,&g_103,&g_103,&g_101,&g_103,&g_103,&g_101},{&g_103,&g_101,&g_101,&g_101,&g_101,&g_103,&g_103},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101}};
    union U6 l_151 = {0UL};
    int32_t *l_152 = &g_27;
    int i, j;
    (*l_152) = ((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_140 != (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((l_147 , 0L), ((safe_lshift_func_uint16_t_u_s(g_27, 6)) , (l_150[1][3] == (l_151 , &g_103))))), l_140)), 0x0B6CL))), 247UL)), 0x5EB9L)) ^ (*p_24)), (*p_24))) , l_151.f0);
    return (*l_152);
}



static union U6  func_28(int8_t ** p_29, uint64_t  p_30, int8_t ** p_31)
{ 
    struct S0 *l_66 = (void*)0;
    int32_t *l_67[7] = {&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27};
    union U6 l_80 = {0xF03BE979E0FDA63ELL};
    int32_t **l_108[5];
    int32_t ***l_107 = &l_108[1];
    int i;
    for (i = 0; i < 5; i++)
        l_108[i] = &l_67[6];
    l_66 = l_66;
    g_27 = 0xEA99669DL;
    for (g_41.f2 = 0; (g_41.f2 > 8); g_41.f2++)
    { 
        union U6 l_70 = {5UL};
        int32_t l_71 = 0x15DB4C2AL;
        int32_t l_72 = 0x85AE3403L;
        int32_t l_73 = (-1L);
        int32_t l_74 = 0x5C884E0BL;
        const int32_t *l_83 = &g_27;
        const int32_t **l_82 = &l_83;
        struct S0 l_86 = {4294967287UL,-1L};
        int32_t ***l_110 = (void*)0;
        for (g_27 = 4; (g_27 >= 0); g_27 -= 1)
        { 
            return l_70;
        }
        ++g_76[0][3][3];
        for (l_70.f3.f0 = 0; (l_70.f3.f0 <= 1); l_70.f3.f0 += 1)
        { 
            int32_t l_79[1];
            const int32_t ***l_84 = &l_82;
            struct S0 l_85 = {4294967295UL,0x27CECC5629281337LL};
            uint16_t *l_87[6][5] = {{&g_76[0][1][1],(void*)0,&g_76[0][3][1],(void*)0,&g_76[0][1][1]},{&g_76[0][3][1],(void*)0,&g_76[0][3][3],&g_76[0][1][1],&g_76[0][3][3]},{&g_76[0][3][3],&g_76[0][3][3],&g_76[0][3][1],&g_76[0][1][1],&g_40},{(void*)0,&g_76[0][3][1],&g_76[0][3][1],(void*)0,&g_76[0][3][3]},{(void*)0,&g_76[0][1][1],&g_76[0][3][1],&g_76[0][3][1],&g_76[0][1][1]},{&g_76[0][3][3],&g_76[0][3][1],&g_76[0][3][1],&g_76[0][3][1],&g_76[0][3][1]}};
            union U4 l_88 = {0};
            int32_t *l_113 = &l_73;
            int i, j;
            for (i = 0; i < 1; i++)
                l_79[i] = 0x6DE0D780L;
            l_79[0] &= 0x98D9B3EEL;
            for (l_71 = 0; (l_71 <= 1); l_71 += 1)
            { 
                return l_80;
            }
            l_79[0] |= (g_81 , l_70.f0);
            (*l_84) = l_82;
            l_79[0] = ((**l_82) , ((l_86 = l_85) , (p_30 & (l_71 = 0xFCAAL))));
            for (g_75 = 0; (g_75 <= 1); g_75 += 1)
            { 
                uint8_t l_127 = 252UL;
                int32_t l_133 = 0xBDA86EFAL;
                for (l_80.f2 = 1; (l_80.f2 >= 0); l_80.f2 -= 1)
                { 
                    int32_t l_100[1][4][5] = {{{0L,7L,7L,0L,0L},{1L,0x52ABCF54L,1L,0x52ABCF54L,1L},{0L,0L,7L,7L,0L},{0x279F83FAL,0x52ABCF54L,0x279F83FAL,0x52ABCF54L,0x279F83FAL}}};
                    int i, j, k;
                    g_27 = (l_88 , (0x6F07L != (((((p_30 <= (!(-2L))) , ((safe_add_func_int64_t_s_s(0x24A886803F40BDE8LL, (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(0x6C82L, (((+(safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((p_30 ^ l_100[0][3][3]))), 0x47L))) , g_75) != (***l_84)))), p_30)))) != g_41.f0)) != l_100[0][2][3]) , p_30) == p_30)));
                    if (p_30)
                        break;
                }
                for (l_85.f0 = 0; (l_85.f0 <= 1); l_85.f0 += 1)
                { 
                    int32_t ****l_109[6];
                    int16_t *l_132 = &g_101;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_109[i] = &l_107;
                    ++g_104;
                    l_72 &= ((l_110 = l_107) != ((*l_83) , g_111[0]));
                    (**l_107) = l_113;
                    if (p_30)
                        break;
                    l_133 &= (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((*l_132) = (safe_mod_func_int16_t_s_s(((((**l_110) != (**l_84)) >= ((safe_mod_func_int32_t_s_s(0x20CEAD84L, ((***l_107) = (safe_lshift_func_int8_t_s_u(((+(((safe_add_func_int32_t_s_s(p_30, (l_127 < (safe_add_func_uint8_t_u_u(255UL, ((safe_mod_func_uint64_t_u_u(((*l_83) == g_76[0][3][3]), 0x2825B7CC70ECFAE2LL)) >= p_30)))))) == 0xF013L) > p_30)) ^ 0xBFL), 6))))) && l_127)) , g_41.f2), l_127))) || 0x09CEL), g_40)), p_30));
                }
                return g_41;
            }
        }
    }
    return g_41;
}



static int8_t ** func_32(struct S0  p_33, int8_t ** p_34, union U1  p_35, const int32_t * p_36)
{ 
    int32_t *l_45 = &g_27;
    int32_t *l_46 = &g_27;
    int32_t *l_47 = &g_27;
    int32_t *l_48 = &g_27;
    int32_t *l_49 = &g_27;
    int32_t *l_50 = (void*)0;
    int32_t *l_51[3];
    uint32_t l_61[5][4][3];
    uint16_t *l_62 = &g_40;
    int32_t l_63 = 0xB84A8A62L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_51[i] = &g_27;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
                l_61[i][j][k] = 0x75E0AD58L;
        }
    }
    g_52++;
    l_63 &= (((g_27 < (*p_36)) , (safe_sub_func_uint8_t_u_u(0x1CL, ((&g_8[1] == &g_8[0]) < (safe_lshift_func_uint16_t_u_s(((*l_62) = (safe_div_func_int16_t_s_s(((&g_27 == l_51[1]) | 0x71L), l_61[0][0][0]))), 6)))))) == (*l_45));
    for (g_41.f3.f1 = (-25); (g_41.f3.f1 < 1); g_41.f3.f1 = safe_add_func_int8_t_s_s(g_41.f3.f1, 9))
    { 
        p_34 = p_34;
    }
    return p_34;
}



static union U6  func_38(int32_t * p_39)
{ 
    g_40 = 0x509E13C9L;
    return g_41;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);

    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_76[i][j][k], "g_76[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_169[i][j], "g_169[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_175[i][j].f0, "g_175[i][j].f0", print_hash_value);
            transparent_crc(g_175[i][j].f1, "g_175[i][j].f1", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_206[i][j], "g_206[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_235.f0, "g_235.f0", print_hash_value);
    transparent_crc(g_235.f1, "g_235.f1", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_409.f0, "g_409.f0", print_hash_value);
    transparent_crc(g_409.f2, "g_409.f2", print_hash_value);
    transparent_crc(g_476.f0, "g_476.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_489[i][j], "g_489[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_513.f0, "g_513.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_527[i][j][k], "g_527[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_771.f0, "g_771.f0", print_hash_value);
    transparent_crc(g_771.f1, "g_771.f1", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
