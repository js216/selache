// SPDX-License-Identifier: MIT
// cctest_csmith_828c8c69.c --- cctest case csmith_828c8c69 (csmith seed 2190249065)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe4810161 */

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

// Options:   -s 2190249065 -o /tmp/csmith_gen_oo7i65ri/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const int16_t  f1;
};
#pragma pack(pop)

union U1 {
   uint8_t  f0;
   uint8_t  f1;
   int32_t  f2;
   int32_t  f3;
   struct S0  f4;
};


static int32_t g_3[1] = {0x3BC6E5C7L};
static uint16_t g_56 = 0xE77BL;
static struct S0 g_62 = {1L,0x71CEL};
static struct S0 *g_61[5] = {&g_62,&g_62,&g_62,&g_62,&g_62};
static uint32_t g_79 = 0xE0D780A8L;
static uint16_t g_98 = 65532UL;
static int32_t g_107 = 0xFD8B1EB1L;
static int32_t g_109 = 0L;
static uint16_t *g_125 = &g_98;
static uint16_t **g_124 = &g_125;
static uint32_t g_127[4] = {6UL,6UL,6UL,6UL};
static uint16_t g_146[7][3][4] = {{{2UL,0x30F7L,0UL,0UL},{0x30F7L,0x30F7L,4UL,0UL},{2UL,0x30F7L,0UL,0UL}},{{0x30F7L,0x30F7L,4UL,0UL},{2UL,0x30F7L,0UL,0UL},{0x30F7L,0x30F7L,4UL,0UL}},{{2UL,0x30F7L,0UL,0UL},{0x30F7L,0x30F7L,4UL,0UL},{2UL,0x30F7L,0UL,0UL}},{{0x30F7L,0x30F7L,4UL,0UL},{2UL,0x30F7L,0UL,0UL},{0x30F7L,0x30F7L,4UL,0UL}},{{2UL,0x30F7L,0UL,0UL},{0x30F7L,0x30F7L,4UL,0UL},{2UL,0x30F7L,0UL,0UL}},{{0x30F7L,0x30F7L,4UL,0UL},{2UL,0x30F7L,0UL,0UL},{0x30F7L,0x30F7L,4UL,0UL}},{{2UL,0x30F7L,0UL,0UL},{0x30F7L,0x30F7L,4UL,0UL},{2UL,0x30F7L,0UL,0UL}}};
static union U1 g_157 = {0xFCL};
static union U1 *g_156 = &g_157;
static int32_t *g_162 = &g_157.f2;
static uint64_t g_179 = 0x44D90D512875DDBELL;
static int64_t g_188 = 7L;
static int8_t g_193 = 1L;
static int16_t g_203 = 0x80E9L;
static int32_t g_221 = 0x63498478L;
static uint64_t g_222 = 0xD5A4208AA5832315LL;
static int8_t g_264 = (-1L);
static int16_t g_266 = 0L;
static struct S0 **g_272 = &g_61[4];
static uint32_t g_295 = 0UL;
static uint64_t g_337[6][4] = {{0xFC775A24C56DE614LL,0xFC775A24C56DE614LL,8UL,8UL},{0xFC775A24C56DE614LL,0xFC775A24C56DE614LL,8UL,8UL},{0xFC775A24C56DE614LL,0xFC775A24C56DE614LL,8UL,8UL},{0xFC775A24C56DE614LL,0xFC775A24C56DE614LL,8UL,8UL},{0xFC775A24C56DE614LL,0xFC775A24C56DE614LL,8UL,8UL},{0xFC775A24C56DE614LL,0xFC775A24C56DE614LL,8UL,8UL}};
static struct S0 g_347 = {0x00320479L,0x718FL};
static const struct S0 *g_346 = &g_347;
static uint64_t g_396 = 0x52E7DB46CAF16F8CLL;
static int32_t g_422 = 0x6A3D9CF5L;
static uint8_t g_444[2][4] = {{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL}};
static int32_t *g_467 = &g_107;
static int32_t **g_466 = &g_467;
static uint32_t g_501 = 18446744073709551613UL;
static uint32_t g_503 = 0x35136103L;
static int8_t g_581 = 0x39L;
static int8_t g_679[2] = {0xB9L,0xB9L};
static uint32_t g_682[4] = {0xEC5EFB00L,0xEC5EFB00L,0xEC5EFB00L,0xEC5EFB00L};
static uint8_t *g_688[4] = {&g_444[1][1],&g_444[1][1],&g_444[1][1],&g_444[1][1]};
static uint8_t **g_687[7] = {&g_688[1],&g_688[1],&g_688[1],&g_688[1],&g_688[1],&g_688[1],&g_688[1]};
static int32_t g_706 = 9L;
static uint8_t g_708[5][2] = {{0x2EL,0x2EL},{0x2EL,0x2EL},{0x2EL,0x2EL},{0x2EL,0x2EL},{0x2EL,0x2EL}};
static int64_t g_717 = 0x1F32855899ED1A0BLL;
static uint32_t g_719[6][1] = {{4294967295UL},{0xAA682B17L},{4294967295UL},{0xAA682B17L},{4294967295UL},{0xAA682B17L}};
static int32_t **g_792 = &g_467;
static uint32_t g_833 = 7UL;
static int64_t g_886[6][3] = {{0L,(-1L),0L},{1L,1L,1L},{0L,(-1L),0L},{1L,1L,1L},{0L,(-1L),0L},{1L,1L,1L}};
static const struct S0 **g_904[7] = {&g_346,&g_346,&g_346,&g_346,&g_346,&g_346,&g_346};
static const struct S0 ***g_903 = &g_904[0];
static uint16_t ***g_940 = &g_124;
static int16_t g_1060 = 0xCA7AL;
static int64_t ***g_1203 = (void*)0;
static union U1 g_1214 = {0x3EL};
static union U1 g_1216[2][1] = {{{0x7DL}},{{0x7DL}}};
static union U1 **g_1262 = &g_156;
static union U1 **g_1265[4][1][1] = {{{&g_156}},{{(void*)0}},{{&g_156}},{{(void*)0}}};
static struct S0 * const ***g_1323 = (void*)0;
static struct S0 * const ****g_1322 = &g_1323;
static uint8_t g_1393 = 0x09L;
static const union U1 g_1413 = {0xAAL};
static uint64_t *g_1463 = &g_179;
static uint64_t **g_1462 = &g_1463;
static uint64_t ** const *g_1461 = &g_1462;
static uint32_t g_1610[3][1][6] = {{{0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL}},{{0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL}},{{0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL,0xB6384B2FL}}};
static int32_t g_1795 = 0x76ABA542L;
static uint8_t ***g_1819 = &g_687[1];
static uint8_t **** const g_1818 = &g_1819;
static const int32_t g_2010 = 0xBA6D1CD1L;
static const int32_t *g_2011[5] = {&g_1214.f4.f0,&g_1214.f4.f0,&g_1214.f4.f0,&g_1214.f4.f0,&g_1214.f4.f0};



static uint8_t  func_1(void);
static int8_t  func_15(int64_t  p_16);
static int32_t  func_18(uint64_t  p_19, uint32_t  p_20, int32_t  p_21);
static int16_t  func_23(uint8_t  p_24, uint32_t  p_25, int32_t * const  p_26, uint32_t  p_27, int32_t * p_28);
static struct S0  func_31(uint64_t  p_32);
static union U1 * func_33(int32_t * p_34);
static int32_t * func_35(union U1 * p_36, const uint8_t  p_37, union U1  p_38);
static union U1 * func_39(int32_t  p_40, int8_t  p_41, uint64_t  p_42);




static uint8_t  func_1(void)
{ 
    int32_t *l_2 = &g_3[0];
    int32_t *l_4 = &g_3[0];
    int32_t *l_5 = &g_3[0];
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = &g_3[0];
    int32_t *l_8 = &g_3[0];
    int32_t *l_9 = &g_3[0];
    int32_t *l_10[6][3][6] = {{{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],(void*)0},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]}},{{&g_3[0],&g_3[0],(void*)0,&g_3[0],(void*)0,&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]}},{{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],(void*)0,(void*)0}},{{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],(void*)0},{&g_3[0],(void*)0,&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]}},{{&g_3[0],(void*)0,&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],(void*)0,&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]}},{{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]}}};
    int64_t l_11 = 0x5FF4442628217C71LL;
    uint16_t l_12[7] = {0xC74EL,0x3560L,0xC74EL,0xC74EL,0x3560L,0xC74EL,0xC74EL};
    uint32_t l_1611[4];
    const uint8_t *l_1617 = &g_1413.f1;
    const uint8_t **l_1616 = &l_1617;
    const uint8_t ***l_1615 = &l_1616;
    const uint8_t ****l_1614 = &l_1615;
    uint32_t l_1623 = 0x9488C5C8L;
    struct S0 l_1626 = {-4L,-1L};
    union U1 *l_1628 = &g_1214;
    int64_t l_1637 = 0L;
    uint64_t l_1642[4];
    int16_t l_1645 = 0x323AL;
    union U1 l_1678 = {1UL};
    uint8_t l_1707[5];
    uint32_t l_1708 = 0x8090E9F4L;
    uint32_t l_1709 = 3UL;
    const int32_t l_1744 = 0x3F5AAF73L;
    int32_t l_1917 = 0xE4C7F631L;
    int32_t l_1924 = 0L;
    int32_t l_1928 = 0x0360B87EL;
    uint32_t l_1947 = 0x565B8E8DL;
    uint64_t l_1979 = 0xCDD2064F186F1965LL;
    uint32_t l_2019 = 0xEF22175FL;
    uint16_t ****l_2023 = &g_940;
    uint16_t ***** const l_2022[3] = {&l_2023,&l_2023,&l_2023};
    uint16_t l_2038 = 1UL;
    uint16_t l_2064 = 65535UL;
    int16_t l_2081 = (-8L);
    int64_t ****l_2091 = &g_1203;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1611[i] = 0xD9CC2B40L;
    for (i = 0; i < 4; i++)
        l_1642[i] = 3UL;
    for (i = 0; i < 5; i++)
        l_1707[i] = 0UL;
    ++l_12[3];
    if (((*l_5) = ((func_15(g_3[0]) <= (((g_1610[0][0][2] = (~g_62.f1)) != l_1611[3]) ^ (0x3F8EB1F3L || g_1413.f1))) >= (safe_add_func_uint16_t_u_u(((void*)0 != l_1614), 0xFE43L)))))
    { 
        int64_t l_1618 = 0x550967DC23AE4196LL;
        int32_t l_1632 = (-10L);
        int32_t l_1634 = 0L;
        int32_t l_1641 = 0x0477F86DL;
        union U1 l_1659 = {0xDBL};
        if (l_1618)
        { 
            uint32_t l_1619 = 4294967287UL;
            int8_t *l_1622[2][4];
            int64_t *l_1627 = &g_717;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1622[i][j] = &g_679[1];
            }
            (*l_7) = (l_1619 | (((l_1623 = (safe_rshift_func_int8_t_s_s(0xC2L, 6))) > (safe_add_func_int16_t_s_s((((l_1626 , ((((*l_4) >= 0x54L) ^ 1UL) , l_1627)) == &g_188) < l_1619), l_1618))) < 0x9176C32FD3A44FD4LL));
            (*l_5) = (-10L);
        }
        else
        { 
            uint16_t l_1629 = 0x0BD6L;
            l_1628 = l_1628;
            --l_1629;
        }
        for (g_1214.f1 = 0; (g_1214.f1 <= 6); g_1214.f1 += 1)
        { 
            int16_t l_1633 = 0x7FBAL;
            int32_t l_1635 = (-3L);
            int32_t l_1636 = 0L;
            int32_t l_1639[6][3] = {{1L,1L,0x8C364989L},{1L,1L,0x8C364989L},{1L,1L,0x8C364989L},{1L,1L,0x8C364989L},{1L,1L,0x8C364989L},{1L,1L,0x8C364989L}};
            int32_t l_1640[2][3] = {{0L,0L,0x39134DB0L},{0L,0L,0x39134DB0L}};
            uint16_t l_1647 = 0x4E75L;
            const union U1 l_1653[6][6][6] = {{{{0UL},{2UL},{0x1FL},{249UL},{0x6FL},{1UL}},{{1UL},{0xCDL},{1UL},{0xE6L},{0x54L},{255UL}},{{255UL},{0UL},{255UL},{0x9EL},{0x7DL},{249UL}},{{0xCDL},{249UL},{0xBEL},{0xACL},{0xACL},{0xBEL}},{{0xC6L},{0xC6L},{0x9EL},{0x1EL},{2UL},{0UL}},{{0x6FL},{0UL},{0x56L},{0UL},{0xBEL},{0x9EL}}},{{{255UL},{0x6FL},{0x56L},{1UL},{0xC6L},{0UL}},{{0UL},{1UL},{0x9EL},{0x81L},{0x2AL},{0xBEL}},{{0x81L},{0x2AL},{0xBEL},{1UL},{0x86L},{249UL}},{{0x6CL},{0xA5L},{255UL},{0UL},{0xF9L},{255UL}},{{0xF9L},{255UL},{1UL},{1UL},{0xA5L},{1UL}},{{0x1FL},{255UL},{0x1FL},{0UL},{0xCDL},{0x2AL}}},{{{0x7EL},{0UL},{255UL},{249UL},{0x86L},{1UL}},{{0x7DL},{0UL},{0UL},{249UL},{0x56L},{0UL}},{{0x7EL},{0xBEL},{0UL},{0UL},{255UL},{0x1FL}},{{1UL},{0x2AL},{255UL},{0x7EL},{0xC6L},{0xBEL}},{{0xACL},{1UL},{0x86L},{0UL},{0UL},{1UL}},{{255UL},{0xE5L},{2UL},{255UL},{0x1EL},{0x1EL}}},{{{1UL},{0x7EL},{0x7EL},{1UL},{0UL},{255UL}},{{0x54L},{0x86L},{0x56L},{9UL},{0xF4L},{0x7DL}},{{0xE5L},{0UL},{0x54L},{0xE6L},{0xF4L},{0x9EL}},{{255UL},{0x86L},{0xA5L},{0xCDL},{0UL},{0UL}},{{249UL},{0x7EL},{0x6FL},{0xA5L},{0x1EL},{0UL}},{{0x1FL},{0xE5L},{0x2AL},{0xF9L},{0UL},{0xA5L}}},{{{0x81L},{1UL},{255UL},{0x86L},{0xC6L},{0x54L}},{{255UL},{0x2AL},{0UL},{0x2AL},{255UL},{249UL}},{{0UL},{0xBEL},{0UL},{0xC6L},{0x56L},{0UL}},{{0xCDL},{0UL},{0xE5L},{0xBEL},{0x86L},{0UL}},{{0UL},{0UL},{0UL},{2UL},{0x1FL},{249UL}},{{0x86L},{0x81L},{0UL},{0xACL},{249UL},{0x54L}}},{{{0x6FL},{1UL},{255UL},{0x7DL},{0xACL},{0xA5L}},{{0xF2L},{249UL},{0x2AL},{0x54L},{0x6FL},{0UL}},{{0UL},{0x54L},{0x6FL},{0x6FL},{0x54L},{0UL}},{{1UL},{9UL},{0xA5L},{0xF4L},{249UL},{0x9EL}},{{1UL},{255UL},{0x54L},{0x56L},{0xF2L},{0x7DL}},{{1UL},{0UL},{0x56L},{0xF4L},{0UL},{255UL}}}};
            int i, j, k;
            for (g_157.f1 = 0; (g_157.f1 <= 1); g_157.f1 += 1)
            { 
                int16_t l_1638 = 0x8811L;
                int32_t l_1646[6] = {0x1D16F331L,0x1D16F331L,5L,0x1D16F331L,0x1D16F331L,5L};
                struct S0 ** const ** const l_1650[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t *l_1658 = &g_679[1];
                int32_t * const **l_1660 = (void*)0;
                int i, j;
                ++l_1642[2];
                l_1647--;
                (*l_4) = ((((g_337[(g_157.f1 + 3)][g_157.f1] = (l_1650[1] == (void*)0)) < (safe_lshift_func_int8_t_s_s((l_1653[3][1][4] , (safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s(((l_1611[g_157.f1] | ((void*)0 != l_1658)) > (l_1659 , (-2L))), (-1L))), l_1611[g_157.f1]))), l_1653[3][1][4].f1))) , l_1660) != (void*)0);
            }
            (*l_5) = (0L & (*l_4));
        }
    }
    else
    { 
        uint64_t *l_1691[3];
        const int32_t l_1698 = (-1L);
        int32_t l_1714 = 0x6CA40999L;
        int32_t l_1727 = 0x2E89A942L;
        int32_t l_1728 = 7L;
        uint32_t l_1729[4][1][5] = {{{1UL,9UL,9UL,1UL,0x47375213L}},{{1UL,9UL,9UL,1UL,0x47375213L}},{{1UL,9UL,9UL,1UL,0x47375213L}},{{1UL,9UL,9UL,1UL,0x47375213L}}};
        struct S0 l_1743[3][4] = {{{6L,-2L},{6L,-2L},{6L,-2L},{6L,-2L}},{{6L,-2L},{6L,-2L},{6L,-2L},{6L,-2L}},{{6L,-2L},{6L,-2L},{6L,-2L},{6L,-2L}}};
        uint64_t * const **l_1764 = (void*)0;
        uint16_t **l_1787[7] = {&g_125,&g_125,&g_125,&g_125,(void*)0,(void*)0,&g_125};
        union U1 l_1805 = {252UL};
        uint8_t *l_1812 = &l_1707[4];
        const union U1 l_1817 = {0xD6L};
        uint8_t ****l_1820 = &g_1819;
        int32_t *l_1821[3];
        uint16_t l_1857[1][1];
        uint16_t l_1877 = 0xFCF0L;
        int32_t l_1925 = 0x3C10687AL;
        int32_t l_1926[7][2][6] = {{{(-9L),(-9L),(-6L),0x963CCD67L,0L,0x6909C8DCL},{1L,(-6L),0x77AD70F2L,0x6909C8DCL,0x77AD70F2L,(-6L)}},{{0x963CCD67L,1L,0x77AD70F2L,(-1L),(-9L),0x6909C8DCL},{0x04ABB3CAL,(-1L),(-6L),(-6L),(-1L),0x04ABB3CAL}},{{(-6L),(-1L),0x04ABB3CAL,0x24D4DFD1L,(-9L),0x77AD70F2L},{0x77AD70F2L,1L,0x963CCD67L,1L,0x77AD70F2L,(-1L)}},{{0x77AD70F2L,(-6L),1L,0x24D4DFD1L,0L,0L},{(-6L),(-9L),(-9L),(-6L),0x963CCD67L,0L}},{{0x04ABB3CAL,0L,1L,(-1L),0x24D4DFD1L,(-1L)},{0x963CCD67L,(-1L),0x963CCD67L,0x6909C8DCL,0x24D4DFD1L,0x77AD70F2L}},{{1L,0L,0x04ABB3CAL,0x963CCD67L,0x963CCD67L,0x04ABB3CAL},{(-9L),(-9L),(-6L),0x963CCD67L,0L,0x6909C8DCL}},{{1L,(-6L),0x77AD70F2L,0x6909C8DCL,0x77AD70F2L,(-6L)},{0x963CCD67L,1L,0x77AD70F2L,(-1L),(-9L),0x6909C8DCL}}};
        int16_t l_1927 = 1L;
        int32_t l_1954[7] = {0L,0L,0L,0L,0L,0L,0L};
        union U1 l_1963 = {250UL};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1691[i] = &g_222;
        for (i = 0; i < 3; i++)
            l_1821[i] = &g_109;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1857[i][j] = 0x9FD7L;
        }
lbl_1998:
        if ((((((((l_1691[2] == (*g_1462)) & (**g_1462)) , (safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((((*g_1463)--) < l_1698), l_1698)) > (*g_125)), ((safe_mod_func_uint8_t_u_u((((((((safe_add_func_int64_t_s_s((g_886[3][1] = ((safe_div_func_uint64_t_u_u((((((safe_mod_func_int64_t_s_s((3L & (*l_9)), l_1707[4])) == l_1708) ^ (*l_8)) , (**l_1614)) == (void*)0), l_1698)) , 0xDD90EDA7E7C87491LL)), l_1698)) > 0x3EL) , l_1709) < 2L) > (*l_8)) & (*g_125)) ^ l_1698), g_1413.f1)) | g_1216[1][0].f1)))) , g_1214.f1) , 5L) , (**g_1462)) <= g_337[1][1]))
        { 
            int32_t **l_1710 = &l_10[3][2][3];
            l_1628 = func_33(((*l_1710) = &g_3[0]));
        }
        else
        { 
            uint64_t l_1715 = 18446744073709551610UL;
            int32_t l_1724 = 0xE76EE15CL;
            union U1 *l_1766 = &g_1214;
            uint32_t l_1796 = 0x3AFB2CA7L;
            for (l_1709 = (-25); (l_1709 == 8); ++l_1709)
            { 
                uint8_t *l_1720[4] = {&g_1393,&g_1393,&g_1393,&g_1393};
                int32_t l_1723 = 0x080A1E46L;
                int32_t l_1725 = 8L;
                int32_t l_1726 = (-1L);
                int8_t l_1742 = 1L;
                int i;
                if (g_193)
                    break;
                for (g_706 = 1; (g_706 >= 0); g_706 -= 1)
                { 
                    int16_t l_1713 = 0xB2D0L;
                    int i, j;
                    --l_1715;
                    return g_444[g_706][(g_706 + 2)];
                }
                if (((***g_1461) >= (((((*l_2) &= ((safe_mul_func_uint8_t_u_u((l_1714 ^= l_1698), (safe_add_func_int8_t_s_s(g_266, (++l_1729[3][0][3]))))) , ((l_1723 | (0x95F87A15L & (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(l_1742, (((l_1743[2][2] , g_337[2][0]) ^ l_1724) >= g_708[0][0]))), 6)), 1)), 5L)), l_1715)))) & (-6L)))) , l_1744) , (-1L)) <= g_1610[0][0][2])))
                { 
                    int32_t l_1745[4] = {0x95DBB40FL,0x95DBB40FL,0x95DBB40FL,0x95DBB40FL};
                    int i;
                    return l_1745[2];
                }
                else
                { 
                    int16_t l_1765 = 0L;
                    union U1 **l_1767 = (void*)0;
                    union U1 **l_1768 = &g_156;
                    union U1 **l_1769 = &g_156;
                    union U1 **l_1770 = &l_1766;
                    int16_t *l_1773 = &l_1765;
                    int32_t l_1794 = 0x2DB73A2FL;
                    int32_t **l_1797 = &g_162;
                    int32_t **l_1798 = (void*)0;
                    int32_t **l_1799 = &l_9;
                    (*l_4) = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_1727 = g_221), (((((&l_1744 != (l_1626 , (*g_792))) , ((safe_div_func_int16_t_s_s(((l_1724 = (((***g_1461)++) ^ (0xC78AL != (l_1742 & (((*l_1770) = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_1765 = ((safe_mul_func_uint8_t_u_u((&g_1462 == l_1764), l_1742)) , l_1729[2][0][2])), l_1698)), 0xC435L)) , l_1766)) == (void*)0))))) >= l_1725), 5UL)) && 0x56BF0617L)) >= g_146[3][2][2]) != g_56) , l_1765))), g_1216[1][0].f0)) , (void*)0) != (void*)0);
                    l_1796 |= ((safe_div_func_uint16_t_u_u((0xDEL & (*l_4)), ((*l_1773) = l_1727))) != ((safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s((-2L), (((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((((safe_add_func_int16_t_s_s(((void*)0 == l_1787[6]), (safe_rshift_func_int16_t_s_s((l_1743[2][2].f0 ^= (safe_div_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(l_1723, (*g_125))) , l_1724) , 0xAFD51F38L), g_1214.f1))), 12)))) != g_1413.f1) ^ l_1794))), g_1795)) <= g_581), 0xDDL)), l_1729[3][0][4])) == 8L) <= (*l_9)))), (**g_1462))) || 65526UL));
                    if (l_1794)
                        break;
                    (*l_1799) = ((*l_1797) = &g_3[0]);
                }
            }
        }
        g_347.f0 |= (((!(l_1743[2][2].f0 = 0x9066L)) > (safe_mul_func_int16_t_s_s(g_708[3][0], ((*l_2) = (g_62.f1 || (safe_mod_func_int8_t_s_s((g_679[0] = ((l_1805 , ((safe_sub_func_uint16_t_u_u(((*g_125) |= (safe_add_func_uint32_t_u_u(g_179, g_347.f1))), (g_109 , 0x9375L))) <= l_1805.f0)) < 0xEBL)), l_1729[3][0][3]))))))) , (-2L));
lbl_1977:
        if ((((((safe_mul_func_uint8_t_u_u(((*l_1812) = ((void*)0 != &g_146[3][2][2])), l_1743[2][2].f0)) ^ (-1L)) ^ ((((safe_div_func_uint8_t_u_u((l_1805.f4.f0 = ((void*)0 != g_1203)), (safe_mod_func_uint64_t_u_u((l_1817 , 0x6BA32EAD0CE41CE1LL), 0x19D23103D3CECCA4LL)))) > 1L) , (*l_4)) < (*g_1463))) , l_1698) && (**g_1462)))
        { 
            union U1 l_1824 = {0x2EL};
            int8_t l_1848 = 0L;
            const uint16_t l_1863 = 65535UL;
            int32_t **l_1866 = (void*)0;
            int32_t **l_1867 = &l_10[0][2][0];
            if ((((*g_1463) , g_1818) != l_1820))
            { 
                int32_t **l_1825 = &l_7;
                (*l_1825) = (((*l_1812) = ((((*g_466) = (*g_792)) != l_1821[1]) , ((safe_rshift_func_uint8_t_u_u(l_1817.f1, 4)) , 0xD1L))) , l_5);
                for (g_833 = 6; (g_833 == 25); g_833++)
                { 
                    int16_t l_1828 = 0xABFBL;
                    l_1828 &= ((*l_9) = 0xDA9E5FB6L);
                    if (g_203)
                        goto lbl_1832;
                }
            }
            else
            { 
                int32_t **l_1829 = &l_7;
                (*l_1829) = &g_3[0];
            }
lbl_1832:
            (*l_2) = ((safe_lshift_func_uint16_t_u_u(3UL, 6)) <= 0L);
            (*l_8) = (~(l_1729[1][0][0] && (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((*l_8), (g_679[1] = ((((~((safe_div_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(l_1824.f1, 1)) != ((safe_unary_minus_func_uint32_t_u((0xD7L || ((g_422 && (safe_sub_func_int64_t_s_s((g_107 | (l_1805 , l_1848)), 0xE50B2F11201FB084LL))) > 0x454B5AE7L)))) == l_1698)), g_708[0][0])) > l_1714)) == g_188) >= (**g_1462)) != (*g_125))))), g_337[2][0]))));
            for (g_396 = (-24); (g_396 > 9); g_396 = safe_add_func_int16_t_s_s(g_396, 8))
            { 
                uint16_t l_1862 = 0x18B3L;
                uint16_t l_1865 = 65529UL;
                if ((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((--(*g_125)), l_1857[0][0])), g_833)) ^ (g_222 |= (l_1817 , ((safe_div_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s(l_1805.f1, ((l_1862 != ((((**g_1462) != ((*l_7) == l_1817.f0)) > 0x71CB3F1EL) || g_886[3][1])) | (-9L)))) || 0xDD07D004L) & l_1863), (-6L))) ^ l_1824.f1)))) ^ 8UL))
                { 
                    uint16_t l_1864 = 0x929FL;
                    return l_1864;
                }
                else
                { 
                    return l_1865;
                }
            }
            (*l_1867) = &g_3[0];
        }
        else
        { 
            int32_t l_1873[4][5] = {{0xE4D21E0CL,1L,(-1L),1L,0xE4D21E0CL},{0x01663482L,1L,0xE3A8EEC8L,0xE4D21E0CL,0xE3A8EEC8L},{0xE3A8EEC8L,0xE3A8EEC8L,(-1L),0xE4D21E0CL,0xB8A50D60L},{1L,0x01663482L,0x01663482L,1L,0xE3A8EEC8L}};
            int32_t l_1876[7];
            uint16_t ** const l_1880 = &g_125;
            uint64_t **l_1915 = &g_1463;
            union U1 *l_1919 = &g_1216[0][0];
            int i, j;
            for (i = 0; i < 7; i++)
                l_1876[i] = 0x3B8F6AECL;
            for (l_1805.f2 = 0; (l_1805.f2 >= (-12)); l_1805.f2 = safe_sub_func_uint16_t_u_u(l_1805.f2, 1))
            { 
                uint16_t l_1884 = 0xBC08L;
                uint16_t l_1900 = 0x6C56L;
                int16_t *l_1901[3];
                int8_t *l_1902 = (void*)0;
                int8_t *l_1903 = &g_264;
                int32_t ***l_1916 = &g_792;
                int32_t l_1918 = 0x77BAA9B1L;
                union U1 l_1920 = {0UL};
                int32_t **l_1921 = &l_5;
                int i;
                for (i = 0; i < 3; i++)
                    l_1901[i] = &g_1060;
                for (g_295 = (-15); (g_295 != 41); g_295 = safe_add_func_uint16_t_u_u(g_295, 7))
                { 
                    int16_t l_1872 = 0x690DL;
                    int16_t l_1874 = (-1L);
                    int32_t l_1875[3];
                    uint16_t **l_1881 = &g_125;
                    uint16_t ***l_1882 = (void*)0;
                    uint16_t ***l_1883 = &l_1787[6];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1875[i] = 1L;
                    l_1877--;
                    (*l_2) = (l_1880 == ((*l_1883) = l_1881));
                    if (l_1884)
                        continue;
                }
                (*l_5) ^= ((safe_add_func_uint32_t_u_u((((***g_1461) | (safe_unary_minus_func_uint64_t_u(0xCE9C1DD8214E0903LL))) , (safe_mul_func_int16_t_s_s(g_98, (safe_add_func_uint32_t_u_u(g_422, 0L))))), (((((*l_1903) &= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((--g_146[1][2][2]), (l_1876[1] &= ((((safe_sub_func_uint64_t_u_u((l_1884 < (0x02L < l_1873[0][3])), l_1728)) == g_719[1][0]) < l_1900) | 0x29L)))), 0xF7CD191B84955E64LL))) , 0xD437994A878C51DCLL) & g_1214.f1) , g_179))) >= l_1884);
                (*l_1921) = &g_3[0];
            }
        }
        if ((safe_mul_func_uint8_t_u_u(l_1857[0][0], 0xA0L)))
        { 
            uint32_t l_1929 = 0xE5F4B2B9L;
            l_1929--;
            (*l_4) = 0x9A45DF26L;
        }
        else
        { 
            int64_t l_1932 = 0x8A0080709F5E3F80LL;
            uint32_t l_1948 = 0xC4490144L;
            int32_t l_1952 = 0xBA2E5E4BL;
            int32_t l_1953 = 4L;
            int32_t l_1955 = 0L;
            l_1926[3][0][5] &= (l_1932 &= ((*l_4) , ((void*)0 != &g_940)));
            for (g_1214.f2 = 0; (g_1214.f2 != 1); ++g_1214.f2)
            { 
                const uint32_t l_1946[2][1] = {{0xEFF6DDA2L},{0xEFF6DDA2L}};
                uint32_t l_1949 = 0xAAE26EBEL;
                uint16_t l_1956 = 0x90BDL;
                int i, j;
                for (g_79 = 0; (g_79 < 29); g_79 = safe_add_func_int32_t_s_s(g_79, 6))
                { 
                    (*l_7) ^= ((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((+(0x9200F930L > ((safe_div_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(((((l_1946[0][0] , ((l_1946[0][0] || ((*g_1462) == (*g_1462))) >= 0x7E6302E5L)) , (l_1947 & l_1948)) && (*g_125)) >= l_1728), (-7L))) , 4294967295UL) > g_444[1][2]), 0x017DL)) < g_56))), 0xB3CEL)), l_1946[0][0])) , g_706);
                    if (l_1927)
                        continue;
                    ++l_1949;
                }
                ++l_1956;
            }
        }
        if (((g_501 && 0x294E9547L) >= ((safe_lshift_func_int8_t_s_s((g_193 = ((***l_1614) == (***l_1820))), 1)) <= (safe_mod_func_int64_t_s_s(((l_1963 , ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*g_125)++), (safe_sub_func_uint8_t_u_u((*l_9), ((g_62.f0 ^= 0xBA07CFA5L) | 1L))))), 3L)) >= l_1805.f0)) > 18446744073709551610UL), (***g_1461))))))
        { 
            uint32_t l_1974 = 4UL;
            int32_t l_1975 = 0xD867546EL;
lbl_1976:
            g_347.f0 = (safe_lshift_func_int16_t_s_s(g_1216[1][0].f0, ((l_1974 != (l_1975 | 0xAE0AL)) || (g_1795 | ((g_157.f2 = ((*l_5) |= 0x9F47C8ECL)) >= l_1974)))));
            for (g_1060 = 1; (g_1060 <= 6); g_1060 += 1)
            { 
                int i;
                for (g_1393 = 0; (g_1393 <= 6); g_1393 += 1)
                { 
                    int32_t **l_1978 = &g_162;
                    if (g_188)
                        goto lbl_1976;
                    if (l_1805.f1)
                        goto lbl_1977;
                    (*l_1978) = (void*)0;
                }
                if (l_1954[g_1060])
                    break;
                for (g_581 = 1; (g_581 <= 6); g_581 += 1)
                { 
                    l_1979++;
                }
                for (g_179 = 0; (g_179 <= 6); g_179 += 1)
                { 
                    union U1 *l_1996 = &g_1216[0][0];
                    union U1 **l_1997 = &g_156;
                    int i;
                    if (l_1954[g_179])
                        break;
                    (*l_5) = (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((0x7A7FEDB0L || g_719[4][0]), (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_1954[g_179] , (*l_5)), (g_193 = 1L))), 0xD9L)))), ((void*)0 == (*g_903)))), g_109)), l_1975)), 0x45L));
                    (*l_1997) = l_1996;
                }
            }
            if (g_62.f1)
                goto lbl_1998;
        }
        else
        { 
            uint32_t l_2001 = 4294967295UL;
            (*l_5) = (safe_mod_func_int16_t_s_s(0L, g_146[3][2][2]));
            --l_2001;
        }
    }
    for (l_1678.f3 = 0; (l_1678.f3 < (-23)); --l_1678.f3)
    { 
        union U1 **l_2006 = &l_1628;
        const uint64_t l_2007[3] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        const int32_t *l_2009 = &g_2010;
        const int32_t **l_2008 = &l_2009;
        uint16_t ****l_2013 = (void*)0;
        uint16_t *****l_2012[7][4] = {{&l_2013,&l_2013,&l_2013,&l_2013},{&l_2013,&l_2013,&l_2013,&l_2013},{&l_2013,&l_2013,&l_2013,&l_2013},{&l_2013,&l_2013,&l_2013,&l_2013},{&l_2013,&l_2013,&l_2013,&l_2013},{&l_2013,&l_2013,&l_2013,&l_2013},{&l_2013,&l_2013,&l_2013,&l_2013}};
        uint16_t ****l_2014 = &g_940;
        const int16_t l_2037 = 0L;
        int32_t l_2039 = 0xE72DDF5FL;
        int i, j;
        g_2011[0] = ((*l_2008) = &g_3[0]);
        if (((l_2014 = &g_940) == &g_940))
        { 
            int16_t *l_2024 = &g_266;
            int16_t *l_2025 = &l_1645;
            int32_t l_2030 = 0xC45573F2L;
            int64_t *l_2034 = &l_1637;
            int64_t **l_2033[3][4][2] = {{{&l_2034,(void*)0},{(void*)0,(void*)0},{&l_2034,(void*)0},{(void*)0,(void*)0}},{{&l_2034,&l_2034},{&l_2034,&l_2034},{&l_2034,(void*)0},{&l_2034,&l_2034}},{{&l_2034,&l_2034},{&l_2034,(void*)0},{(void*)0,(void*)0},{&l_2034,(void*)0}}};
            int64_t ***l_2032 = &l_2033[0][3][0];
            uint32_t *l_2035 = (void*)0;
            uint32_t *l_2036 = &g_127[3];
            struct S0 l_2075 = {0xDA42A474L,0x9837L};
            int32_t l_2080 = (-1L);
            int i, j, k;
            l_2039 ^= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_2019 != g_706), 3)), ((safe_div_func_uint16_t_u_u((((*l_2025) &= ((*l_2024) &= ((void*)0 != l_2022[0]))) | ((safe_mul_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u(((((*l_7) = l_2030) == ((*l_2036) ^= (((+(g_1203 == l_2032)) < l_2030) < g_347.f1))) , (**l_2008)), l_2037)) , (**l_2008)) || l_2038) >= 0xBB46L), 0x41L)) ^ (**g_1462))), l_2030)) > (*g_125))));
            for (g_1214.f0 = 0; (g_1214.f0 <= 46); ++g_1214.f0)
            { 
                uint32_t l_2042 = 0x16B23D0FL;
                union U1 **l_2045 = &g_156;
                l_2042--;
                (*l_2045) = ((*l_2006) = &l_1678);
            }
            for (l_2030 = 3; (l_2030 >= 0); l_2030 -= 1)
            { 
                struct S0 ***l_2054 = &g_272;
                const int32_t l_2063 = 0x8B410922L;
                uint32_t *l_2078 = &g_833;
                for (g_157.f0 = 0; (g_157.f0 <= 3); g_157.f0 += 1)
                { 
                    union U1 ***l_2053 = (void*)0;
                    int i;
                    g_62.f0 = ((*l_8) = 0x1AACF846L);
                    (*l_9) |= 0xBA08271EL;
                    l_2039 ^= ((*l_8) = ((((safe_lshift_func_uint16_t_u_u(((*g_125) &= (!(((safe_sub_func_int16_t_s_s(l_1642[l_2030], (((safe_mul_func_int16_t_s_s(((void*)0 == l_2053), ((void*)0 == l_2054))) >= (1L & ((((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((l_2063 > (*l_2009)) <= g_157.f1) || 7L), l_2064)), (**l_2008))), (**l_2008))), g_347.f0)) >= (*l_4)) , 0x7EA6L) != l_2030))) > (-7L)))) || l_2030) || l_2030))), l_2030)) >= (***g_1461)) || (**g_1462)) | l_2030));
                }
                for (g_1214.f2 = 0; (g_1214.f2 >= 0); g_1214.f2 -= 1)
                { 
                    uint8_t *l_2079[2][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    if (l_2063)
                        break;
                    g_3[g_1214.f2] = ((l_2080 |= (((((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u(0xDBL, (((safe_sub_func_uint32_t_u_u(g_188, g_886[5][1])) | (safe_add_func_uint8_t_u_u(1UL, ((l_2075 , l_2009) == ((safe_div_func_int64_t_s_s((*l_2), 9UL)) , l_2078))))) & g_337[1][1]))) ^ (*l_2009)), 4)), 0x44L)) < (*l_8)) != (*g_1463)) > (-2L)) <= g_109)) <= 0UL);
                    (*l_2008) = &l_2030;
                    (*g_1322) = (*g_1322);
                }
                (*l_5) ^= l_2075.f1;
                for (g_503 = 0; (g_503 <= 1); g_503 += 1)
                { 
                    if (l_2081)
                        break;
                    (*l_4) |= l_2063;
                }
            }
            (*l_2008) = &l_2080;
        }
        else
        { 
            int16_t l_2099 = 0x7E6EL;
            const int32_t *l_2100 = &l_2039;
            (*l_2008) = ((safe_div_func_int16_t_s_s((2L < (safe_div_func_uint32_t_u_u((*l_7), g_188))), (+l_2099))) , l_2100);
            return (*l_7);
        }
    }
    return (*l_4);
}



static int8_t  func_15(int64_t  p_16)
{ 
    uint64_t l_17 = 3UL;
    int32_t l_1088 = 0x504A7841L;
    uint16_t *l_1091 = &g_56;
    int32_t l_1100[7] = {0xC8944D33L,(-1L),(-1L),0xC8944D33L,(-1L),(-1L),0xC8944D33L};
    int32_t l_1109 = (-1L);
    const union U1 l_1122 = {0x4EL};
    int32_t *l_1137 = &g_347.f0;
    union U1 *l_1215 = &g_1216[1][0];
    struct S0 l_1242 = {1L,1L};
    uint64_t *l_1284 = &l_17;
    uint64_t **l_1283 = &l_1284;
    int16_t *l_1285 = &g_266;
    struct S0 l_1291[6][5][2] = {{{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}},{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}},{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}},{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}},{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}}},{{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}},{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}},{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}},{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}},{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}}},{{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}},{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}},{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}},{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}},{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}}},{{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}},{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}},{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}},{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}},{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}}},{{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}},{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}},{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}},{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}},{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}}},{{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}},{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}},{{0xABDEE9C2L,0xD47BL},{0xFDB94AD3L,0L}},{{0xFDB94AD3L,0L},{0xABDEE9C2L,0xD47BL}},{{0xFDB94AD3L,0L},{0xFDB94AD3L,0L}}}};
    uint8_t ** const l_1292 = &g_688[2];
    struct S0 ***l_1338 = (void*)0;
    struct S0 ****l_1337 = &l_1338;
    int32_t **l_1408 = (void*)0;
    uint16_t ** const **l_1444 = (void*)0;
    union U1 l_1546[3][4] = {{{0xCFL},{0xCFL},{0xCFL},{0xCFL}},{{0xCFL},{0xCFL},{0xCFL},{0xCFL}},{{0xCFL},{0xCFL},{0xCFL},{0xCFL}}};
    uint32_t l_1580 = 5UL;
    int i, j, k;
    l_17 |= (-1L);
    l_1088 = func_18(g_3[0], (l_17 || g_3[0]), p_16);
lbl_1466:
    if ((safe_lshift_func_uint16_t_u_s(((*l_1091) &= (*g_125)), 2)))
    { 
        int64_t l_1096 = 0xB6FD6A88EB13CAB7LL;
        int32_t l_1097 = (-3L);
        int32_t l_1099 = 0x51640411L;
        uint32_t l_1101 = 18446744073709551610UL;
        int32_t l_1104 = 0x2D112F19L;
        int32_t l_1105 = 2L;
        int32_t l_1106[6] = {0L,0L,0L,0L,0L,0L};
        int8_t l_1110 = (-1L);
        int i;
        for (p_16 = 0; (p_16 <= 3); p_16 += 1)
        { 
            int32_t *l_1094 = &g_157.f4.f0;
            int32_t *l_1095[6];
            int32_t **l_1098 = &l_1095[2];
            int64_t l_1107 = 0xB43A4559D86561E8LL;
            int8_t l_1108 = 0x51L;
            uint32_t l_1111[4][4] = {{0x548EEB6FL,0x548EEB6FL,0x548EEB6FL,0x548EEB6FL},{0x548EEB6FL,0x548EEB6FL,0x548EEB6FL,0x548EEB6FL},{0x548EEB6FL,0x548EEB6FL,0x548EEB6FL,0x548EEB6FL},{0x548EEB6FL,0x548EEB6FL,0x548EEB6FL,0x548EEB6FL}};
            int i, j;
            for (i = 0; i < 6; i++)
                l_1095[i] = (void*)0;
            l_1097 |= ((--(*g_125)) , (l_1096 |= 0L));
            (*l_1098) = &l_1088;
            l_1101--;
            --l_1111[2][2];
        }
    }
    else
    { 
        int32_t *l_1114 = &l_1088;
        int32_t **l_1115[5][2] = {{&g_162,&g_162},{(void*)0,&g_162},{&g_162,(void*)0},{&g_162,&g_162},{(void*)0,&g_162}};
        int32_t *l_1136 = &l_1100[2];
        int8_t l_1230 = 0x97L;
        struct S0 ***l_1248 = (void*)0;
        struct S0 ****l_1247 = &l_1248;
        struct S0 *****l_1246 = &l_1247;
        uint16_t l_1256 = 0x975BL;
        union U1 **l_1261 = &g_156;
        union U1 ***l_1260 = &l_1261;
        union U1 **l_1264[6] = {&g_156,(void*)0,(void*)0,&g_156,(void*)0,(void*)0};
        union U1 ***l_1263[3][5] = {{&l_1264[1],&l_1264[4],&l_1264[1],&l_1264[1],&l_1264[1]},{&l_1264[4],&l_1264[1],&l_1264[4],&l_1264[1],&l_1264[1]},{&l_1264[4],&l_1264[1],&l_1264[1],&l_1264[1],&l_1264[4]}};
        int i, j;
        g_162 = l_1114;
        for (g_422 = 0; (g_422 <= 3); g_422 += 1)
        { 
            uint16_t l_1135 = 1UL;
            int32_t l_1158[5] = {0L,0L,0L,0L,0L};
            uint16_t l_1181 = 0x2770L;
            int32_t l_1182 = (-9L);
            int32_t *l_1199 = &g_3[0];
            union U1 *l_1213 = &g_1214;
            int32_t l_1225 = 0x87AEC473L;
            int32_t *l_1255 = &l_1100[2];
            int i;
        }
        (*l_1114) = (((*g_162) || ((((*l_1136) != ((safe_unary_minus_func_int16_t_s((((*l_1260) = &g_156) != (g_1265[1][0][0] = (g_1262 = &l_1215))))) | (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((*l_1137), (((*g_125) |= ((void*)0 == (**l_1246))) , p_16))), (-1L))))) && (*l_1137)) ^ (*l_1137))) ^ g_146[3][2][2]);
    }
    if ((safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(3L, (safe_add_func_int32_t_s_s((0xAEL == ((*l_1137) ^= p_16)), p_16)))), ((((*l_1285) &= ((safe_add_func_int32_t_s_s((~(g_719[4][0] = ((void*)0 == &l_1122))), ((safe_rshift_func_uint16_t_u_s((++(*l_1091)), 15)) | ((((*l_1283) = (void*)0) == &g_337[2][0]) > 0x1FD7BF0EL)))) & 1L)) != p_16) ^ l_1122.f1))))
    { 
        uint16_t l_1286 = 1UL;
        const struct S0 l_1290 = {0x33C9E8F7L,0L};
        int32_t l_1326 = 1L;
        uint16_t ***l_1382 = &g_124;
        uint32_t l_1384 = 0x2BD123E2L;
        uint8_t * const l_1392 = &g_1393;
        uint8_t * const *l_1391 = &l_1392;
        uint8_t * const **l_1390 = &l_1391;
        int32_t l_1403 = 0x226666BCL;
        const union U1 *l_1412[1][4] = {{&g_1413,&g_1413,&g_1413,&g_1413}};
        int64_t * const l_1448[4] = {&g_886[3][1],&g_886[3][1],&g_886[3][1],&g_886[3][1]};
        int64_t * const *l_1447 = &l_1448[1];
        int64_t * const **l_1446 = &l_1447;
        int32_t l_1472 = 0x277D2C9CL;
        int32_t l_1473 = (-3L);
        int32_t l_1474 = 6L;
        int32_t l_1475 = (-1L);
        int32_t l_1477 = (-2L);
        int32_t l_1478 = 0x98FD9610L;
        int32_t l_1481[6] = {0x9E3B61C9L,0x9E3B61C9L,0x9E3B61C9L,0x9E3B61C9L,0x9E3B61C9L,0x9E3B61C9L};
        uint32_t l_1483 = 0xFFC5B91AL;
        uint64_t **l_1492 = &g_1463;
        int32_t *l_1500 = &g_1216[1][0].f2;
        int i, j;
        (*l_1137) ^= ((p_16 > l_1286) < ((safe_div_func_int32_t_s_s(p_16, ((!0x43L) | p_16))) , ((l_1290 , l_1291[2][2][0]) , p_16)));
        for (g_221 = 0; g_221 < 7; g_221 += 1)
        {
            g_904[g_221] = &g_346;
        }
        if (((l_1290 , l_1292) != &g_688[1]))
        { 
            int32_t * const l_1293[2][5][4] = {{{&g_3[0],(void*)0,&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],(void*)0,&g_3[0]},{&g_3[0],(void*)0,(void*)0,&g_3[0]},{(void*)0,&g_3[0],(void*)0,(void*)0},{&g_3[0],&g_3[0],(void*)0,&g_3[0]}},{{&g_3[0],(void*)0,(void*)0,&g_3[0]},{(void*)0,&g_3[0],(void*)0,(void*)0},{&g_3[0],&g_3[0],(void*)0,&g_3[0]},{&g_3[0],(void*)0,(void*)0,&g_3[0]},{(void*)0,&g_3[0],(void*)0,(void*)0}}};
            const int32_t *l_1295[6];
            const int32_t **l_1294 = &l_1295[1];
            int64_t **l_1297 = (void*)0;
            int64_t ***l_1296 = &l_1297;
            uint16_t ****l_1330 = &g_940;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1295[i] = &l_1290.f0;
            if ((l_1293[0][1][1] != ((*l_1294) = (void*)0)))
            { 
                uint32_t l_1318 = 0xAA29B7CDL;
                uint16_t *l_1321 = &l_1286;
                uint16_t ****l_1329 = &g_940;
                int32_t l_1332 = (-9L);
                union U1 *l_1374 = &g_157;
                int32_t l_1383 = 0x13BE4B61L;
                l_1296 = g_1203;
                for (g_79 = 0; (g_79 < 12); g_79++)
                { 
                    union U1 *l_1300 = &g_1216[1][0];
                    uint8_t *l_1308 = (void*)0;
                    uint8_t *l_1309 = &g_157.f1;
                    int32_t *l_1310 = &g_347.f0;
                    int8_t *l_1331 = &g_264;
                    uint64_t *l_1333 = &l_17;
                    uint32_t *l_1336 = &g_503;
                    (*l_1294) = l_1310;
                    (*l_1137) |= (l_1290.f1 & ((safe_lshift_func_int16_t_s_u((0xAA8EF248L < 0x68F4CA9DL), (+l_1290.f0))) , (g_62.f1 ^ (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((p_16 != 1L), 1)) & l_1286), g_719[4][0])))));
                    l_1318++;
                    l_1326 |= (((void*)0 != l_1321) > ((g_1322 == ((((void*)0 != &p_16) > ((*l_1321) = (safe_add_func_uint32_t_u_u((1L | ((*l_1285) |= 0x4464L)), 0xB1FEFD7DL)))) , (void*)0)) <= p_16));
                    l_1326 ^= (((safe_lshift_func_int8_t_s_s(((*l_1331) = (l_1329 != l_1330)), (((*l_1336) = (((*l_1333)--) >= g_295)) , ((l_1337 != (void*)0) <= (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((*l_1137), l_1332)) > 0xAB0D273A5F22599DLL), 4294967294UL)) == 0UL) || 0x0EL), p_16)))))) > g_221) == p_16);
                }
                for (g_157.f1 = 1; (g_157.f1 <= 6); g_157.f1 += 1)
                { 
                    uint16_t l_1345[1];
                    int64_t *l_1350 = &g_886[4][1];
                    int64_t *l_1351 = &g_717;
                    uint32_t *l_1372 = &g_127[3];
                    int16_t l_1373 = 0x0D97L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1345[i] = 65530UL;
                    ++l_1345[0];
                    g_3[0] = (((*l_1137) = l_1100[g_157.f1]) ^ ((((safe_add_func_uint64_t_u_u((((*l_1351) = (g_188 ^= ((*l_1350) |= p_16))) & ((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((~(safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((*l_1372) = (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_1318 , (safe_mul_func_int16_t_s_s((l_1332 ^ l_1290.f1), ((p_16 ^ (safe_sub_func_uint8_t_u_u(((((~p_16) || l_1332) | g_396) != p_16), p_16))) >= l_1326)))), 4)), p_16)), 8))) , 0UL), l_1373)), p_16))), p_16)), g_1214.f0)) , p_16)), g_1060)) == g_146[4][2][1]) < 0x6891L) && p_16));
                    l_1100[g_157.f1] = ((void*)0 != l_1374);
                }
                for (l_1242.f0 = 25; (l_1242.f0 == 11); l_1242.f0--)
                { 
                    l_1383 |= (+(safe_mod_func_int32_t_s_s(l_1332, (safe_lshift_func_uint16_t_u_u(65535UL, (4294967295UL ^ ((g_396 = (*l_1137)) == ((*l_1329) == (((*l_1285) = 1L) , l_1382)))))))));
                    return l_1383;
                }
            }
            else
            { 
                l_1088 |= ((*l_1137) = l_1384);
            }
            return g_264;
        }
        else
        { 
            uint32_t l_1402 = 0xCC9A9178L;
            union U1 *l_1405 = (void*)0;
            uint16_t l_1445[2];
            int32_t l_1476 = 0xB8939C37L;
            int32_t l_1479 = 1L;
            int32_t l_1480 = 0x26ED0FC7L;
            int32_t l_1482[7] = {0x2BABCF4CL,0x2BABCF4CL,3L,0x2BABCF4CL,0x2BABCF4CL,3L,0x2BABCF4CL};
            int32_t **l_1486 = &l_1137;
            uint8_t *l_1493 = &g_1214.f0;
            int i;
            for (i = 0; i < 2; i++)
                l_1445[i] = 0x5FB3L;
            for (l_1109 = (-28); (l_1109 != 9); ++l_1109)
            { 
                uint8_t * const *l_1388 = (void*)0;
                uint8_t * const **l_1387 = &l_1388;
                uint8_t * const ***l_1389[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1398 = (-7L);
                uint8_t l_1404 = 0x72L;
                int32_t **l_1406 = &g_162;
                int32_t ***l_1407 = (void*)0;
                int32_t ***l_1409 = &l_1406;
                const union U1 *l_1410 = (void*)0;
                int64_t *l_1426 = &g_188;
                int64_t **l_1425 = &l_1426;
                int64_t ***l_1424 = &l_1425;
                uint64_t ***l_1460[6][7][4] = {{{&l_1283,&l_1283,&l_1283,&l_1283},{(void*)0,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283}},{{&l_1283,(void*)0,&l_1283,&l_1283},{(void*)0,(void*)0,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{(void*)0,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{(void*)0,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283}},{{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,(void*)0,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{(void*)0,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,(void*)0,&l_1283}},{{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,(void*)0,&l_1283,&l_1283},{&l_1283,(void*)0,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{(void*)0,&l_1283,&l_1283,&l_1283},{(void*)0,&l_1283,&l_1283,&l_1283}},{{(void*)0,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,(void*)0,(void*)0,&l_1283},{&l_1283,(void*)0,&l_1283,&l_1283}},{{(void*)0,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,(void*)0,(void*)0},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,&l_1283,&l_1283},{&l_1283,&l_1283,(void*)0,(void*)0},{&l_1283,&l_1283,&l_1283,&l_1283},{(void*)0,&l_1283,&l_1283,&l_1283}}};
                int i, j, k;
                (*l_1406) = &l_1398;
                if (((**l_1406) && (&g_162 == ((*l_1409) = (l_1408 = &g_162)))))
                { 
                    l_1326 &= p_16;
                }
                else
                { 
                    const union U1 **l_1411[6][2][3] = {{{&l_1410,&l_1410,&l_1410},{&l_1410,&l_1410,&l_1410}},{{&l_1410,&l_1410,&l_1410},{&l_1410,&l_1410,&l_1410}},{{&l_1410,&l_1410,&l_1410},{&l_1410,&l_1410,&l_1410}},{{&l_1410,&l_1410,&l_1410},{&l_1410,&l_1410,&l_1410}},{{&l_1410,&l_1410,&l_1410},{&l_1410,&l_1410,&l_1410}},{{&l_1410,&l_1410,&l_1410},{&l_1410,&l_1410,&l_1410}}};
                    int64_t ****l_1427 = &l_1424;
                    int32_t l_1430 = 0x0A2F2CBCL;
                    int i, j, k;
                    l_1412[0][3] = l_1410;
                    (*l_1137) ^= (g_193 || (((((*l_1285) &= (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u(((((!(safe_sub_func_uint32_t_u_u(l_1402, (**l_1406)))) , (safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((((*l_1427) = l_1424) != (void*)0) < (safe_mod_func_int8_t_s_s((l_1430 , 1L), p_16))), (***l_1409))), g_127[3]))) | 0x8389BC8F987CE25CLL) , 6UL))) > 7L), 0x61E3L))) , p_16) >= p_16) < 0xF4L));
                    (*l_1137) = (safe_add_func_int8_t_s_s(((*l_1137) || ((**l_1406) = ((safe_lshift_func_uint16_t_u_u(65535UL, 0)) <= ((safe_rshift_func_uint8_t_u_u(((+(g_1060 == 0L)) , (((p_16 ^ ((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((l_1430 >= l_1286) < 0UL) , 0xC17CE10FL), p_16)), 0x3D375D293D5CA482LL)) & 65535UL)) , l_1444) != (void*)0)), l_1290.f1)) ^ g_62.f1)))), l_1445[0]));
                }
                if ((&l_1425 != l_1446))
                { 
                    int32_t *l_1449 = &l_1326;
                    int32_t *l_1450 = &g_347.f0;
                    int32_t *l_1451 = &g_3[0];
                    int32_t *l_1452 = &g_3[0];
                    int32_t *l_1453 = &g_1214.f4.f0;
                    int32_t *l_1454[5] = {&l_1088,&l_1088,&l_1088,&l_1088,&l_1088};
                    uint16_t l_1455 = 65535UL;
                    int i;
                    l_1455++;
                }
                else
                { 
                    int32_t *l_1458[3][1];
                    uint64_t *l_1459 = &l_17;
                    uint64_t ** const **l_1464 = (void*)0;
                    uint64_t ** const **l_1465 = &g_1461;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1458[i][j] = &g_157.f2;
                    }
                    l_1458[2][0] = (void*)0;
                    (*g_162) = ((*l_1137) ^= (((((*l_1283) = l_1459) != (void*)0) , l_1460[1][1][0]) == ((*l_1465) = g_1461)));
                    (***l_1409) |= l_1445[0];
                    if (l_1398)
                        goto lbl_1466;
                }
                return p_16;
            }
            for (g_221 = 0; (g_221 > 21); g_221 = safe_add_func_int64_t_s_s(g_221, 2))
            { 
                int32_t *l_1469 = (void*)0;
                int32_t *l_1470 = &l_1100[2];
                int32_t *l_1471[7][7] = {{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{(void*)0,&l_1242.f0,(void*)0,&l_1088,&l_1088,(void*)0,&l_1242.f0},{&g_3[0],&l_1100[4],&g_3[0],&g_3[0],&l_1100[4],&g_3[0],&l_1100[4]},{(void*)0,&l_1088,&l_1088,(void*)0,&l_1242.f0,(void*)0,&l_1088},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&l_1326,&l_1088,(void*)0,&l_1088,&l_1326,&l_1326,&l_1088},{(void*)0,&l_1100[4],(void*)0,&g_3[0],&g_3[0],(void*)0,&l_1100[4]}};
                int i, j;
                ++l_1483;
            }
            (*l_1486) = &l_1482[0];
            for (g_581 = 0; (g_581 > 14); g_581 = safe_add_func_uint8_t_u_u(g_581, 1))
            { 
                int32_t *l_1489[5][1][2] = {{{(void*)0,&l_1475}},{{(void*)0,&l_1475}},{{(void*)0,&l_1475}},{{(void*)0,&l_1475}},{{(void*)0,&l_1475}}};
                int i, j, k;
                l_1489[3][0][1] = &g_3[0];
            }
            (**l_1486) = (safe_sub_func_uint16_t_u_u((((void*)0 == l_1492) || (l_1493 != l_1493)), ((*g_125) &= ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_1216[1][0].f0, ((safe_sub_func_uint64_t_u_u((((**l_1486) <= p_16) > 0x6740L), p_16)) ^ g_682[0]))), 65535UL)) && (**l_1486)))));
        }
        l_1477 &= 0x8D413D04L;
        (*l_1500) = l_1477;
    }
    else
    { 
        uint32_t l_1513 = 0xE9A7739EL;
        int32_t l_1523 = 0L;
        int32_t l_1525 = 0xE4FA7080L;
        int32_t l_1527 = 0x8587F279L;
        int32_t l_1530 = (-1L);
        uint8_t *l_1576 = (void*)0;
        uint8_t *l_1577 = &g_1214.f0;
        for (g_157.f0 = 0; (g_157.f0 <= 3); g_157.f0 += 1)
        { 
            uint8_t *l_1505 = &g_444[1][2];
            int32_t l_1526 = 5L;
            int32_t l_1528 = 3L;
            int32_t l_1529 = 0L;
            struct S0 *l_1547 = &l_1291[5][4][1];
            uint16_t l_1551 = 0x6550L;
            int64_t *l_1567 = &g_886[3][1];
            int64_t * const *l_1566 = &l_1567;
            int64_t * const **l_1565 = &l_1566;
            int i;
            if (g_127[g_157.f0])
                break;
            if ((g_3[0] = (((safe_add_func_int16_t_s_s((*l_1137), (p_16 || (0xA0B10367CD067AEBLL ^ (safe_div_func_uint8_t_u_u(((*l_1505) = p_16), (((~(safe_mod_func_int8_t_s_s(3L, (safe_div_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(g_3[0], p_16)) || 4UL), l_1513))))) || 0x7BBFL) | p_16))))))) >= (*g_125)) , 0x40A2F674L)))
            { 
                for (g_264 = 3; (g_264 >= 0); g_264 -= 1)
                { 
                    int32_t **l_1514 = &l_1137;
                    struct S0 *l_1515 = &l_1242;
                    (*l_1514) = &g_3[0];
                    l_1515 = l_1515;
                }
            }
            else
            { 
                uint16_t l_1531 = 0xB6C3L;
                int32_t l_1556 = 0x1D099484L;
                int32_t l_1563 = 0x1693A25BL;
                if (((safe_div_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((((((*l_1091) |= ((((p_16 >= (safe_rshift_func_int8_t_s_s(0xF4L, g_127[g_157.f0]))) ^ (l_1513 > (-1L))) , (l_1513 <= (((p_16 ^ 4294967287UL) ^ 0xE3D05F91B4628224LL) == g_347.f0))) , (*g_125))) < l_1513) | l_1523) , p_16))) <= 0L), (*l_1137))) != g_98), (*l_1137))) , g_422))
                { 
                    return g_127[3];
                }
                else
                { 
                    int32_t *l_1524[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1524[i][j] = &g_1216[1][0].f4.f0;
                    }
                    ++l_1531;
                }
                for (l_1528 = 3; (l_1528 >= 0); l_1528 -= 1)
                { 
                    int32_t l_1534 = (-6L);
                    return l_1534;
                }
                for (g_581 = 3; (g_581 >= 0); g_581 -= 1)
                { 
                    union U1 *l_1535 = &g_1216[1][0];
                    struct S0 **l_1548 = &l_1547;
                    int32_t l_1564 = 5L;
                    (*g_1262) = l_1535;
                    (*l_1137) &= (!((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((+(safe_div_func_int16_t_s_s(((*l_1285) = ((safe_rshift_func_uint16_t_u_s((l_1546[1][3] , (((*l_1548) = l_1547) == ((safe_div_func_int32_t_s_s((((l_1551 != (safe_mod_func_uint16_t_u_u((--(*l_1091)), ((((((++(**g_1462)) <= (safe_mod_func_int32_t_s_s(((((*l_1505) = (!(p_16 <= (+l_1525)))) & ((((*g_125) ^= ((0x83L ^ g_157.f0) > (-6L))) > g_581) != l_1563)) & 0x910C35A43507A67FLL), 4294967294UL))) <= p_16) , 1UL) ^ l_1564) & p_16)))) != 1L) >= 0xC8D4242C7F1875B6LL), p_16)) , (void*)0))), g_719[4][0])) ^ g_396)), 0x05E9L))), 0x3CC172E9L)), 254UL)) , 0UL));
                }
            }
            (*l_1565) = (void*)0;
        }
        (*l_1137) = ((g_347.f1 , &g_162) == ((((*l_1577) ^= (((safe_rshift_func_int16_t_s_u((l_1525 < ((*l_1285) = g_1393)), (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(p_16, g_3[0])) >= (0x6AB9FCB4L >= (*l_1137))), 0xF9F6L)), l_1525)))) == (*l_1137)) || 18446744073709551615UL)) & (-10L)) , &g_162));
    }
    for (g_79 = 0; (g_79 <= 1); g_79 += 1)
    { 
        int32_t *l_1578[4];
        int32_t l_1579 = 0xC6DFBB96L;
        int i;
        for (i = 0; i < 4; i++)
            l_1578[i] = (void*)0;
        l_1580++;
        l_1100[5] |= (safe_add_func_int32_t_s_s(((void*)0 == &g_266), (0x9997A5D8136606B0LL >= (-1L))));
        for (g_1393 = 0; (g_1393 <= 1); g_1393 += 1)
        { 
            uint8_t *l_1602 = &g_444[1][1];
            int32_t l_1606 = 8L;
            uint32_t l_1607[5][6][4] = {{{1UL,0xAFA97BA8L,0UL,4294967290UL},{8UL,1UL,7UL,0xAFA97BA8L},{0x39C36E4CL,1UL,7UL,4294967287UL},{8UL,0UL,0UL,8UL},{1UL,0x39C36E4CL,0x68701146L,0xD467FE05L},{0x68701146L,0xD467FE05L,0xAFA97BA8L,1UL}},{{0x5C66B1AEL,0xD655144DL,0x7F1A45CDL,1UL},{4294967290UL,0xD467FE05L,0x5C66B1AEL,0xD467FE05L},{6UL,0x39C36E4CL,0UL,8UL},{0xAFA97BA8L,0UL,4294967290UL,4294967287UL},{0xD655144DL,1UL,4294967287UL,0xAFA97BA8L},{0xD655144DL,1UL,4294967290UL,4294967290UL}},{{0xAFA97BA8L,0xAFA97BA8L,0UL,7UL},{6UL,0UL,0x5C66B1AEL,0x39C36E4CL},{4294967290UL,0x68701146L,0x7F1A45CDL,0x5C66B1AEL},{0x5C66B1AEL,0x68701146L,0xAFA97BA8L,0x39C36E4CL},{0x68701146L,0UL,5UL,1UL},{0UL,0x5C66B1AEL,0x7F1A45CDL,0x68701146L}},{{6UL,0UL,1UL,0x5C66B1AEL},{8UL,0xD655144DL,1UL,4294967290UL},{6UL,0x7F1A45CDL,0x7F1A45CDL,6UL},{0UL,8UL,5UL,0xAFA97BA8L},{5UL,0xAFA97BA8L,0x5C66B1AEL,0xD655144DL},{0x39C36E4CL,0xD467FE05L,4294967287UL,0xD655144DL}},{{0x68701146L,0xAFA97BA8L,0x39C36E4CL,0xAFA97BA8L},{7UL,8UL,1UL,6UL},{0x5C66B1AEL,0x7F1A45CDL,0x68701146L,4294967290UL},{0xD467FE05L,0xD655144DL,4294967290UL,0x5C66B1AEL},{0xD467FE05L,0UL,0x68701146L,0x68701146L},{0x5C66B1AEL,0x5C66B1AEL,1UL,1UL}}};
            int32_t l_1608 = 0x7A97E295L;
            int i, j, k;
            l_1608 |= (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(g_886[(g_79 + 2)][(g_79 + 1)], 1)) == (safe_add_func_int16_t_s_s((+(safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((((((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_708[(g_1393 + 2)][g_79] >= (-1L)), ((***g_1461) & (((g_886[(g_79 + 2)][(g_79 + 1)] , ((((((*l_1602)--) & (+g_886[(g_79 + 2)][(g_79 + 1)])) <= (l_1606 &= p_16)) & p_16) <= p_16)) , l_1607[1][4][1]) != p_16)))), p_16)) == g_682[1]) , p_16) && 0x88L) || (*g_125)) && p_16), g_295)), p_16))), 0xA69EL))), 65529UL));
        }
    }
    return p_16;
}



static int32_t  func_18(uint64_t  p_19, uint32_t  p_20, int32_t  p_21)
{ 
    int8_t l_22 = (-2L);
    int16_t *l_764[6][5] = {{(void*)0,&g_203,&g_203,(void*)0,&g_203},{(void*)0,&g_203,&g_203,&g_203,&g_203},{&g_203,&g_203,&g_203,&g_266,&g_266},{&g_203,&g_203,&g_203,&g_203,&g_266},{&g_203,(void*)0,&g_266,(void*)0,&g_203},{&g_203,(void*)0,&g_203,&g_203,&g_203}};
    int32_t *l_765 = &g_3[0];
    union U1 *l_848 = &g_157;
    const struct S0 l_864 = {0x1489C79FL,0x6862L};
    int32_t ** const l_871 = &g_467;
    int32_t **l_896 = &l_765;
    int32_t ***l_895 = &l_896;
    uint64_t l_936 = 18446744073709551606UL;
    uint8_t *l_939 = &g_708[1][0];
    uint16_t ***l_941 = &g_124;
    union U1 *l_950 = &g_157;
    int32_t l_965 = 0xAC596BCDL;
    int64_t l_967 = (-7L);
    uint16_t l_968 = 65535UL;
    const int8_t l_994 = 0xF4L;
    uint64_t *l_1065 = &g_337[2][0];
    uint64_t ** const l_1064 = &l_1065;
    int64_t *l_1071 = &l_967;
    int64_t **l_1070 = &l_1071;
    int64_t ***l_1072 = &l_1070;
    int i, j;
    if ((((l_22 || func_23((l_22 <= p_20), g_3[0], ((((safe_mul_func_int16_t_s_s((func_31(p_19) , (g_266 = (((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((4294967291UL != 0xA704DF46L), l_22)), l_22)) >= l_22), p_19)) , p_20), p_21)), p_20)) , 0x5CL) | l_22))), p_20)) <= 0x23F9L) >= l_22) , &g_3[0]), g_706, l_765)) , (void*)0) != l_765))
    { 
        uint32_t l_767 = 0x43BBBC4DL;
        int8_t *l_774 = &g_679[0];
        (*l_765) |= (((l_767 == (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_767, 5)), (safe_rshift_func_int8_t_s_u(((*l_774) = (p_21 , p_20)), ((0xC4A66030L <= 4294967295UL) != (safe_lshift_func_uint8_t_u_u(254UL, l_767)))))))) , g_56) != p_19);
    }
    else
    { 
        uint16_t *l_807[3];
        int32_t *l_813[4];
        int64_t l_839 = (-1L);
        struct S0 **l_845 = (void*)0;
        uint64_t *l_883[5][5][7] = {{{(void*)0,&g_337[2][0],(void*)0,&g_337[5][0],&g_337[0][3],(void*)0,&g_396},{(void*)0,(void*)0,&g_396,&g_337[2][0],&g_222,&g_222,(void*)0},{&g_337[5][2],&g_222,&g_337[2][0],&g_396,(void*)0,&g_337[2][0],&g_337[2][0]},{&g_337[5][2],&g_337[2][0],(void*)0,(void*)0,&g_337[2][0],&g_337[5][2],&g_396},{(void*)0,&g_396,&g_337[2][0],&g_396,(void*)0,&g_396,&g_396}},{{(void*)0,&g_222,&g_337[5][3],&g_337[2][0],&g_396,(void*)0,&g_396},{&g_337[2][0],&g_396,&g_337[2][0],&g_337[3][2],&g_337[5][0],(void*)0,&g_396},{&g_222,&g_337[2][0],&g_337[0][3],&g_337[2][0],&g_396,&g_337[2][0],&g_337[2][0]},{(void*)0,&g_222,&g_337[0][3],&g_337[2][0],&g_337[2][0],&g_337[0][3],&g_222},{&g_222,(void*)0,&g_337[2][0],&g_337[2][0],&g_222,&g_337[3][2],(void*)0}},{{&g_337[2][0],&g_337[2][0],&g_337[5][3],&g_337[2][0],&g_396,&g_222,(void*)0},{(void*)0,&g_337[2][0],&g_337[2][0],&g_337[2][0],&g_396,&g_222,&g_337[2][0]},{&g_337[0][3],(void*)0,(void*)0,&g_337[2][0],&g_337[2][0],&g_337[5][0],(void*)0},{(void*)0,&g_396,&g_337[2][0],&g_337[2][0],&g_337[2][0],&g_337[2][0],&g_337[2][0]},{&g_396,&g_396,&g_396,&g_337[3][2],&g_396,&g_222,&g_337[2][0]}},{{&g_337[2][0],&g_337[2][0],&g_337[2][0],&g_337[2][0],(void*)0,&g_337[2][0],&g_337[3][2]},{&g_337[2][0],&g_396,(void*)0,(void*)0,&g_222,(void*)0,(void*)0},{&g_337[2][0],&g_337[5][2],&g_337[0][3],&g_222,&g_337[2][0],&g_222,&g_396},{(void*)0,&g_337[2][0],(void*)0,(void*)0,&g_337[5][3],&g_396,&g_396},{&g_396,&g_222,&g_396,&g_222,&g_396,&g_222,(void*)0}},{{&g_337[2][0],(void*)0,&g_337[2][0],&g_396,(void*)0,&g_337[5][0],&g_337[3][2]},{(void*)0,&g_396,&g_396,&g_337[2][0],&g_396,&g_337[2][0],&g_337[2][0]},{&g_337[2][0],&g_396,&g_337[2][0],&g_222,&g_337[2][0],&g_337[5][2],&g_222},{&g_396,(void*)0,&g_337[2][0],&g_222,&g_337[2][0],&g_222,&g_396},{(void*)0,(void*)0,&g_337[5][0],&g_337[2][0],&g_337[5][0],(void*)0,(void*)0}}};
        uint64_t **l_882 = &l_883[2][4][1];
        union U1 *l_947 = &g_157;
        const uint8_t *l_963 = &g_708[2][0];
        const uint8_t **l_962 = &l_963;
        const uint8_t ***l_961 = &l_962;
        int32_t ***l_1005 = (void*)0;
        uint8_t *l_1068 = &g_444[1][1];
        uint8_t *l_1069[1];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_807[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_813[i] = &g_347.f0;
        for (i = 0; i < 1; i++)
            l_1069[i] = (void*)0;
        if (((*l_765) = p_21))
        { 
            int32_t * const *l_790 = &g_467;
            int32_t **l_791 = &g_467;
            uint32_t *l_793 = (void*)0;
            uint32_t *l_794[6][4] = {{&g_127[3],&g_719[1][0],&g_719[4][0],&g_719[4][0]},{(void*)0,(void*)0,&g_127[3],&g_719[4][0]},{&g_127[2],&g_719[1][0],&g_127[2],&g_127[3]},{&g_127[2],&g_127[3],&g_127[3],&g_127[2]},{(void*)0,&g_127[3],&g_719[4][0],&g_127[3]},{&g_127[3],&g_719[1][0],&g_719[4][0],&g_719[4][0]}};
            uint16_t ***l_797 = (void*)0;
            const int32_t l_811 = 0L;
            uint8_t *l_837 = &g_444[1][1];
            int32_t l_850[1][4][6] = {{{0x4ED9976CL,6L,6L,0x4ED9976CL,6L,6L},{0x4ED9976CL,6L,6L,0x4ED9976CL,6L,6L},{0x4ED9976CL,6L,6L,0x4ED9976CL,6L,6L},{0x4ED9976CL,6L,6L,0x4ED9976CL,6L,6L}}};
            uint32_t l_853 = 18446744073709551606UL;
            int32_t l_879 = 0x3064F551L;
            uint16_t l_880[3];
            uint32_t l_898 = 4UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_880[i] = 65529UL;
            if (((((safe_div_func_uint32_t_u_u((0x0A24L && p_20), (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((g_719[5][0] &= (((safe_lshift_func_int16_t_s_s((+p_20), 3)) , ((safe_add_func_uint32_t_u_u(g_179, (((safe_mul_func_uint8_t_u_u(((*l_765) | ((l_790 != (g_792 = (g_466 = l_791))) && (*l_765))), p_21)) <= (*g_125)) ^ (*l_765)))) >= 0UL)) == g_501)), g_581)) > p_19), 9)))) < g_337[3][1]) , p_19) >= g_98))
            { 
                uint32_t l_809 = 0x14B8399AL;
                (*g_162) = (g_266 != 0xC9L);
                for (g_264 = 2; (g_264 >= 0); g_264 -= 1)
                { 
                    int64_t *l_806 = &g_717;
                    uint64_t *l_808[4];
                    int32_t *l_810 = &g_347.f0;
                    int32_t **l_812[4][1][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_808[i] = &g_222;
                    (*l_810) ^= ((*l_765) >= (safe_mod_func_uint64_t_u_u((g_179 = ((&g_124 == l_797) < (safe_lshift_func_int8_t_s_u(((((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((((p_19 , g_706) , ((*l_806) = (-1L))) == ((void*)0 == l_807[2])), 0x16L)), p_19)) , (void*)0) == &g_467) & g_503), p_20)))), l_809)));
                    (*l_810) ^= l_811;
                    (*g_162) = (g_179 < g_679[0]);
                    l_813[0] = &g_3[0];
                }
                return l_811;
            }
            else
            { 
                int32_t **l_818 = &l_813[0];
                int32_t ***l_817 = &l_818;
                int32_t l_834[4] = {8L,8L,8L,8L};
                uint8_t **l_838 = &g_688[1];
                union U1 *l_858 = &g_157;
                int32_t l_874[6] = {1L,1L,1L,1L,1L,1L};
                uint16_t *l_897[1][3][5] = {{{&g_146[3][2][2],&g_146[3][2][2],&g_146[3][2][2],&g_146[3][2][2],&g_146[3][2][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_146[3][2][2],&g_146[3][2][2],&g_146[3][2][2],&g_146[3][2][2],&g_146[3][2][2]}}};
                int i, j, k;
                l_834[3] ^= (((safe_mul_func_uint8_t_u_u((((!(((*l_817) = &g_162) == ((*g_346) , (void*)0))) >= 4294967287UL) > p_20), 0x61L)) != g_107) & g_444[1][3]);
                if (((safe_lshift_func_int8_t_s_u(((*l_765) | ((*g_125) = (((l_837 = ((*l_838) = l_837)) != (void*)0) > ((g_157 , p_20) == ((g_62.f0 != g_347.f0) | l_839))))), l_811)) , l_811))
                { 
                    union U1 **l_849 = &l_848;
                    int32_t l_851 = 8L;
                    int32_t l_852 = 0x558D3E14L;
                    (**l_818) = (safe_mul_func_int16_t_s_s(((((*l_849) = l_848) == (void*)0) | 0x03L), p_19));
                    ++l_853;
                    (***l_817) = ((safe_add_func_int16_t_s_s((-10L), (&g_719[4][0] != &p_20))) | (*l_765));
                    (**l_817) = (void*)0;
                }
                else
                { 
                    int32_t * const *l_872[2][1][2] = {{{&g_467,&g_467}},{{&g_467,&g_467}}};
                    int32_t l_873[4] = {0x214180F3L,0x214180F3L,0x214180F3L,0x214180F3L};
                    uint64_t *l_881 = &g_179;
                    int i, j, k;
                    l_873[2] &= ((g_266 = g_422) == ((((((l_858 != (void*)0) , (safe_sub_func_int16_t_s_s((~(&g_687[1] == ((safe_rshift_func_int16_t_s_s((l_864 , ((((p_19 && (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((safe_div_func_uint64_t_u_u((p_19 | 255UL), 0x8B63A41344BDE683LL)) > p_19) ^ l_853), 0xCEB78550L)), (-8L)))) || p_19) , l_871) == l_872[1][0][0])), p_21)) , &l_838))), p_20))) == g_188) , p_19) & (*l_765)) ^ g_679[0]));
                    (*l_765) = l_874[2];
                    (*l_818) = &l_873[1];
                    (***l_817) ^= (((safe_add_func_uint64_t_u_u(((*l_881) &= (((&g_124 == &g_124) & p_19) & ((safe_mul_func_int16_t_s_s(g_682[1], l_850[0][0][4])) >= (l_880[0] = (l_879 = (g_266 ^= g_222)))))), (l_882 == (void*)0))) >= (*l_765)) , 0xF63947FDL);
                    (*g_162) ^= (safe_rshift_func_int8_t_s_s(g_886[3][1], (*l_765)));
                }
                l_898 ^= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((*g_125) = (safe_mul_func_uint8_t_u_u(((*l_765) || (safe_sub_func_int16_t_s_s((-1L), (l_895 != (void*)0)))), (((l_764[1][3] == l_897[0][0][0]) || ((*g_125) ^ p_19)) & (*l_765))))), 2)), p_21));
            }
        }
        else
        { 
            uint8_t l_911[1];
            int32_t l_912 = 0x14B02EE6L;
            int32_t l_914[1];
            uint8_t ***l_924 = &g_687[1];
            uint32_t l_976 = 0x87DF0AF3L;
            union U1 l_980 = {0x23L};
            uint16_t ***l_996 = (void*)0;
            int8_t *l_1008 = &g_679[0];
            int32_t ***l_1009 = &l_896;
            int i;
            for (i = 0; i < 1; i++)
                l_911[i] = 5UL;
            for (i = 0; i < 1; i++)
                l_914[i] = 0x1AB61887L;
            if (g_157.f0)
            { 
                const struct S0 ****l_905 = &g_903;
                int64_t *l_910 = &g_886[5][1];
                uint32_t l_913[7];
                int32_t l_915 = 0xE9BCD4D1L;
                union U1 l_951[4][6][7] = {{{{0x67L},{250UL},{1UL},{250UL},{0x67L},{0x32L},{0x68L}},{{0x91L},{255UL},{2UL},{0x32L},{255UL},{253UL},{0xCEL}},{{0UL},{0UL},{0x02L},{0UL},{0UL},{0x1BL},{0xC4L}},{{0x91L},{0x32L},{0x4AL},{2UL},{0UL},{0x9CL},{0x68L}},{{0x9CL},{9UL},{0x91L},{0UL},{2UL},{253UL},{0xBDL}},{{250UL},{0x3EL},{0x10L},{0x65L},{255UL},{0UL},{0x67L}}},{{{0UL},{0xCCL},{0x52L},{0x91L},{250UL},{253UL},{0UL}},{{0x4DL},{250UL},{0UL},{3UL},{0x4AL},{253UL},{0xCCL}},{{0xCCL},{0xBDL},{0x67L},{0x9CL},{251UL},{0UL},{1UL}},{{0xF5L},{0x07L},{1UL},{0x5BL},{0x69L},{253UL},{0xEDL}},{{6UL},{0x69L},{0x9CL},{253UL},{253UL},{0x9CL},{0x69L}},{{9UL},{0x36L},{0xC9L},{0xBDL},{0xCCL},{1UL},{0UL}}},{{{0x67L},{250UL},{0xBDL},{251UL},{0UL},{0x70L},{0x32L}},{{255UL},{253UL},{0x02L},{0xBDL},{0xF7L},{0x85L},{0UL}},{{253UL},{0x32L},{0x3EL},{253UL},{0x36L},{255UL},{0x02L}},{{0UL},{1UL},{0x4CL},{0x5BL},{251UL},{6UL},{0x30L}},{{1UL},{1UL},{0xCEL},{0x9CL},{0x65L},{250UL},{251UL}},{{0x30L},{253UL},{0UL},{3UL},{0xC4L},{0x08L},{0x3EL}}},{{{0x65L},{253UL},{253UL},{0x91L},{0x7BL},{1UL},{255UL}},{{0x5BL},{1UL},{0xCCL},{0x65L},{1UL},{250UL},{0xECL}},{{0xC9L},{1UL},{250UL},{0UL},{0x85L},{0x69L},{0x85L}},{{0UL},{0x32L},{0x32L},{0UL},{0x4CL},{0xCEL},{0xCCL}},{{0x1BL},{253UL},{0x85L},{0xC4L},{9UL},{3UL},{0xE6L}},{{1UL},{250UL},{3UL},{0xCCL},{253UL},{253UL},{0xCCL}}}};
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_913[i] = 0x8A97961AL;
                if ((l_914[0] ^= ((safe_mul_func_int16_t_s_s((p_20 , g_347.f0), (((p_19 ^= g_3[0]) == ((((g_337[2][0] = (safe_lshift_func_int16_t_s_s((&l_845 == ((*l_905) = g_903)), (safe_mod_func_int16_t_s_s((((0x2A6BL == (l_911[0] = (safe_add_func_uint16_t_u_u(((void*)0 == l_910), (*g_125))))) | p_21) == l_912), g_679[0]))))) , 0x0A58L) == (*l_765)) | l_913[2])) || g_264))) & (***l_895))))
                { 
                    uint64_t l_916[6][6][6] = {{{0xBA90ACD294480113LL,18446744073709551615UL,0x1EFFFB8DEBD81D15LL,18446744073709551606UL,0x0FFDB2219BB714F8LL,0x3D4E66103D7A4A6DLL},{18446744073709551615UL,0UL,0x6F54FEC5129C5801LL,0x904B542BCD448B98LL,18446744073709551606UL,0UL},{0xEE7320D0F45AA949LL,0xACBE97B356426BB7LL,18446744073709551606UL,0xACBE97B356426BB7LL,0xEE7320D0F45AA949LL,0x7FFD076AC0AB3F64LL},{0x04E114F6B46A59ACLL,0x516B1AA998FC5C89LL,0xA3D1DB68B8E3E15ALL,0x892ABF844D044101LL,0x904B542BCD448B98LL,0x185998B0F9025BBCLL},{18446744073709551615UL,0UL,0x43E0B60085E999D3LL,0x516B1AA998FC5C89LL,0x48A6C35032A73144LL,0x185998B0F9025BBCLL},{7UL,0x1EFFFB8DEBD81D15LL,0xA3D1DB68B8E3E15ALL,0x47800640DFD14874LL,0UL,0x7FFD076AC0AB3F64LL}},{{0x48A6C35032A73144LL,1UL,18446744073709551606UL,0x3D4E66103D7A4A6DLL,0x1EFFFB8DEBD81D15LL,0UL},{18446744073709551610UL,0x04E114F6B46A59ACLL,0x6F54FEC5129C5801LL,0xBA90ACD294480113LL,18446744073709551615UL,0x3D4E66103D7A4A6DLL},{0UL,0x6D2F951638B59585LL,1UL,0x7FFD076AC0AB3F64LL,0x806C713C962E1CCELL,0x806C713C962E1CCELL},{1UL,0x1EFFFB8DEBD81D15LL,0x1EFFFB8DEBD81D15LL,1UL,0x99EC717A66B54152LL,0x516B1AA998FC5C89LL},{0x892ABF844D044101LL,0xBA90ACD294480113LL,0xEE7320D0F45AA949LL,0x5BEF4098D3B58977LL,0x350C211522551303LL,18446744073709551610UL},{0x1EFFFB8DEBD81D15LL,0x5C17CE26A64633ABLL,0x43964B191CC9C650LL,0x47800640DFD14874LL,0x350C211522551303LL,0UL}},{{0x516B1AA998FC5C89LL,0xBA90ACD294480113LL,0x99056F453E879E32LL,0x743C36174A9E7323LL,0x99EC717A66B54152LL,18446744073709551606UL},{1UL,0x1EFFFB8DEBD81D15LL,0x892ABF844D044101LL,0x04E114F6B46A59ACLL,0x806C713C962E1CCELL,7UL},{0x0FFDB2219BB714F8LL,0x6D2F951638B59585LL,0x6F54FEC5129C5801LL,0UL,0x43964B191CC9C650LL,0xA3D1DB68B8E3E15ALL},{0x4B705E7C5DC70500LL,0x350C211522551303LL,0x99EC717A66B54152LL,0x185998B0F9025BBCLL,1UL,0x185998B0F9025BBCLL},{0x5C17CE26A64633ABLL,0x04E114F6B46A59ACLL,0x5C17CE26A64633ABLL,18446744073709551615UL,0x4B705E7C5DC70500LL,0x743C36174A9E7323LL},{0x6F54FEC5129C5801LL,1UL,0x04E114F6B46A59ACLL,0x4B705E7C5DC70500LL,0UL,0x5BEF4098D3B58977LL}},{{18446744073709551615UL,0xACBE97B356426BB7LL,0x185998B0F9025BBCLL,0x4B705E7C5DC70500LL,0x10EC29FC7257DC69LL,18446744073709551615UL},{0x6F54FEC5129C5801LL,0x3D4E66103D7A4A6DLL,0x904B542BCD448B98LL,18446744073709551615UL,0x47800640DFD14874LL,18446744073709551615UL},{0x5C17CE26A64633ABLL,0x904B542BCD448B98LL,0xA3D1DB68B8E3E15ALL,0x185998B0F9025BBCLL,7UL,0x43964B191CC9C650LL},{0x4B705E7C5DC70500LL,0x99EC717A66B54152LL,0x806C713C962E1CCELL,0UL,18446744073709551610UL,1UL},{0x0FFDB2219BB714F8LL,18446744073709551607UL,0x350C211522551303LL,0x04E114F6B46A59ACLL,0x04E114F6B46A59ACLL,0x350C211522551303LL},{1UL,1UL,0x0FFDB2219BB714F8LL,0x743C36174A9E7323LL,0xACBE97B356426BB7LL,0x7FFD076AC0AB3F64LL}},{{0x516B1AA998FC5C89LL,0x4B705E7C5DC70500LL,7UL,0x47800640DFD14874LL,1UL,0x0FFDB2219BB714F8LL},{0x1EFFFB8DEBD81D15LL,0x516B1AA998FC5C89LL,7UL,0x5BEF4098D3B58977LL,1UL,0x7FFD076AC0AB3F64LL},{0x892ABF844D044101LL,0x5BEF4098D3B58977LL,0x0FFDB2219BB714F8LL,1UL,7UL,0x350C211522551303LL},{1UL,7UL,0x350C211522551303LL,0x7FFD076AC0AB3F64LL,0xBA90ACD294480113LL,1UL},{0UL,0x99056F453E879E32LL,0x806C713C962E1CCELL,18446744073709551606UL,0x743C36174A9E7323LL,0x43964B191CC9C650LL},{0x743C36174A9E7323LL,18446744073709551615UL,0xA3D1DB68B8E3E15ALL,0UL,0xA3D1DB68B8E3E15ALL,18446744073709551615UL}},{{0UL,18446744073709551606UL,0x904B542BCD448B98LL,0x6F54FEC5129C5801LL,0UL,18446744073709551615UL},{0xBA90ACD294480113LL,0x10EC29FC7257DC69LL,0x185998B0F9025BBCLL,0x3D4E66103D7A4A6DLL,0x48A6C35032A73144LL,0x5BEF4098D3B58977LL},{0x43964B191CC9C650LL,0x10EC29FC7257DC69LL,0x04E114F6B46A59ACLL,7UL,0UL,0x743C36174A9E7323LL},{0x350C211522551303LL,18446744073709551606UL,0x5C17CE26A64633ABLL,0x904B542BCD448B98LL,0xA3D1DB68B8E3E15ALL,0x185998B0F9025BBCLL},{0x47800640DFD14874LL,18446744073709551615UL,0x99EC717A66B54152LL,0x10EC29FC7257DC69LL,0x743C36174A9E7323LL,0xA3D1DB68B8E3E15ALL},{18446744073709551607UL,0x99056F453E879E32LL,0x6F54FEC5129C5801LL,7UL,0xBA90ACD294480113LL,7UL}}};
                    int i, j, k;
                    ++l_916[3][0][4];
                    return l_913[4];
                }
                else
                { 
                    int32_t *l_919 = &l_912;
                    uint32_t *l_935[1];
                    union U1 *l_946[6][6][1] = {{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}},{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}},{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}},{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}},{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}},{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}}};
                    union U1 **l_948 = (void*)0;
                    union U1 **l_949 = &l_947;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_935[i] = &g_719[5][0];
                    (**l_895) = l_919;
                    l_936 ^= ((**l_896) = (p_19 <= (l_915 = (((((((safe_mul_func_int8_t_s_s(((((void*)0 == l_924) , p_20) | (safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((g_719[1][0] |= ((safe_div_func_int32_t_s_s(g_222, (safe_add_func_int64_t_s_s(0xE1F96057AEAC9D8ELL, (((p_19 | g_3[0]) != p_21) & p_19))))) && l_913[6])) < p_20), 1UL)), 0x13B3546C2FFE972CLL)), 1L))), 0x94L)) , (*l_919)) < p_19) == p_19) || 65534UL) , (*g_125)) ^ 0xD6D6L))));
lbl_952:
                    (**l_895) = &g_3[0];
                    (*l_919) = l_951[0][5][3].f1;
                    if (l_864.f1)
                        goto lbl_952;
                }
                for (l_839 = 0; (l_839 != (-2)); l_839--)
                { 
                    union U1 *l_955[2][1];
                    int32_t **l_964 = &l_813[0];
                    int32_t l_966[4];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_955[i][j] = &l_951[0][2][3];
                    }
                    for (i = 0; i < 4; i++)
                        l_966[i] = 1L;
                    (*l_964) = ((*l_896) = l_813[3]);
                    --l_968;
                    if (p_19)
                        continue;
                }
                for (g_56 = (-14); (g_56 != 13); g_56++)
                { 
                    int8_t l_977 = 1L;
                    l_976 = (safe_mul_func_int8_t_s_s(g_146[3][2][2], (~((*l_939) ^= 246UL))));
                    l_977 = l_914[0];
                }
                (**l_896) |= p_21;
            }
            else
            { 
                int8_t *l_981 = &g_679[1];
                int32_t l_991 = 0x357A7235L;
                int32_t *l_1032 = (void*)0;
                if ((safe_rshift_func_uint16_t_u_u(((((p_21 == (((*l_981) = (l_980 , g_719[0][0])) || (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(g_717, (safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((!((*l_981) &= l_991)), (((((l_980.f0 == (safe_sub_func_int32_t_s_s(p_20, l_991))) ^ g_127[3]) != l_991) != p_21) , 6UL))) , p_20), g_221)))), 0)))) && l_994) >= p_20) == (**l_896)), 2)))
                { 
                    uint16_t ****l_995[1];
                    const int32_t l_1014 = 0x26A9064FL;
                    int16_t *l_1015 = &g_203;
                    uint32_t *l_1024 = &g_127[2];
                    struct S0 l_1031 = {0L,0xDADFL};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_995[i] = &l_941;
                    (**l_896) |= (((-1L) || ((l_996 = &g_124) != ((p_20 == (safe_lshift_func_uint8_t_u_s(p_21, ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u(((l_1005 != (((safe_sub_func_uint64_t_u_u(((l_1008 != &l_994) <= (-1L)), p_20)) , 0x274913396C6C66B7LL) , l_1009)) , g_719[4][0]), g_886[5][0])), l_991)), p_20)) != 4L)))) , (void*)0))) , 0x28412F8AL);
                    l_965 |= (safe_rshift_func_int16_t_s_u((p_21 >= (safe_add_func_uint16_t_u_u((l_1014 && 65535UL), ((l_1015 == (void*)0) <= (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(248UL, ((***l_1009) > 2L))), 4294967295UL)))))), (*l_765)));
                    l_965 = ((***l_1009) = (safe_mul_func_uint8_t_u_u((((*g_792) = (*g_466)) == ((((*l_1024) = (safe_mod_func_int8_t_s_s(p_21, ((*l_939) &= 0x09L)))) & (((g_337[5][3]--) , (l_1031.f0 = ((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((p_21 | ((*g_903) == (l_1031 , l_845))), 0x0A1C4E4DED74134ELL)), g_706)) < g_266))) <= p_21)) , l_1032)), (-1L))));
                    (***l_1009) &= (safe_mul_func_uint8_t_u_u((&g_467 == (g_792 = &g_467)), ((((-1L) & (((0xD1E46260L | l_991) , l_1031.f0) >= ((p_19 | g_679[0]) && 4294967288UL))) | 0UL) <= g_188)));
                }
                else
                { 
                    uint32_t *l_1045 = &g_127[3];
                    int32_t l_1050[1][5][3] = {{{(-6L),1L,(-6L)},{(-1L),(-1L),(-1L)},{(-6L),1L,(-6L)},{(-1L),(-1L),(-1L)},{(-6L),1L,(-6L)}}};
                    int i, j, k;
                    g_62.f0 = (+(p_21 ^ (safe_rshift_func_uint16_t_u_s((l_991 &= ((**l_896) = ((***l_1009) != (safe_lshift_func_uint16_t_u_s(((!(safe_sub_func_uint32_t_u_u(g_295, ((*l_1045) = ((void*)0 == l_1032))))) <= ((0x553FL == ((safe_mod_func_uint32_t_u_u(((g_179 = (safe_lshift_func_int16_t_s_s((-6L), g_337[5][1]))) <= (***l_1009)), (***l_1009))) < (-6L))) <= (*g_125))), 14))))), l_1050[0][1][1]))));
                }
                for (g_157.f1 = (-12); (g_157.f1 != 9); g_157.f1 = safe_add_func_int16_t_s_s(g_157.f1, 1))
                { 
                    const struct S0 **l_1053 = &g_346;
                    int32_t l_1059 = (-8L);
                    int32_t l_1061 = (-1L);
                    (***l_1009) ^= (-1L);
                    (*g_903) = l_1053;
                    (***l_1009) &= (248UL <= 0x81L);
                    l_1061 ^= ((0x3C1FFEB950EEAE67LL | (~((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0x43L, p_21)), 12)) , ((((g_719[4][0] == ((l_1059 , (g_1060 &= ((*l_765) &= (((((*g_346) , l_991) < 1UL) , 0xA882L) ^ p_20)))) > g_146[6][0][2])) > g_679[0]) ^ l_1059) ^ l_1059)))) & p_21);
                }
                return g_188;
            }
        }
        g_62.f0 &= ((p_19 , (*l_962)) == ((*l_947) , (l_1069[0] = ((safe_add_func_int64_t_s_s(((l_1064 != (void*)0) < 0UL), (safe_sub_func_uint32_t_u_u(((**l_896) | p_19), (***l_895))))) , l_1068))));
        return g_62.f1;
    }
    (*l_1072) = l_1070;
    for (g_56 = 0; (g_56 <= 6); g_56 += 1)
    { 
        struct S0 l_1079[4] = {{0L,0x3A92L},{0L,0x3A92L},{0L,0x3A92L},{0L,0x3A92L}};
        int16_t l_1084 = 1L;
        int i;
        if (((safe_rshift_func_uint8_t_u_s(0xE7L, (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((l_1079[1] , l_1079[1].f0), p_20)), 1)))) || g_203))
        { 
            for (g_109 = 0; (g_109 <= 3); g_109 += 1)
            { 
                int i, j;
                (**l_895) = (**l_895);
                (*g_162) = 0x01EF329DL;
                for (g_717 = 0; (g_717 <= 3); g_717 += 1)
                { 
                    int i, j;
                    return g_337[(g_717 + 2)][g_717];
                }
                return g_337[(g_109 + 1)][g_109];
            }
        }
        else
        { 
            uint32_t l_1081 = 18446744073709551608UL;
            int32_t *l_1085 = &g_157.f4.f0;
            int32_t *l_1086 = (void*)0;
            int32_t *l_1087 = &l_965;
            (**l_896) |= p_19;
            for (g_188 = 6; (g_188 >= 0); g_188 -= 1)
            { 
                int32_t *l_1080 = &g_3[0];
                if (p_19)
                    break;
                --l_1081;
                (***l_895) ^= p_20;
            }
            (*l_1087) |= ((***l_895) = l_1084);
        }
        return l_1084;
    }
    return (*l_765);
}



static int16_t  func_23(uint8_t  p_24, uint32_t  p_25, int32_t * const  p_26, uint32_t  p_27, int32_t * p_28)
{ 
    int8_t l_766[5] = {6L,6L,6L,6L,6L};
    int i;
    return l_766[2];
}



static struct S0  func_31(uint64_t  p_32)
{ 
    uint32_t l_43[1][5] = {{0x8BB1B5B3L,0x8BB1B5B3L,0x8BB1B5B3L,0x8BB1B5B3L,0x8BB1B5B3L}};
    uint16_t *l_55 = &g_56;
    union U1 l_380 = {0x87L};
    int32_t **l_695 = &g_162;
    union U1 **l_726[1][2][5] = {{{&g_156,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156}}};
    union U1 *l_727 = (void*)0;
    uint16_t **l_744 = &g_125;
    int16_t l_751 = 0x88BCL;
    uint32_t *l_752 = &g_719[4][0];
    struct S0 l_753 = {1L,0x6B5CL};
    int i, j, k;
    l_727 = func_33(((*l_695) = func_35(func_39(g_3[0], (l_43[0][4] , ((safe_sub_func_uint16_t_u_u(p_32, ((+(safe_add_func_uint16_t_u_u(l_43[0][4], (((p_32 == ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((--(*l_55)), g_3[0])), 5)), 3)) , (safe_lshift_func_int16_t_s_u(g_3[0], 1)))) == l_43[0][4]) , l_43[0][3])))) > 1UL))) < 0x40L)), g_3[0]), p_32, l_380)));
    (*l_695) = (*l_695);
    l_380.f2 = (**l_695);
    return l_753;
}



static union U1 * func_33(int32_t * p_34)
{ 
    int16_t l_707 = 0x0D20L;
    int32_t l_712 = (-1L);
    int32_t l_714 = 0x647DEB1EL;
    int32_t l_716[4][1];
    union U1 *l_725 = &g_157;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_716[i][j] = 0xFB529AABL;
    }
    for (g_503 = 14; (g_503 == 32); g_503 = safe_add_func_uint16_t_u_u(g_503, 7))
    { 
        int32_t l_711 = 0x933338D3L;
        int32_t l_713 = 0L;
        int32_t l_715 = 0x3AA32543L;
        int32_t l_718 = 0x19A3644DL;
        int32_t *l_722[2][4][4] = {{{&l_715,(void*)0,&l_715,&l_715},{&l_715,&l_715,&g_62.f0,(void*)0},{(void*)0,&l_715,&g_62.f0,&l_715},{&l_715,&l_718,&l_715,&g_62.f0}},{{&l_715,&l_718,&l_718,&l_715},{&l_718,&l_715,&l_715,(void*)0},{&l_718,&l_715,&l_718,&l_715},{&l_715,(void*)0,&l_715,&l_715}}};
        int32_t **l_724[5][3] = {{&g_162,&l_722[1][0][1],&g_162},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_162,(void*)0,(void*)0},{(void*)0,&l_722[1][0][1],(void*)0}};
        int i, j, k;
        for (g_107 = 5; (g_107 <= 10); ++g_107)
        { 
            int32_t *l_700 = &g_347.f0;
            int32_t *l_701 = &g_157.f2;
            int32_t *l_702 = &g_62.f0;
            int32_t *l_703 = &g_347.f0;
            int32_t *l_704 = (void*)0;
            int32_t *l_705[1][7];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_705[i][j] = &g_157.f4.f0;
            }
            ++g_708[0][0];
            g_719[4][0]++;
            return &g_157;
        }
        g_62.f0 = (*p_34);
        g_157.f4.f0 = (+l_707);
        g_347.f0 = (*p_34);
        g_162 = p_34;
    }
    return l_725;
}



static int32_t * func_35(union U1 * p_36, const uint8_t  p_37, union U1  p_38)
{ 
    uint32_t l_388 = 0x412633B6L;
    struct S0 ** const l_390 = &g_61[2];
    uint64_t l_394[4][6][7] = {{{0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL},{0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL},{0UL,0UL,18446744073709551614UL,0UL,0UL,18446744073709551614UL,0UL},{0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL},{0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL},{0UL,0UL,18446744073709551614UL,0UL,0UL,18446744073709551614UL,0UL}},{{0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL},{0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL},{0UL,0UL,18446744073709551614UL,0UL,0UL,18446744073709551614UL,0UL},{0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL},{0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL},{0UL,0UL,18446744073709551614UL,0UL,0UL,18446744073709551614UL,0UL}},{{0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL},{18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL},{0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL},{0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL},{18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL},{0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL}},{{0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL},{18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL},{0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL},{0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL},{18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL,0x0856A399DB8F0A8DLL,18446744073709551614UL,18446744073709551614UL},{0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL,0x0856A399DB8F0A8DLL,0UL,0x0856A399DB8F0A8DLL}}};
    uint32_t l_399 = 4294967295UL;
    int32_t l_415 = (-9L);
    int32_t l_421[1];
    uint16_t **l_432 = &g_125;
    uint32_t l_435 = 4294967295UL;
    int8_t l_519 = 0xBDL;
    uint16_t **l_529 = &g_125;
    int16_t *l_554 = &g_203;
    int32_t *l_555 = &g_157.f2;
    int32_t *l_576 = &l_421[0];
    int32_t *l_659 = &g_347.f0;
    int32_t l_670 = 0x27345928L;
    int32_t *l_694[7] = {&l_421[0],&l_421[0],&l_421[0],&l_421[0],&l_421[0],&l_421[0],&l_421[0]};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_421[i] = 0xD33BB9B5L;
lbl_612:
    for (g_157.f1 = 0; (g_157.f1 <= 3); g_157.f1 += 1)
    { 
        int32_t **l_381[2];
        uint16_t ***l_418[7][1];
        union U1 *l_518 = &g_157;
        uint32_t l_520 = 0UL;
        uint16_t l_535 = 0UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_381[i] = &g_162;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_418[i][j] = &g_124;
        }
        g_162 = (void*)0;
        for (g_221 = 2; (g_221 >= 0); g_221 -= 1)
        { 
            struct S0 ***l_391 = (void*)0;
            struct S0 ***l_392[1][3][6] = {{{&g_272,&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272,&g_272}}};
            int8_t *l_393[1][2];
            uint8_t *l_395[2];
            int64_t *l_397[5];
            int32_t l_398 = 4L;
            int32_t l_400 = 0x683ACA40L;
            int16_t *l_419 = (void*)0;
            int16_t *l_420 = (void*)0;
            uint64_t *l_425 = &l_394[0][3][6];
            uint64_t *l_433[3];
            int32_t l_434 = 0xF049ECD3L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_393[i][j] = &g_193;
            }
            for (i = 0; i < 2; i++)
                l_395[i] = (void*)0;
            for (i = 0; i < 5; i++)
                l_397[i] = &g_188;
            for (i = 0; i < 3; i++)
                l_433[i] = &g_179;
            for (g_264 = 3; (g_264 >= 0); g_264 -= 1)
            { 
                int32_t *l_382 = &g_3[0];
                int32_t l_389 = (-3L);
                for (g_203 = 0; (g_203 <= 3); g_203 += 1)
                { 
                    return l_382;
                }
                for (g_295 = 0; (g_295 <= 3); g_295 += 1)
                { 
                    int16_t *l_387[7][1] = {{(void*)0},{&g_266},{(void*)0},{&g_266},{(void*)0},{&g_266},{(void*)0}};
                    int i, j, k;
                    l_389 |= ((((((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((g_127[g_157.f1] | g_127[g_264]) > g_146[g_221][g_221][(g_221 + 1)]), (&g_266 == ((0x1151L || g_98) , l_387[0][0])))) ^ (-6L)), g_157.f1)) | l_388) | p_38.f1) , (*l_382)) < 0L) != 0x13FCF70DL);
                }
            }
            l_400 &= ((l_399 = (l_398 ^= ((l_394[0][3][6] = ((**g_272) , (l_390 != (g_272 = (void*)0)))) || (g_396 = g_337[2][0])))) >= (p_38.f1 < 0x6CF536BA4886BE56LL));
            p_38.f4.f0 = ((g_127[g_157.f1] = (((l_421[0] = (safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((g_266 = (safe_rshift_func_uint8_t_u_u(g_295, ((safe_mod_func_uint64_t_u_u(((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((1UL >= (l_415 = ((*g_125)++))), (((((((*g_346) , ((l_398 , l_397[3]) == (void*)0)) >= ((safe_rshift_func_uint8_t_u_u((l_418[6][0] == (void*)0), g_62.f1)) | 0x6A11L)) , p_38.f1) != (-1L)) ^ 0x2763L) , l_398))), g_179)) ^ p_38.f0), l_398)) && 0xA1C20159L)))), l_399)) || l_415) < g_146[3][2][2]), p_38.f0))) ^ g_422) , 0x6F3951A5L)) || p_38.f1);
            l_434 |= (5UL ^ (g_222 = ((-1L) <= ((-5L) != ((l_400 = (((*l_425) &= (g_337[(g_221 + 2)][g_221] = ((*p_36) , 0xD505C9C2B50DF7F9LL))) || g_3[0])) != (p_38.f1 = (safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0xCAL, 6)), l_398)) , l_432) != &g_125), 0xBDL))))))));
            return &g_3[0];
        }
        g_347.f0 ^= 0x385F638AL;
        g_347.f0 = l_435;
        for (l_435 = 0; (l_435 <= 2); l_435 += 1)
        { 
            int32_t *l_438 = (void*)0;
            struct S0 **l_460 = (void*)0;
            int32_t * const *l_468 = &g_467;
            int32_t l_500[3];
            int i;
            for (i = 0; i < 3; i++)
                l_500[i] = 0xEFA55F2DL;
            for (g_347.f0 = 0; (g_347.f0 <= 2); g_347.f0 += 1)
            { 
                int64_t l_436 = 0x4770F5A5815A79CELL;
                int32_t *l_437 = &l_415;
                uint16_t **l_451 = &g_125;
                struct S0 **l_459 = &g_61[2];
                int16_t l_463[2];
                int8_t *l_474[4][6][7] = {{{&g_193,&g_193,&g_193,&g_193,&g_193,&g_193,&g_193},{&g_264,&g_193,(void*)0,(void*)0,&g_264,&g_264,&g_193},{(void*)0,(void*)0,&g_193,&g_193,&g_193,&g_193,&g_264},{&g_193,&g_264,&g_193,&g_193,&g_264,(void*)0,&g_193},{&g_264,&g_193,(void*)0,&g_193,(void*)0,&g_264,(void*)0},{(void*)0,&g_193,&g_193,&g_193,(void*)0,&g_193,&g_193}},{{&g_193,&g_193,&g_264,(void*)0,&g_193,&g_193,&g_264},{&g_193,&g_193,&g_193,&g_193,&g_193,&g_264,(void*)0},{&g_193,(void*)0,(void*)0,&g_264,&g_193,&g_193,(void*)0},{&g_193,&g_193,&g_264,(void*)0,(void*)0,&g_193,&g_193},{(void*)0,&g_193,&g_193,&g_264,(void*)0,&g_193,&g_193},{&g_264,(void*)0,&g_193,(void*)0,&g_264,&g_193,&g_264}},{{(void*)0,&g_264,&g_264,&g_193,&g_193,&g_193,&g_193},{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_193},{&g_264,&g_193,&g_193,&g_193,&g_193,&g_264,&g_193},{&g_193,&g_264,&g_264,(void*)0,(void*)0,(void*)0,&g_193},{(void*)0,&g_264,&g_264,&g_193,&g_264,(void*)0,&g_193},{&g_193,&g_264,&g_193,&g_264,&g_193,&g_264,&g_264}},{{&g_264,&g_193,(void*)0,&g_193,&g_193,(void*)0,&g_264},{&g_264,&g_193,&g_264,&g_264,&g_264,&g_264,&g_264},{&g_193,(void*)0,&g_193,&g_193,(void*)0,&g_193,&g_193},{(void*)0,(void*)0,&g_264,(void*)0,&g_193,(void*)0,&g_193},{&g_193,&g_193,&g_193,&g_264,&g_193,(void*)0,(void*)0},{&g_264,(void*)0,&g_264,&g_193,(void*)0,&g_264,&g_193}}};
                uint8_t *l_475 = &g_444[1][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_463[i] = (-1L);
                if ((g_62.f0 = p_38.f1))
                { 
                    if (l_436)
                        break;
                    (*g_272) = (*g_272);
                    l_438 = l_437;
                    (*l_438) = l_421[0];
                }
                else
                { 
                    uint8_t *l_443 = &g_444[1][1];
                    uint16_t **l_452 = &g_125;
                    int32_t l_458[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_458[i] = 0xAB17395EL;
                    (*l_437) = (((g_222 > (safe_lshift_func_uint8_t_u_u(0x6EL, (((((l_394[0][3][6] <= (safe_mul_func_uint8_t_u_u(((*l_443)++), (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_437) > (((l_451 = &g_125) != l_452) < (safe_unary_minus_func_uint64_t_u(((((((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((-1L), (*g_125))), 0x1FL)) < g_62.f0) , l_458[0]) || 0xD7B7L) != (-1L)) || 0x7A685396L))))), g_146[1][1][2])), (*g_125)))))) && g_221) <= 1UL) , l_459) == l_460)))) == 0xC7BE1F424D20985ELL) >= p_38.f1);
                }
                g_62.f0 = ((safe_mod_func_int8_t_s_s(l_463[1], ((((**l_459) , (g_466 = g_466)) == l_468) & (((*l_475) ^= (g_62.f1 , (safe_rshift_func_int16_t_s_s((((!((safe_lshift_func_int8_t_s_s((g_193 = 0x72L), ((*l_437) = p_37))) <= p_37)) > p_37) | p_37), g_396)))) == l_421[0])))) , p_38.f1);
            }
            if (l_388)
                break;
            for (g_203 = 2; (g_203 >= 0); g_203 -= 1)
            { 
                int8_t l_502[6][7][6] = {{{0x79L,0x63L,4L,0xBAL,0x3EL,0x3DL},{0xBAL,0x3EL,0x3DL,1L,0xB0L,1L},{4L,0x6DL,(-6L),0x7AL,0L,(-1L)},{0L,1L,(-1L),0x01L,(-1L),0x7AL},{0xEDL,6L,0x71L,0x48L,0x05L,0x55L},{0x71L,0x79L,0xB0L,0xEDL,4L,1L},{9L,0L,0L,0xCEL,0L,0L}},{{0x5BL,0xF4L,0x79L,0x3DL,0xEEL,0x8FL},{0xE4L,1L,1L,0x3DL,0x84L,0x6DL},{0L,1L,1L,0L,0xEEL,0x70L},{0x55L,0xF4L,0x63L,(-6L),0L,0xE5L},{0xD8L,0L,0x55L,0L,4L,0xEEL},{1L,0x79L,0x70L,0x6DL,0x05L,6L},{0x01L,6L,0xCEL,0x57L,(-1L),1L}},{{2L,1L,9L,1L,0L,0xD8L},{(-7L),0x6DL,0xBAL,1L,0xB0L,0x01L},{1L,0x3EL,1L,1L,0x3EL,1L},{0x7AL,0x63L,0L,0x7DL,0x3DL,0xB0L},{0xEDL,0x3DL,0x20L,3L,1L,0xD8L},{0xEDL,0x48L,3L,0x7DL,0L,9L},{1L,0x3DL,1L,0L,0x84L,0L}},{{0x70L,0x79L,1L,0L,(-1L),0xCEL},{1L,0x5BL,0xE2L,0L,2L,6L},{0xF6L,1L,0x6DL,0x3DL,1L,1L},{0L,0x55L,(-10L),0xE4L,1L,0xF4L},{0x7DL,1L,0x7AL,0x71L,(-1L),0L},{0x01L,2L,0xD8L,2L,0x01L,0x84L},{(-6L),0xD8L,0xF6L,0xF4L,0xCEL,1L}},{{0x71L,1L,(-1L),0xD8L,0x79L,1L},{1L,0x7DL,0xF6L,0x6DL,0xE2L,0x84L},{0x79L,0x8FL,0xD8L,0L,0x55L,0L},{(-7L),0x05L,0x7AL,0x57L,0x8FL,0xF4L},{9L,0x01L,(-10L),0x20L,(-6L),1L},{0x57L,0L,0x6DL,0L,4L,6L},{0xF4L,(-1L),0xE2L,1L,0xEEL,0xCEL}},{{(-1L),0xE5L,1L,(-10L),0L,0L},{0x3DL,1L,1L,0x3DL,0x6DL,9L},{1L,(-1L),3L,0L,0x7DL,0xD8L},{0x97L,0xF6L,0x20L,0x7AL,0x7DL,0xB0L},{0x3DL,(-1L),6L,0x05L,0x6DL,0x70L},{0x3DL,1L,0L,0x84L,0L,0L},{0xCEL,0xE5L,0x3DL,0x55L,0xEEL,0x01L}}};
                uint16_t **l_530 = &g_125;
                int32_t l_536 = (-1L);
                uint8_t l_537[5];
                int8_t *l_541 = &g_264;
                int64_t l_543 = 0x1E85A905C72F0C99LL;
                int16_t *l_544 = &g_266;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_537[i] = 255UL;
                for (g_193 = 0; (g_193 <= 1); g_193 += 1)
                { 
                    uint8_t *l_476[2][2][6] = {{{&g_157.f0,&g_157.f0,&g_444[1][1],(void*)0,(void*)0,&g_444[1][1]},{(void*)0,(void*)0,&g_444[1][1],(void*)0,(void*)0,&g_444[1][1]}},{{(void*)0,(void*)0,&g_444[1][1],&g_157.f0,&g_157.f0,&g_444[1][1]},{&g_157.f0,&g_157.f0,&g_444[1][1],(void*)0,(void*)0,&g_444[1][1]}}};
                    int32_t l_480 = 1L;
                    int8_t *l_481[5][6];
                    int16_t *l_496 = (void*)0;
                    int16_t *l_497[2][3];
                    int64_t *l_498 = (void*)0;
                    int64_t *l_499 = (void*)0;
                    struct S0 l_511 = {0x121561EAL,-8L};
                    union U1 **l_517 = &g_156;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_481[i][j] = &g_264;
                    }
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_497[i][j] = &g_266;
                    }
                    p_38.f4.f0 = ((l_502[3][1][4] = (g_501 = ((((g_444[1][0]--) < (+(g_62.f1 , (g_264 &= l_480)))) , (l_500[1] = (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_480, ((((l_421[0] = ((0x4EFBL == (safe_add_func_int32_t_s_s((((g_188 |= (safe_rshift_func_int16_t_s_s((g_266 = (((((g_347.f0 | 0xE1E0L) >= ((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u(g_337[2][2], 1UL)), 6L)), p_37)) , p_38.f0)) > g_157.f1) && p_37) , g_109)), p_37))) | 0x6AEC26AE8E340233LL) , (-8L)), 0x91C18062L))) & g_347.f0)) != l_480) , g_264) != g_193))), p_37)))) & l_415))) ^ 0x5FE3L);
                    g_503++;
                    l_520 = ((g_146[(l_435 + 4)][g_203][g_203] |= 3UL) <= (!(safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((l_511 , ((p_37 & ((safe_add_func_uint8_t_u_u(1UL, ((p_37 || (safe_add_func_uint64_t_u_u((+(g_266 |= ((((((*l_517) = &p_38) == l_518) <= l_502[3][1][4]) , l_511) , p_37))), 1L))) , l_388))) & 3UL)) <= l_519)) >= l_502[5][2][4]), g_203)), p_38.f1))));
                    l_500[1] = (p_38.f2 = (l_536 = ((**l_517) , (safe_rshift_func_uint8_t_u_u((8L || ((((((g_266 ^= (((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(g_157.f0, ((safe_mod_func_uint8_t_u_u((((l_530 = l_529) == &g_125) | (((safe_div_func_int32_t_s_s(0x3D4CC4C2L, (l_511.f0 |= ((safe_div_func_int16_t_s_s(g_422, 1UL)) ^ 0x7CF9BE0BL)))) && p_38.f0) ^ l_502[3][1][4])), 0x8EL)) != (-1L)))), 9L)) & l_502[2][2][3]) , 5L)) != 0x2412L) || 0x4B4FL) != 0xE8E13BC2A8D072CALL) | l_535) <= 8L)), 5)))));
                    p_38.f2 &= l_537[0];
                }
                p_38.f2 = (((*p_36) , (+g_221)) != ((*l_544) &= ((safe_mod_func_uint8_t_u_u(255UL, ((*l_541) = p_38.f0))) != (((((((0xE457L | l_519) >= (+(7UL >= 0xF3L))) && g_203) & l_543) || p_37) & 0x8FL) | p_37))));
            }
        }
    }
    if (((((safe_div_func_int8_t_s_s(l_519, ((((*l_555) = ((0x3FA3L == (l_519 || (((!(g_127[1] ^= l_421[0])) > ((((*g_346) , (safe_div_func_int8_t_s_s((p_38.f1 && (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((((*l_554) = ((((*g_156) , p_38.f0) == l_519) > 0x96D62F49L)) | p_37) == l_435), l_394[2][5][6])), l_399))), p_37))) ^ g_444[1][1]) || g_79)) && g_503))) & l_519)) ^ g_222) , 0x90L))) > p_38.f0) < p_37) | p_38.f1))
    { 
        int32_t l_556 = 0x60BFFC7FL;
        int32_t l_557 = 0x7CE88458L;
        int32_t **l_575[4];
        const int64_t l_577 = 0x20950AAD941775C6LL;
        int32_t l_578 = 0L;
        uint16_t *l_579 = (void*)0;
        uint16_t *l_580 = &g_56;
        int i;
        for (i = 0; i < 4; i++)
            l_575[i] = (void*)0;
        l_557 |= l_556;
        l_421[0] = (safe_mul_func_uint16_t_u_u(((*l_580) = ((~(safe_mod_func_uint8_t_u_u((0UL < l_557), (((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((**l_432) &= ((safe_div_func_int32_t_s_s(((*l_555) = (p_38.f0 < ((((*p_36) , (g_193 = (g_79 > (p_38.f1 > (safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((((safe_rshift_func_int8_t_s_u(((l_576 = &l_421[0]) == (void*)0), 3)) | (*l_555)) >= 65530UL) <= (*l_555)) <= p_38.f0), 3UL)), p_38.f1)))))) == 248UL) ^ p_38.f0))), l_577)) | p_38.f0)), 0xD829L)) , (-1L)), g_295)) > (-1L)) , p_38.f1)))) && l_578)), p_38.f1));
        l_576 = &g_3[0];
    }
    else
    { 
        uint32_t l_608 = 0xE11C2C26L;
        int32_t l_609[5] = {1L,1L,1L,1L,1L};
        int32_t **l_615 = (void*)0;
        uint32_t l_647 = 4294967293UL;
        uint8_t **l_692[6] = {&g_688[2],&g_688[1],&g_688[2],&g_688[2],&g_688[1],&g_688[2]};
        int i;
        if (((*l_576) = g_581))
        { 
lbl_693:
            (*l_576) = 0xDB90DF77L;
        }
        else
        { 
            int32_t l_592 = 1L;
            int8_t l_607 = 2L;
            uint32_t l_627[5][2][1];
            union U1 **l_628 = (void*)0;
            uint32_t *l_668 = (void*)0;
            uint32_t *l_669[2][3];
            int64_t *l_672 = &g_188;
            int32_t l_680 = (-1L);
            int32_t l_681 = 0xDB196F0FL;
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_627[i][j][k] = 0xD74E8962L;
                }
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_669[i][j] = &l_435;
            }
            if (((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(l_592, 3)), ((safe_div_func_uint16_t_u_u((*g_125), ((safe_sub_func_int16_t_s_s(((*l_576) = (((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(l_592, (((-7L) | ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((void*)0 != &g_124), (safe_add_func_int16_t_s_s((1UL ^ p_37), 0x5FD0L)))), 0)) > l_607)) , l_592))), p_38.f1)) == l_607) >= p_37)), 0x9D01L)) & g_3[0]))) , (*l_576)))) , l_608) < 0x89228902L), p_38.f1)) && 0x0BEDL), l_609[2])), p_37)) != g_3[0]))
            { 
                int64_t l_629 = 0L;
                uint8_t *l_630 = (void*)0;
                uint8_t *l_631 = &g_444[1][1];
                for (l_519 = 0; (l_519 < (-5)); l_519 = safe_sub_func_uint64_t_u_u(l_519, 1))
                { 
                    if (g_157.f1)
                        goto lbl_612;
                    (*l_576) = ((&g_162 != l_615) | ((*p_36) , ((+(0xAC11EBC7L | (-1L))) == 1UL)));
                }
                (*l_555) |= ((g_422 , p_37) < (((*l_576) = ((*l_631) = ((safe_lshift_func_uint8_t_u_s(0UL, ((safe_add_func_uint64_t_u_u((((*g_125) = (safe_mul_func_int16_t_s_s(((((((*l_554) ^= (*l_576)) & (safe_mul_func_uint16_t_u_u(65535UL, 0L))) >= (safe_rshift_func_uint16_t_u_s(l_627[1][1][0], 15))) , &g_156) == l_628), g_98))) | (*l_576)), g_422)) | 0UL))) <= l_629))) , (-1L)));
            }
            else
            { 
                int32_t *l_632 = &g_3[0];
                int32_t **l_633 = (void*)0;
                int32_t **l_634 = &l_632;
                (*l_634) = l_632;
                if (g_157.f2)
                { 
                    const int64_t *l_637 = (void*)0;
                    struct S0 ***l_638 = (void*)0;
                    struct S0 ***l_639 = &g_272;
                    int32_t l_640 = 1L;
                    int32_t *l_642 = &g_347.f0;
                    int32_t *l_643 = &l_421[0];
                    int32_t *l_644 = &l_592;
                    int32_t *l_645 = &l_609[2];
                    int32_t *l_646[5] = {&l_592,&l_592,&l_592,&l_592,&l_592};
                    int i;
                    p_38.f2 = ((*l_555) = (safe_rshift_func_uint8_t_u_s((((((((void*)0 != l_637) != g_146[3][2][2]) , &g_127[0]) == &g_79) , &g_61[2]) != ((*l_639) = &g_61[2])), g_193)));
                    if (g_422)
                        goto lbl_641;
                    (*l_576) |= g_188;
lbl_641:
                    (*l_555) = ((**l_390) , l_640);
                    l_647--;
                    (*l_643) &= (p_37 <= p_38.f1);
                }
                else
                { 
                    return &g_3[0];
                }
                for (g_581 = 0; (g_581 >= (-27)); g_581 = safe_sub_func_int16_t_s_s(g_581, 6))
                { 
                    uint64_t **l_652 = (void*)0;
                    uint64_t ***l_653 = &l_652;
                    (*l_555) = g_503;
                    (*l_653) = l_652;
                }
                for (g_264 = 0; (g_264 >= (-11)); g_264 = safe_sub_func_int8_t_s_s(g_264, 5))
                { 
                    uint32_t l_656 = 0x23D38508L;
                    int32_t *l_660 = &l_609[2];
                    --l_656;
                    l_659 = &g_3[0];
                    return &g_3[0];
                }
                return &g_3[0];
            }
            if ((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((((248UL < p_38.f0) | (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((*l_432) != ((l_670 = 4UL) , (void*)0)), (((g_266 && (((*l_672) = (safe_unary_minus_func_uint64_t_u((((*l_659) = (g_203 <= p_38.f0)) > 0x2E925395L)))) != g_3[0])) > 8UL) , 0xA7L))), p_37))) < l_592))), 14)))
            { 
                int32_t *l_673 = &l_609[2];
                int32_t *l_674 = (void*)0;
                int32_t *l_675 = &g_62.f0;
                int32_t *l_676 = &l_592;
                int32_t *l_677 = &g_62.f0;
                int32_t *l_678[5][7][7] = {{{&l_421[0],(void*)0,&l_421[0],&g_157.f2,&l_421[0],(void*)0,&l_421[0]},{&g_62.f0,&l_609[0],&l_415,&g_157.f2,&g_347.f0,&g_157.f2,&l_415},{&l_421[0],&l_415,(void*)0,&g_157.f2,&g_347.f0,(void*)0,&g_347.f0},{&l_421[0],&g_62.f0,&l_609[4],&l_609[2],&l_609[2],&l_609[4],&g_62.f0},{(void*)0,&l_421[0],&l_421[0],&l_609[1],&g_347.f0,&g_3[0],&l_421[0]},{&l_609[4],&g_62.f0,&g_347.f0,&g_62.f0,&g_347.f0,&g_62.f0,&l_609[4]},{&l_421[0],&g_3[0],&g_347.f0,&l_609[1],&l_421[0],&l_421[0],(void*)0}},{{&g_62.f0,&l_609[4],&l_609[2],&l_609[2],&l_609[4],&g_62.f0,&l_421[0]},{&g_347.f0,(void*)0,&g_347.f0,&g_157.f2,(void*)0,&l_415,&l_421[0]},{&l_415,&g_157.f2,&g_347.f0,&g_157.f2,&l_415,&l_609[0],&g_62.f0},{&l_421[0],(void*)0,&l_421[0],&g_3[0],&l_421[0],&g_3[0],&l_421[0]},{&l_609[2],&l_609[4],&l_609[4],&l_609[2],&g_157.f2,&l_609[4],&g_62.f0},{&l_421[0],&g_3[0],(void*)0,&g_3[0],(void*)0,&l_609[2],&l_421[0]},{&l_415,&g_62.f0,&l_415,&l_609[4],&g_62.f0,&l_609[2],&g_62.f0}},{{&g_347.f0,&l_421[0],&l_421[0],(void*)0,(void*)0,(void*)0,&l_421[0]},{&g_62.f0,&g_62.f0,&g_157.f2,&l_421[0],(void*)0,&l_609[2],&g_62.f0},{&l_421[0],&l_415,(void*)0,(void*)0,&l_415,&l_609[2],&l_421[0]},{&l_609[4],&l_609[0],&g_62.f0,&l_415,(void*)0,&l_609[4],&l_421[0]},{(void*)0,&g_3[0],(void*)0,&l_415,(void*)0,&g_3[0],(void*)0},{&l_421[0],&l_609[4],(void*)0,&l_415,&g_62.f0,&l_609[0],&l_609[4]},{&l_421[0],&l_609[2],&l_415,(void*)0,(void*)0,&l_415,&l_421[0]}},{{&g_62.f0,&l_609[2],(void*)0,&l_421[0],&g_157.f2,&g_62.f0,&g_62.f0},{&l_421[0],(void*)0,(void*)0,(void*)0,&l_421[0],&l_421[0],&g_347.f0},{&g_62.f0,&l_609[2],&g_62.f0,&l_609[4],&l_415,&g_62.f0,&l_415},{&l_421[0],&l_609[2],(void*)0,&g_3[0],(void*)0,&g_3[0],&l_421[0]},{&g_62.f0,&l_609[4],&g_157.f2,&l_609[2],&l_609[4],&l_609[4],&l_609[2]},{&l_421[0],&g_3[0],&l_421[0],&g_3[0],&l_421[0],(void*)0,&l_421[0]},{&g_62.f0,&l_609[0],&l_415,&g_157.f2,&g_347.f0,&g_62.f0,&l_609[2]}},{{(void*)0,(void*)0,&g_347.f0,&g_3[0],(void*)0,&l_609[2],&l_421[0]},{&l_609[4],&g_157.f2,&l_609[2],&l_609[4],&l_609[4],&l_609[2],&g_157.f2},{&l_421[0],&l_421[0],(void*)0,(void*)0,(void*)0,&l_421[0],&l_592},{&l_609[2],&l_421[0],&g_62.f0,&g_157.f2,&g_62.f0,&l_421[0],&l_609[2]},{&l_592,&l_421[0],(void*)0,(void*)0,(void*)0,&l_421[0],&l_421[0]},{&g_157.f2,&l_609[2],&l_609[4],&l_609[4],&l_609[2],&g_157.f2,&l_609[4]},{&l_421[0],&l_609[2],(void*)0,&g_3[0],&g_347.f0,(void*)0,(void*)0}}};
                int i, j, k;
                ++g_682[1];
            }
            else
            { 
                (*l_555) = l_680;
            }
            for (g_422 = 0; (g_422 <= 3); g_422 += 1)
            { 
                int32_t **l_685 = (void*)0;
                int32_t **l_686 = &g_162;
                uint8_t ***l_689 = (void*)0;
                uint8_t ***l_690 = (void*)0;
                uint8_t ***l_691[5][5] = {{&g_687[6],&g_687[1],&g_687[1],&g_687[6],&g_687[6]},{&g_687[6],(void*)0,&g_687[6],(void*)0,&g_687[6]},{&g_687[6],&g_687[6],&g_687[1],&g_687[1],&g_687[6]},{&g_687[3],(void*)0,&g_687[3],(void*)0,&g_687[3]},{&g_687[6],&g_687[1],&g_687[1],&g_687[6],&g_687[6]}};
                int i, j;
                (*l_686) = &g_3[0];
                for (l_680 = 3; (l_680 >= 0); l_680 -= 1)
                { 
                    (*l_659) = 0xE7CBF8D0L;
                }
                l_692[1] = g_687[1];
                if (g_581)
                    goto lbl_693;
                for (l_680 = 0; (l_680 <= 3); l_680 += 1)
                { 
                    int i;
                    if (g_682[g_422])
                        break;
                }
            }
        }
        if (g_157.f2)
            goto lbl_612;
        for (g_266 = 0; g_266 < 6; g_266 += 1)
        {
            for (g_193 = 0; g_193 < 4; g_193 += 1)
            {
                g_337[g_266][g_193] = 0xC07557998C174B36LL;
            }
        }
    }
    return &g_3[0];
}



static union U1 * func_39(int32_t  p_40, int8_t  p_41, uint64_t  p_42)
{ 
    struct S0 **l_63 = &g_61[2];
    int64_t l_76 = 1L;
    int32_t l_77 = (-1L);
    uint16_t *l_94 = &g_56;
    uint16_t *l_103 = &g_56;
    union U1 *l_213 = &g_157;
    int32_t l_261 = 0L;
    int32_t l_262 = 0xA5C426E1L;
    int32_t l_265 = 0xA0B9419DL;
    uint8_t l_268[1];
    int32_t *l_364 = &g_157.f3;
    int64_t *l_377 = &g_188;
    int i;
    for (i = 0; i < 1; i++)
        l_268[i] = 0x82L;
    (*l_63) = g_61[2];
    for (g_56 = 0; (g_56 <= 55); ++g_56)
    { 
        int32_t *l_66 = &g_62.f0;
        int32_t l_75 = 0L;
        union U1 *l_119 = (void*)0;
        uint16_t * const l_155 = (void*)0;
        int64_t l_189 = (-1L);
        struct S0 *l_191[2][6][7] = {{{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,(void*)0},{&g_62,(void*)0,&g_62,&g_62,(void*)0,&g_62,&g_62},{&g_62,&g_62,(void*)0,&g_62,(void*)0,&g_62,&g_62},{&g_62,&g_62,&g_62,(void*)0,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,(void*)0,&g_62,&g_62,&g_62,&g_62,(void*)0}},{{&g_62,&g_62,&g_62,(void*)0,&g_62,&g_62,(void*)0},{&g_62,&g_62,&g_62,&g_62,(void*)0,&g_62,&g_62},{&g_62,&g_62,(void*)0,(void*)0,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,(void*)0,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint16_t l_204 = 65526UL;
        uint16_t l_210 = 0xF8E7L;
        int i, j, k;
        (*l_66) ^= g_56;
        for (p_40 = 0; (p_40 == 21); p_40 = safe_add_func_uint8_t_u_u(p_40, 4))
        { 
            int32_t l_78 = 0L;
            uint16_t *l_104 = &g_56;
            struct S0 *l_133 = &g_62;
            int32_t *l_168 = &g_157.f4.f0;
            struct S0 l_229 = {0xC7E913C9L,-1L};
            for (p_41 = 0; (p_41 <= 26); p_41 = safe_add_func_int64_t_s_s(p_41, 1))
            { 
                int32_t *l_71 = &g_62.f0;
                int32_t *l_72 = &g_62.f0;
                int32_t *l_73 = (void*)0;
                int32_t *l_74[3][2][2] = {{{&g_3[0],(void*)0},{&g_3[0],&g_3[0]}},{{(void*)0,&g_3[0]},{&g_3[0],(void*)0}},{{&g_3[0],&g_3[0]},{(void*)0,&g_3[0]}}};
                int i, j, k;
                ++g_79;
            }
            for (l_76 = 0; (l_76 < 9); l_76++)
            { 
                uint16_t **l_95 = &l_94;
                int32_t l_96 = 8L;
                uint16_t *l_97 = &g_98;
                int32_t l_105 = (-1L);
                int32_t *l_106 = &g_107;
                int32_t *l_108 = &g_109;
                union U1 *l_118 = (void*)0;
                if (((((*l_108) = ((*l_106) = ((safe_rshift_func_int8_t_s_u((9L == ((((void*)0 == &g_62) , (safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((l_96 = (((*l_95) = l_94) != &g_56)), (((((*l_97) &= g_62.f1) == (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((l_103 = l_103) == l_104), g_3[0])), 6))) != g_56) || p_41))) == g_62.f0), l_76)), p_40)), l_105))) && p_42)), 0)) && l_78))) , l_96) , (-4L)))
                { 
                    union U1 **l_120 = &l_119;
                    int32_t *l_126[1][4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_126[i][j] = (void*)0;
                    }
                    (*l_66) = g_62.f1;
                    (*l_66) ^= (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_118 != ((*l_120) = l_119)), (+p_41))), (p_41 , (safe_sub_func_int64_t_s_s((g_56 <= (g_124 != &g_125)), 0xC7313B58279F83FALL))))) || p_40), p_41)) <= 0UL), l_76));
                    if (p_41)
                        continue;
                    g_127[3]--;
                }
                else
                { 
                    const struct S0 l_139 = {0x61C4191EL,0x5B83L};
                    uint16_t *l_142 = (void*)0;
                    uint16_t *l_143 = (void*)0;
                    uint16_t *l_144 = (void*)0;
                    uint16_t *l_145 = &g_146[3][2][2];
                    union U1 l_154 = {0x68L};
                    union U1 **l_158 = &l_118;
                    (*l_158) = ((+(safe_div_func_uint8_t_u_u((((**g_124) , l_133) == ((g_127[3] ^ ((~(safe_mul_func_int16_t_s_s((l_139 , (((safe_add_func_uint32_t_u_u((((18446744073709551611UL <= (((*l_145)--) < (-3L))) , (safe_div_func_int64_t_s_s((((safe_mul_func_int8_t_s_s(((+(l_154 , g_56)) , l_139.f1), 251UL)) <= 255UL) , l_78), 0xA2825B7CC70ECFAELL))) , l_77), g_62.f1)) , l_155) != l_94)), 0x46A6L))) > p_42)) , l_133)), g_62.f0))) , g_156);
                    (*l_66) = (-5L);
                    (*l_66) = (g_79 >= (&l_97 != &l_103));
                }
                for (g_98 = 0; (g_98 != 3); g_98++)
                { 
                    int32_t **l_161[4] = {&l_66,&l_66,&l_66,&l_66};
                    int i;
                    g_162 = &l_78;
                    (*g_162) = p_41;
                    return &g_157;
                }
                g_61[2] = (*l_63);
                for (g_62.f0 = 0; (g_62.f0 == 14); g_62.f0 = safe_add_func_uint64_t_u_u(g_62.f0, 6))
                { 
                    int32_t *l_165[4] = {&l_105,&l_105,&l_105,&l_105};
                    int32_t **l_166 = (void*)0;
                    int32_t **l_167[4][3];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_167[i][j] = &g_162;
                    }
                    l_96 ^= 0xCC6E09C6L;
                    if (l_78)
                        continue;
                    l_168 = &g_3[0];
                    (*g_162) = g_146[3][2][2];
                    (*g_162) = (&g_156 == &g_156);
                }
            }
            (*l_66) ^= (0xA0F7L <= (0x8FE63917519F6627LL & (246UL != (safe_mod_func_int64_t_s_s(g_3[0], l_76)))));
            for (p_42 = 0; (p_42 <= 56); p_42++)
            { 
                uint16_t ***l_177 = &g_124;
                uint64_t *l_178 = &g_179;
                struct S0 *l_190 = &g_62;
                int32_t l_205 = 0xB2CCD057L;
                int32_t l_209[7][3][5] = {{{0xB3BDE5FCL,0x716F4F35L,3L,0x5B2E24D0L,1L},{0x338EFF3EL,(-1L),0xB31CC7D8L,1L,0x483FBC1EL},{0L,0xB3BDE5FCL,7L,0x87891B7CL,9L}},{{7L,1L,0L,0x29ED1989L,0x87B67C16L},{0xB3BDE5FCL,0x483FBC1EL,(-1L),0L,(-1L)},{0xB3BDE5FCL,(-7L),0xBD9A228BL,(-1L),0x29ED1989L}},{{7L,(-1L),1L,0x716F4F35L,0x716F4F35L},{0x242812E1L,7L,0x242812E1L,0xBD9A228BL,0L},{0x87891B7CL,0L,0x716F4F35L,0L,1L}},{{5L,(-1L),7L,(-7L),1L},{9L,(-1L),0x716F4F35L,1L,0x87B67C16L},{(-9L),5L,0x242812E1L,0xB3BDE5FCL,7L}},{{(-1L),(-7L),1L,(-4L),(-1L)},{0xBACC00A5L,0x338EFF3EL,0xBD9A228BL,0x716F4F35L,4L},{0x338EFF3EL,9L,(-1L),(-1L),4L}},{{0x87891B7CL,1L,0L,3L,(-1L)},{0x483FBC1EL,3L,7L,(-1L),7L},{0xD0473034L,0xD0473034L,0xE159BBAFL,0x5B2E24D0L,0x87B67C16L}},{{0L,0x242812E1L,0x483FBC1EL,1L,1L},{3L,(-7L),(-9L),1L,1L},{0x24C0B64EL,0x242812E1L,(-4L),0x716F4F35L,0L}}};
                int i, j, k;
                (*g_162) = (safe_mul_func_int8_t_s_s((((((((*l_177) = &l_94) == &l_104) <= ((*l_178) = 0UL)) && p_40) || (safe_mul_func_uint16_t_u_u(((*l_66) , (*l_66)), (((*g_125) = (safe_sub_func_uint64_t_u_u((0L > g_79), g_3[0]))) == p_41)))) != p_42), g_3[0]));
                if ((*l_66))
                { 
                    int32_t **l_184 = &l_66;
                    int32_t **l_185 = &g_162;
                    int8_t *l_192 = &g_193;
                    int16_t *l_202 = &g_203;
                    int32_t *l_206 = &g_157.f2;
                    int32_t *l_207 = &g_62.f0;
                    int32_t *l_208[3][7][3] = {{{&l_77,&g_62.f0,&l_78},{&l_205,&l_205,&l_205},{&g_62.f0,&l_77,&l_78},{&l_205,&l_205,&l_205},{&l_78,&l_78,&l_78},{&l_205,&l_205,&l_205},{&l_77,&g_62.f0,&l_78}},{{&l_205,&l_205,&l_205},{&g_62.f0,&l_77,&l_78},{&l_205,&l_205,&l_205},{&l_78,&l_78,&l_78},{&l_205,&l_205,&l_205},{&l_77,&g_62.f0,&l_78},{&l_205,&l_205,&l_205}},{{&g_62.f0,&l_77,&l_78},{&l_205,&l_205,&l_205},{&l_78,&l_78,&l_78},{&l_205,&l_205,&l_205},{&l_77,&g_62.f0,&l_78},{&l_205,&l_205,&l_205},{&g_62.f0,&l_77,&l_78}}};
                    int i, j, k;
                    (*l_185) = ((*l_184) = (void*)0);
                    l_189 = (safe_div_func_int16_t_s_s((g_188 &= l_77), (**g_124)));
                    l_205 = ((((*l_192) |= (l_190 != l_191[0][5][0])) >= (((~4294967295UL) >= (safe_sub_func_int8_t_s_s(((~((g_157.f2 = ((65531UL != ((safe_mul_func_uint8_t_u_u(1UL, (g_62.f0 | (g_127[2] = (safe_div_func_int16_t_s_s(((*l_202) = p_40), (**g_124))))))) < 0xDBL)) , 0x2B2AF547L)) & l_204)) == (**g_124)), g_98))) || 0L)) == g_62.f1);
                    l_210++;
                    return l_213;
                }
                else
                { 
                    int32_t *l_214 = (void*)0;
                    int32_t *l_215 = &l_209[3][2][4];
                    int32_t *l_216 = &g_62.f0;
                    int32_t *l_217 = &g_157.f4.f0;
                    int32_t *l_218 = &l_75;
                    int32_t *l_219 = &l_209[3][2][4];
                    int32_t *l_220[3][2] = {{&l_77,&l_77},{&l_77,&l_77},{&l_77,&l_77}};
                    int i, j;
                    ++g_222;
                }
                (*g_162) = (safe_rshift_func_uint8_t_u_s((((l_209[3][2][4] || p_40) <= ((((*l_66) <= 0x7166BAD0E2BE1C1FLL) <= g_127[3]) && (((((safe_add_func_uint64_t_u_u((((**g_124) != (l_229 , g_3[0])) , g_56), p_42)) , 0xFE2CA5F56C5408E8LL) <= 18446744073709551615UL) == g_222) > 0x8822D358E9FEB480LL))) == 0L), 1));
            }
            (*l_66) |= p_42;
        }
        return l_213;
    }
    for (g_56 = 0; (g_56 < 37); ++g_56)
    { 
        int16_t *l_239 = &g_203;
        int32_t l_246 = (-1L);
        int8_t *l_247 = (void*)0;
        int8_t *l_248 = &g_193;
        const struct S0 * const l_249[3][7][5] = {{{&g_62,&g_62,&g_62,&g_62,(void*)0},{&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62}},{{(void*)0,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,(void*)0},{&g_62,&g_62,(void*)0,&g_62,(void*)0},{&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,(void*)0,(void*)0,&g_62},{&g_62,(void*)0,&g_62,(void*)0,&g_62},{&g_62,&g_62,&g_62,(void*)0,&g_62}},{{&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,(void*)0,&g_62,&g_62,&g_62},{(void*)0,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62},{(void*)0,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,(void*)0},{&g_62,&g_62,(void*)0,&g_62,(void*)0}}};
        int32_t l_259 = 0x52B44514L;
        int32_t l_260 = 0x7DEDEC40L;
        int32_t l_263 = 0x3EDD8F24L;
        int32_t l_267 = 2L;
        int16_t l_275 = (-6L);
        union U1 *l_366 = &g_157;
        int i, j, k;
        if ((safe_mod_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((g_157.f1 &= (~(((void*)0 != l_239) , (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((((p_40 & ((((((-2L) > ((safe_sub_func_int8_t_s_s(((*l_248) = l_246), (l_249[2][6][1] != (void*)0))) ^ 0xEDA3L)) == 0xDE63D16FL) != 0x7494L) > (**g_124)) , 0x42L)) | p_40) == p_40), 0xC6E7L)), g_203))))), 255UL)), g_3[0])), 252UL)))
        { 
            uint8_t l_250 = 0x17L;
            int32_t *l_253 = &g_62.f0;
            int32_t *l_254 = &l_77;
            int32_t *l_255 = (void*)0;
            int32_t *l_256 = &l_77;
            int32_t *l_257 = &g_157.f4.f0;
            int32_t *l_258[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_258[i][j] = &l_77;
            }
            l_250--;
            --l_268[0];
        }
        else
        { 
            int32_t l_281 = 5L;
            int64_t *l_325[6][7][2] = {{{(void*)0,(void*)0},{&l_76,(void*)0},{&l_76,&g_188},{(void*)0,&g_188},{&l_76,(void*)0},{&l_76,&l_76},{&l_76,(void*)0}},{{&l_76,&g_188},{(void*)0,&g_188},{&l_76,(void*)0},{&l_76,(void*)0},{(void*)0,(void*)0},{&g_188,&l_76},{&l_76,&l_76}},{{(void*)0,&l_76},{&l_76,&l_76},{&g_188,(void*)0},{(void*)0,(void*)0},{&l_76,(void*)0},{&l_76,&g_188},{(void*)0,&g_188}},{{&l_76,(void*)0},{&l_76,&l_76},{&l_76,(void*)0},{&l_76,&g_188},{(void*)0,&g_188},{&l_76,(void*)0},{&l_76,(void*)0}},{{(void*)0,(void*)0},{&g_188,&l_76},{&l_76,&l_76},{(void*)0,&l_76},{&l_76,&l_76},{&g_188,(void*)0},{(void*)0,(void*)0}},{{&l_76,(void*)0},{&l_76,&g_188},{(void*)0,&g_188},{&l_76,(void*)0},{&l_76,&l_76},{&l_76,(void*)0},{&l_76,&g_188}}};
            int32_t l_326 = 7L;
            int16_t l_336 = 0x7468L;
            union U1 **l_342 = &g_156;
            const struct S0 *l_344[2];
            int64_t *l_376 = &g_188;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_344[i] = &g_62;
            if (((l_267 || (!p_41)) , l_263))
            { 
                for (p_41 = 3; (p_41 >= 0); p_41 -= 1)
                { 
                    int i;
                    g_272 = &g_61[(p_41 + 1)];
                }
            }
            else
            { 
                int64_t *l_278[1][2];
                int32_t l_279 = 8L;
                int32_t *l_283 = &l_265;
                int32_t *l_284 = (void*)0;
                int32_t *l_285 = &l_260;
                int32_t *l_286 = &l_246;
                int32_t *l_287 = &l_260;
                int32_t *l_288 = &l_281;
                int32_t *l_289 = &l_259;
                int32_t *l_290 = &l_260;
                int32_t *l_291 = &g_157.f2;
                int32_t *l_292 = &g_157.f2;
                int32_t *l_293 = &l_281;
                int32_t *l_294[5] = {&l_263,&l_263,&l_263,&l_263,&l_263};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_278[i][j] = &g_188;
                }
                (*g_162) = ((safe_sub_func_int16_t_s_s(((l_275 | ((p_42 == (safe_lshift_func_int16_t_s_u((l_275 || (0x667D22A03B29E0AFLL > (l_279 = p_40))), (safe_unary_minus_func_uint64_t_u(((l_281 = 0xBCAD0B6BL) & (~p_41))))))) < 0L)) && p_40), (**g_124))) || (*g_125));
                g_295++;
            }
            if ((safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(g_264, p_42)) && (safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((l_262 = (safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((l_281 = (safe_lshift_func_uint16_t_u_s(((l_259 ^= (safe_lshift_func_uint16_t_u_s(((((safe_mul_func_uint16_t_u_u(((((*l_239) = (((safe_mod_func_uint8_t_u_u(0x61L, (((-1L) ^ (!0xC1L)) & (((void*)0 == &g_157) || 1UL)))) && g_109) , g_127[3])) , 0xD90C6946L) && 9L), 0xE189L)) == l_261) , g_62.f1) & 0x711D07B9L), 9))) < g_188), l_281))) & g_264) , p_40), p_42)), l_326)) || p_42) & l_268[0]) && 1UL), g_179)) >= p_42) | l_326), l_267))), g_62.f1)), 5UL)), g_157.f0))) >= 4L), l_263)))
            { 
                int32_t *l_327 = &l_267;
                int32_t *l_328 = &l_259;
                int32_t *l_329 = &l_267;
                int32_t *l_330 = &l_261;
                int32_t *l_331 = &l_265;
                int32_t *l_332 = &l_263;
                int32_t *l_333 = (void*)0;
                int32_t *l_334 = &g_157.f2;
                int32_t *l_335[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_335[i] = &g_62.f0;
                g_337[2][0]--;
                if (l_246)
                { 
                    int32_t *l_341 = &g_107;
                    int32_t **l_340 = &l_341;
                    union U1 *l_343 = &g_157;
                    (*g_162) = (((*l_340) = l_333) != &p_40);
                    (*l_334) ^= 0xD8614077L;
                    (*l_328) = ((void*)0 != l_342);
                    return l_343;
                }
                else
                { 
                    const struct S0 **l_345[1];
                    int32_t l_351 = (-1L);
                    int32_t *l_363[6][2][4] = {{{&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,&g_107,(void*)0}},{{&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,&g_107,(void*)0}},{{&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,&g_107,(void*)0}},{{&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,&g_107,(void*)0}},{{&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,&g_107,(void*)0}},{{&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,&g_107,(void*)0}}};
                    int32_t **l_362[5] = {&l_363[0][0][0],&l_363[0][0][0],&l_363[0][0][0],&l_363[0][0][0],&l_363[0][0][0]};
                    uint32_t *l_365[4][3] = {{&g_127[3],&g_79,&g_127[3]},{&g_79,&g_127[3],&g_127[3]},{&g_79,&g_79,&g_127[3]},{&g_127[3],&g_127[3],&g_127[3]}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_345[i] = (void*)0;
                    g_346 = l_344[1];
                    (*g_162) = (safe_rshift_func_int16_t_s_u(((((+l_351) ^ 7UL) <= ((g_266 = (*l_332)) == (safe_rshift_func_uint8_t_u_s((l_281 = (safe_div_func_int64_t_s_s((+(g_127[2] = (((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(g_193, (((((*l_330) = ((g_109 , (~(((l_364 = &g_221) != &g_107) , p_41))) , g_222)) || p_41) || 4L) <= p_42))), 0L)) == p_41) & l_351))), 0x5A45A5E1E7725FC3LL))), 2)))) >= 1L), (*g_125)));
                }
                return l_366;
            }
            else
            { 
                int32_t l_378 = 0x21092AB5L;
                int32_t *l_379[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_379[i] = (void*)0;
                for (p_40 = (-22); (p_40 > 21); ++p_40)
                { 
                    return &g_157;
                }
                l_77 ^= ((((((((p_40 > ((safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_uint64_t_u((&g_61[2] == (void*)0))) > g_266), (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((l_377 = l_376) == (void*)0) & (-1L)) != 2L), 0x8EL)), p_42)))) , 1L)) < l_326) < 0xA20627324F62906DLL) , l_378) , g_222) > 0x66L) | l_267) & 0xB05F36B1L);
            }
        }
    }
    return &g_157;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_127[i], "g_127[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_146[i][j][k], "g_146[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_337[i][j], "g_337[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_347.f0, "g_347.f0", print_hash_value);
    transparent_crc(g_347.f1, "g_347.f1", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_444[i][j], "g_444[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_679[i], "g_679[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_682[i], "g_682[i]", print_hash_value);

    }
    transparent_crc(g_706, "g_706", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_708[i][j], "g_708[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_717, "g_717", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_719[i][j], "g_719[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_833, "g_833", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_886[i][j], "g_886[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1060, "g_1060", print_hash_value);
    transparent_crc(g_1214.f0, "g_1214.f0", print_hash_value);
    transparent_crc(g_1214.f1, "g_1214.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1216[i][j].f0, "g_1216[i][j].f0", print_hash_value);
            transparent_crc(g_1216[i][j].f1, "g_1216[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_1393, "g_1393", print_hash_value);
    transparent_crc(g_1413.f0, "g_1413.f0", print_hash_value);
    transparent_crc(g_1413.f1, "g_1413.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1610[i][j][k], "g_1610[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1795, "g_1795", print_hash_value);
    transparent_crc(g_2010, "g_2010", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
