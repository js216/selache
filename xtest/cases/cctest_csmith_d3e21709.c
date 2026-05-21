// SPDX-License-Identifier: MIT
// cctest_csmith_d3e21709.c --- cctest case csmith_d3e21709 (csmith seed 3554809609)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3c96c2fd */

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

// Options:   -s 3554809609 -o /tmp/csmith_gen_p2mnr34v/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   const int32_t  f1;
};
#pragma pack(pop)

struct S1 {
   int64_t  f0;
   int64_t  f1;
   uint8_t  f2;
   int64_t  f3;
   uint32_t  f4;
   int32_t  f5;
   int16_t  f6;
};

union U2 {
   uint8_t  f0;
   const int64_t  f1;
   uint8_t  f2;
   uint32_t  f3;
   uint32_t  f4;
};


static int32_t g_3 = 3L;
static int32_t g_10 = 3L;
static int64_t g_18[1][2] = {{0xA99669D599618DE7LL,0xA99669D599618DE7LL}};
static uint16_t g_28 = 0x7D87L;
static int32_t g_54[4] = {1L,1L,1L,1L};
static uint16_t *g_67 = &g_28;
static uint16_t **g_66[7][7][2] = {{{&g_67,(void*)0},{&g_67,(void*)0},{&g_67,&g_67},{&g_67,&g_67},{&g_67,(void*)0},{&g_67,(void*)0},{&g_67,&g_67}},{{(void*)0,(void*)0},{(void*)0,&g_67},{&g_67,(void*)0},{&g_67,(void*)0},{&g_67,&g_67},{&g_67,&g_67},{&g_67,(void*)0}},{{&g_67,(void*)0},{&g_67,&g_67},{(void*)0,(void*)0},{(void*)0,&g_67},{&g_67,(void*)0},{&g_67,(void*)0},{&g_67,&g_67}},{{&g_67,&g_67},{&g_67,(void*)0},{(void*)0,&g_67},{&g_67,(void*)0},{&g_67,(void*)0},{&g_67,(void*)0},{&g_67,&g_67}},{{(void*)0,(void*)0},{&g_67,&g_67},{&g_67,&g_67},{&g_67,(void*)0},{(void*)0,&g_67},{&g_67,(void*)0},{&g_67,(void*)0}},{{&g_67,(void*)0},{&g_67,&g_67},{(void*)0,(void*)0},{&g_67,&g_67},{&g_67,&g_67},{&g_67,(void*)0},{(void*)0,&g_67}},{{&g_67,(void*)0},{&g_67,(void*)0},{&g_67,(void*)0},{&g_67,&g_67},{(void*)0,(void*)0},{&g_67,&g_67},{&g_67,&g_67}}};
static uint8_t g_93 = 0xD5L;
static int32_t *g_101[6][2][3] = {{{&g_54[2],&g_54[0],&g_54[0]},{&g_10,&g_54[0],(void*)0}},{{&g_10,&g_10,&g_54[0]},{&g_54[0],(void*)0,&g_54[0]}},{{&g_10,&g_54[0],&g_54[0]},{&g_10,(void*)0,(void*)0}},{{&g_54[2],&g_10,&g_54[0]},{&g_54[0],&g_54[0],&g_54[0]}},{{&g_54[2],&g_54[0],&g_54[0]},{&g_10,&g_54[0],(void*)0}},{{&g_10,&g_10,&g_54[0]},{&g_54[0],(void*)0,&g_54[0]}}};
static int32_t **g_105[4][7][5] = {{{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]}},{{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]}},{{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],(void*)0,(void*)0,&g_101[5][0][0]},{&g_101[5][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]},{&g_101[0][1][2],&g_101[0][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]}},{{&g_101[0][1][2],&g_101[0][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]},{&g_101[0][1][2],&g_101[0][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]},{&g_101[0][1][2],&g_101[0][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]},{&g_101[0][1][2],&g_101[0][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]},{&g_101[0][1][2],&g_101[0][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]},{&g_101[0][1][2],&g_101[0][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]},{&g_101[0][1][2],&g_101[0][1][2],&g_101[5][0][0],&g_101[5][0][0],&g_101[0][1][2]}}};
static int32_t ***g_104[6] = {&g_105[2][5][3],&g_105[2][5][3],&g_105[0][6][3],&g_105[2][5][3],&g_105[2][5][3],&g_105[0][6][3]};
static int32_t g_120[4] = {(-1L),(-1L),(-1L),(-1L)};
static int64_t g_132 = (-1L);
static uint8_t *g_146 = &g_93;
static struct S1 g_149 = {1L,-6L,0x62L,-8L,4294967295UL,0xD1AE7548L,-10L};
static int16_t *g_190 = &g_149.f6;
static struct S0 g_228 = {9L,-1L};
static uint64_t g_264 = 0xDB0181DC7B62B502LL;
static int32_t g_271[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static const struct S1 *g_289 = &g_149;
static const struct S1 **g_288[4][3][4] = {{{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289}},{{(void*)0,&g_289,(void*)0,(void*)0},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289}},{{&g_289,&g_289,(void*)0,&g_289},{(void*)0,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289}},{{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289}}};
static union U2 g_298 = {0x22L};
static uint32_t g_356[7][6][1] = {{{0x65497D51L},{8UL},{0x5F3C5497L},{0xCC5028FCL},{4294967295UL},{0x82BEE0BDL}},{{0UL},{0x82BEE0BDL},{4294967295UL},{0xCC5028FCL},{0x5F3C5497L},{8UL}},{{0x65497D51L},{4294967289UL},{0x65497D51L},{8UL},{0x5F3C5497L},{0xCC5028FCL}},{{4294967295UL},{0x82BEE0BDL},{0UL},{0x82BEE0BDL},{4294967295UL},{0xCC5028FCL}},{{0x5F3C5497L},{8UL},{0x65497D51L},{4294967289UL},{0x65497D51L},{8UL}},{{0x5F3C5497L},{0xCC5028FCL},{4294967295UL},{0x82BEE0BDL},{0UL},{0x82BEE0BDL}},{{4294967295UL},{0xCC5028FCL},{0x5F3C5497L},{8UL},{0x65497D51L},{4294967289UL}}};
static uint32_t g_379 = 0x62C661E7L;
static struct S0 g_382 = {0x811DL,0xE77FBB69L};
static int64_t g_404 = 3L;
static uint32_t g_443 = 1UL;
static int8_t g_445[4][2][1] = {{{0xF9L},{6L}},{{0xF9L},{6L}},{{0xF9L},{6L}},{{0xF9L},{6L}}};
static uint16_t *g_448 = &g_28;
static uint64_t *g_525 = &g_264;
static uint32_t g_568 = 1UL;
static int8_t g_607 = 0xAAL;
static int8_t g_661 = 1L;
static int32_t * const *g_747 = &g_101[4][0][0];
static int32_t * const **g_746 = &g_747;
static int32_t * const ***g_745 = &g_746;
static int32_t * const ***g_749 = &g_746;
static union U2 g_789 = {0x36L};
static union U2 *g_788 = &g_789;
static int8_t g_887 = 0x3BL;
static struct S1 *g_908[5][1] = {{&g_149},{&g_149},{&g_149},{&g_149},{&g_149}};
static struct S1 **g_907 = &g_908[0][0];
static struct S1 ***g_906 = &g_907;
static int32_t g_1013[1] = {0x82053960L};
static const int16_t g_1017 = 0xD03EL;
static int32_t g_1059 = (-5L);
static int64_t * const g_1089 = &g_132;
static int64_t * const *g_1088[5] = {&g_1089,&g_1089,&g_1089,&g_1089,&g_1089};
static uint16_t g_1100 = 0x25F5L;



static int16_t  func_1(void);
static int32_t  func_4(union U2  p_5);
static union U2  func_6(uint64_t  p_7);
static int16_t  func_30(struct S0  p_31, int32_t  p_32, int32_t * p_33, int32_t * p_34);
static int32_t * func_39(uint16_t * p_40, int16_t  p_41, uint16_t * p_42);
static uint16_t * func_46(int32_t  p_47, int16_t  p_48, int32_t * p_49, union U2  p_50);
static uint16_t  func_59(uint16_t * const  p_60);
static uint16_t  func_64(uint16_t ** p_65);




static int16_t  func_1(void)
{ 
    struct S1 l_2[4][7] = {{{8L,-5L,0UL,0xADB5D2300B631114LL,0UL,0L,0x969FL},{0x9AF2C67A95534FD3LL,0xEF5B506946CB4F5FLL,0xFDL,-10L,4294967295UL,0L,0x2C0EL},{0x41651328F6C74AA0LL,8L,0UL,0x87D0FA5166941FC9LL,0x57B5BF2DL,1L,0x47C4L},{0x41651328F6C74AA0LL,8L,0UL,0x87D0FA5166941FC9LL,0x57B5BF2DL,1L,0x47C4L},{0x9AF2C67A95534FD3LL,0xEF5B506946CB4F5FLL,0xFDL,-10L,4294967295UL,0L,0x2C0EL},{8L,-5L,0UL,0xADB5D2300B631114LL,0UL,0L,0x969FL},{0x8C2AFE2499E68FC7LL,0x6C7A88FF7673ED13LL,255UL,8L,9UL,0x89D68482L,0x8BBEL}},{{1L,3L,252UL,0xF8B243E5EC352115LL,0UL,5L,0x2617L},{0xFADACD7D393E75CBLL,-2L,5UL,0x017779A7B445ACEELL,0x1780EEC2L,-1L,1L},{0x927EED050B7F45B6LL,0x4F509E13C9534CE5LL,1UL,0x07293CC9D6C8400BLL,0xF3BEC767L,0L,1L},{0x927EED050B7F45B6LL,0x4F509E13C9534CE5LL,1UL,0x07293CC9D6C8400BLL,0xF3BEC767L,0L,1L},{0xFADACD7D393E75CBLL,-2L,5UL,0x017779A7B445ACEELL,0x1780EEC2L,-1L,1L},{1L,3L,252UL,0xF8B243E5EC352115LL,0UL,5L,0x2617L},{1L,1L,0UL,0x1F9C852071694A98LL,0UL,1L,0xA657L}},{{8L,-5L,0UL,0xADB5D2300B631114LL,0UL,0L,0x969FL},{0x9AF2C67A95534FD3LL,0xEF5B506946CB4F5FLL,0xFDL,-10L,4294967295UL,0L,0x2C0EL},{0x41651328F6C74AA0LL,8L,0UL,0x87D0FA5166941FC9LL,0x57B5BF2DL,1L,0x47C4L},{0x41651328F6C74AA0LL,8L,0UL,0x87D0FA5166941FC9LL,0x57B5BF2DL,1L,0x47C4L},{0x9AF2C67A95534FD3LL,0xEF5B506946CB4F5FLL,0xFDL,-10L,4294967295UL,0L,0x2C0EL},{8L,-5L,0UL,0xADB5D2300B631114LL,0UL,0L,0x969FL},{0x8C2AFE2499E68FC7LL,0x6C7A88FF7673ED13LL,255UL,8L,9UL,0x89D68482L,0x8BBEL}},{{1L,3L,252UL,0xF8B243E5EC352115LL,0UL,5L,0x2617L},{0xFADACD7D393E75CBLL,-2L,5UL,0x017779A7B445ACEELL,0x1780EEC2L,-1L,1L},{1L,1L,0UL,0x1F9C852071694A98LL,0UL,1L,0xA657L},{1L,1L,0UL,0x1F9C852071694A98LL,0UL,1L,0xA657L},{0x927EED050B7F45B6LL,0x4F509E13C9534CE5LL,1UL,0x07293CC9D6C8400BLL,0xF3BEC767L,0L,1L},{0x48967C74E2B78356LL,9L,247UL,0L,4294967295UL,0xF53C8CBFL,0x98BAL},{0x37B187B35F19716ELL,-5L,0xA5L,-10L,0UL,8L,7L}}};
    const uint64_t *l_1060 = &g_264;
    uint64_t *l_1061 = &g_264;
    uint16_t *l_1063 = &g_28;
    int32_t l_1065 = 1L;
    int32_t *l_1068[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_1079 = 0x637FL;
    int32_t l_1103 = 0xE5DA8848L;
    const int8_t l_1104 = 0x32L;
    int i, j;
    for (g_3 = 0; (g_3 <= 3); g_3 += 1)
    { 
        uint32_t l_8 = 0UL;
        int32_t *l_1057 = (void*)0;
        int32_t *l_1058 = &g_1059;
        uint64_t **l_1062 = &g_525;
        int32_t l_1071 = (-10L);
        int32_t l_1072 = 0x17BD136DL;
        int32_t l_1073 = 0xF374DEA3L;
        int32_t l_1074 = 0x11092221L;
        int32_t l_1076 = (-5L);
        int32_t l_1078[7] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
        uint32_t l_1080[2][3] = {{4294967289UL,4294967289UL,4294967289UL},{4294967295UL,4294967295UL,4294967295UL}};
        int i, j;
    }
    return (*g_190);
}



static int32_t  func_4(union U2  p_5)
{ 
    int64_t l_1039 = 0xE109BAF4D6101627LL;
    int32_t l_1040 = (-3L);
    int32_t *l_1041[5][6][6] = {{{(void*)0,&g_10,&l_1040,&g_10,(void*)0,&g_54[0]},{&g_10,(void*)0,&g_271[3],&g_10,(void*)0,&g_149.f5},{(void*)0,(void*)0,(void*)0,&g_149.f5,&g_271[0],&g_10},{&g_3,(void*)0,&g_54[0],&g_271[3],(void*)0,&g_3},{&g_10,(void*)0,&g_10,(void*)0,&g_271[2],&g_3},{&l_1040,&g_54[2],&l_1040,&l_1040,&l_1040,&l_1040}},{{&g_3,&g_3,&l_1040,&g_54[0],(void*)0,&g_10},{&g_54[0],&g_10,&g_10,&g_271[0],&g_271[2],&l_1040},{&g_54[0],&g_54[0],&g_10,&g_54[0],&g_3,&g_10},{&g_54[0],&g_54[0],&l_1040,&g_10,&g_10,&l_1040},{&g_10,&g_10,&l_1040,&g_10,&g_10,&g_3},{&g_271[3],&g_3,&g_10,(void*)0,&g_54[0],&g_3}},{{&g_54[0],&g_10,&g_54[0],&g_271[3],&g_54[0],&g_10},{(void*)0,(void*)0,(void*)0,(void*)0,&g_54[0],&g_149.f5},{&g_10,(void*)0,&g_271[3],(void*)0,&l_1040,&g_54[0]},{&g_3,(void*)0,&l_1040,&g_10,&g_54[0],&g_54[0]},{&l_1040,(void*)0,&g_3,(void*)0,&g_54[0],&g_271[3]},{&g_271[0],&g_10,(void*)0,(void*)0,&g_54[0],&g_54[0]}},{{&g_54[2],&g_3,(void*)0,(void*)0,&g_10,&g_10},{(void*)0,&g_10,&g_54[0],&g_54[0],&g_10,(void*)0},{&g_3,&g_54[0],&g_3,&l_1040,&g_3,(void*)0},{&g_54[0],&g_54[0],&g_3,&g_3,&g_271[2],&g_271[2]},{&g_54[0],&g_10,&g_3,&l_1040,(void*)0,&g_54[0]},{&g_3,&g_3,&g_54[0],&g_54[0],&l_1040,&g_10}},{{(void*)0,&g_54[2],&g_10,(void*)0,&g_271[2],&g_271[3]},{&g_54[2],(void*)0,&g_3,(void*)0,(void*)0,(void*)0},{&g_271[0],(void*)0,(void*)0,(void*)0,&g_271[0],&g_54[0]},{&l_1040,(void*)0,&g_3,&g_10,(void*)0,&g_3},{&g_3,(void*)0,&g_271[3],&g_271[3],(void*)0,&g_271[2]},{(void*)0,&g_54[0],&l_1040,&g_3,&g_10,&g_10}}};
    uint32_t l_1042[4][2][1] = {{{0xE3ECC2EDL},{0xB8426395L}},{{0xE3ECC2EDL},{0xB8426395L}},{{0xE3ECC2EDL},{0xB8426395L}},{{0xE3ECC2EDL},{0xB8426395L}}};
    int32_t l_1045 = 0x6D3E3882L;
    struct S1 **l_1046 = &g_908[0][0];
    struct S1 ***l_1047 = &g_907;
    struct S1 ***l_1048 = (void*)0;
    struct S1 **l_1050 = &g_908[2][0];
    struct S1 ***l_1049 = &l_1050;
    uint16_t *l_1051 = &g_28;
    uint16_t **l_1052 = &g_448;
    int32_t *l_1056 = &g_271[4];
    int i, j, k;
    --l_1042[2][1][0];
    l_1045 &= p_5.f2;
    l_1056 = (((((*l_1047) = l_1046) != ((*l_1049) = &g_908[2][0])) || (*g_525)) , func_39(((*l_1052) = l_1051), (!(safe_lshift_func_int16_t_s_u(((*g_190) = 1L), 1))), l_1051));
    return p_5.f0;
}



static union U2  func_6(uint64_t  p_7)
{ 
    uint32_t l_15 = 0UL;
    int32_t *l_25 = &g_10;
    struct S0 l_35 = {-5L,-8L};
    union U2 l_52 = {0x72L};
    uint16_t l_638 = 65527UL;
    int32_t l_662 = 0xEB94B5BFL;
    uint16_t **l_670 = (void*)0;
    int64_t l_708 = 1L;
    int32_t l_717 = (-4L);
    int32_t l_719 = 0x17FEB5D4L;
    int32_t l_722 = (-7L);
    int32_t l_723 = 0x3C4DA53FL;
    int32_t l_730 = 0x626EE81AL;
    int32_t l_731 = 0L;
    int32_t l_732 = (-1L);
    int32_t l_733 = 0xECA7F254L;
    uint32_t l_753 = 0UL;
    struct S1 *l_795 = &g_149;
    struct S1 **l_794 = &l_795;
    struct S1 l_820[6] = {{1L,0L,0xD5L,9L,0x6414B0FBL,-6L,-6L},{1L,0L,0xD5L,9L,0x6414B0FBL,-6L,-6L},{0x38BA40F46348CE16LL,0x5EDE84A85DF77804LL,252UL,0x55656FCBDE04F9B5LL,9UL,0x71238358L,0L},{1L,0L,0xD5L,9L,0x6414B0FBL,-6L,-6L},{1L,0L,0xD5L,9L,0x6414B0FBL,-6L,-6L},{0x38BA40F46348CE16LL,0x5EDE84A85DF77804LL,252UL,0x55656FCBDE04F9B5LL,9UL,0x71238358L,0L}};
    int8_t *l_853 = &g_445[2][1][0];
    int8_t *l_854[1][4];
    uint32_t *l_859 = &g_298.f4;
    int64_t *l_860[6][1] = {{&g_149.f1},{&g_149.f1},{&g_149.f0},{&g_149.f1},{&g_149.f1},{&g_149.f0}};
    struct S0 l_861 = {0L,0x120AEB9CL};
    int16_t l_874 = 0xE5A7L;
    uint32_t *l_875 = &g_443;
    int32_t l_877 = 0x52568E11L;
    int32_t l_878 = 0x6547E353L;
    int32_t l_879 = 1L;
    int32_t l_881 = 2L;
    int32_t l_882 = (-8L);
    int32_t l_883 = 3L;
    int32_t l_884 = 0L;
    int32_t l_885[2][5];
    uint32_t l_888 = 0x59E8411EL;
    int32_t l_987 = 0x35FB3110L;
    int32_t ****l_991 = &g_104[1];
    int64_t l_1023 = 0xFF976A0C359C185DLL;
    uint16_t ***l_1036 = &g_66[5][0][0];
    uint16_t ****l_1035 = &l_1036;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_854[i][j] = &g_607;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_885[i][j] = 0x792AD0A8L;
    }
lbl_1008:
    if (g_3)
    { 
        int32_t *l_9 = &g_10;
        int32_t l_628 = (-1L);
        union U2 l_630 = {255UL};
        int32_t *l_635 = &g_271[2];
        uint16_t *l_648[6] = {&g_28,&g_28,&g_28,&g_28,&g_28,&g_28};
        struct S1 *l_654 = &g_149;
        uint8_t * const l_705 = &g_149.f2;
        int32_t l_715 = (-1L);
        int32_t l_716 = 0L;
        int32_t l_724 = 1L;
        int32_t l_725[7] = {0L,0L,0L,0L,0L,0L,0L};
        uint32_t l_734 = 0x04FA053CL;
        struct S0 l_754 = {0x0171L,-1L};
        uint32_t l_811 = 0x159EEF31L;
        int16_t l_813 = 0x7C5CL;
        int i;
        if (((*l_9) = g_3))
        { 
            int32_t *l_11 = (void*)0;
            int32_t l_12 = 0xE77F5592L;
            int32_t *l_13 = (void*)0;
            int32_t *l_14 = &l_12;
            l_15--;
            for (l_15 = 0; l_15 < 1; l_15 += 1)
            {
                for (l_12 = 0; l_12 < 2; l_12 += 1)
                {
                    g_18[l_15][l_12] = 0xD933B151854E4619LL;
                }
            }
        }
        else
        { 
            uint32_t l_19 = 0xFA2E55FDL;
            int32_t l_29 = (-1L);
            uint8_t **l_629 = &g_146;
            union U2 l_634 = {2UL};
            uint16_t **l_671 = &l_648[2];
            int32_t l_718 = (-8L);
            int32_t l_720 = 8L;
            int32_t l_726 = 0L;
            int32_t l_728[5];
            int i;
            for (i = 0; i < 5; i++)
                l_728[i] = (-5L);
            g_10 ^= 1L;
            for (p_7 = 0; (p_7 <= 0); p_7 += 1)
            { 
                int32_t *l_26[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_26[i] = (void*)0;
            }
            ++l_638;
            for (g_298.f2 = (-24); (g_298.f2 != 24); g_298.f2 = safe_add_func_uint8_t_u_u(g_298.f2, 3))
            { 
                uint16_t *l_650 = &g_28;
                int32_t *l_652 = &g_54[0];
                struct S1 *l_653 = &g_149;
                int32_t l_709 = 0xF028E87BL;
                int32_t l_712 = (-1L);
                int32_t l_713 = 4L;
                int32_t l_714 = 1L;
                int32_t l_721 = 0x0D0A6A7FL;
                int32_t l_727 = 0x776EF8E8L;
                int32_t l_729[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_729[i] = (-1L);
            }
        }
        for (l_628 = 0; (l_628 == (-18)); l_628 = safe_sub_func_uint64_t_u_u(l_628, 7))
        { 
            int32_t * const ****l_748 = &g_745;
            int32_t * const ***l_751 = &g_746;
            int32_t * const ****l_750 = &l_751;
            union U2 l_752 = {252UL};
            uint32_t *l_755 = &l_630.f3;
            int64_t *l_775[3];
            int16_t l_779 = 0xE89DL;
            struct S1 l_808[6] = {{0x12420C99489EB08ALL,0L,0x12L,0L,4294967293UL,0x2ACE140DL,-9L},{4L,0x478EA1A92AEEA57BLL,250UL,-3L,0x61F2AFB9L,5L,9L},{4L,0x478EA1A92AEEA57BLL,250UL,-3L,0x61F2AFB9L,5L,9L},{0x12420C99489EB08ALL,0L,0x12L,0L,4294967293UL,0x2ACE140DL,-9L},{4L,0x478EA1A92AEEA57BLL,250UL,-3L,0x61F2AFB9L,5L,9L},{4L,0x478EA1A92AEEA57BLL,250UL,-3L,0x61F2AFB9L,5L,9L}};
            int i;
            for (i = 0; i < 3; i++)
                l_775[i] = &g_18[0][1];
        }
    }
    else
    { 
        uint64_t l_834[6][1];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_834[i][j] = 0UL;
        }
        (*l_25) |= (safe_div_func_uint64_t_u_u((*g_525), (safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((void*)0 == &p_7), ((*g_67) = (safe_mul_func_uint8_t_u_u(((*g_525) , (+l_834[4][0])), 0x3AL))))), 1UL)), 0x757AL)), g_93))));
    }
    l_731 = (safe_mul_func_uint8_t_u_u((((*l_25) , (safe_mul_func_uint16_t_u_u((p_7 != (safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((--(*g_146)), 6)) , ((safe_mul_func_int16_t_s_s(p_7, 0xF747L)) <= (*g_67))), (g_607 = ((*l_25) = ((*l_853) = (*l_25)))))), (safe_mul_func_int16_t_s_s((((((g_149.f1 &= (((*l_859) = (safe_rshift_func_uint8_t_u_s((0x725B915EL > g_149.f3), p_7))) == 5UL)) != 0x69981583E78A13F7LL) && (-1L)) >= p_7) < g_132), (*g_190))))), g_568)), p_7))), (*g_190)))) ^ g_404), l_820[1].f6));
    if (((l_861 , ((safe_add_func_uint16_t_u_u(p_7, (((*l_875) = ((safe_sub_func_int8_t_s_s(((((g_228.f0 |= (*g_190)) , (*g_788)) , (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((*g_289) , (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((g_356[3][5][0] > (*l_25)), (*l_25))), (*l_25)))), g_54[3])) , (*g_146)), l_874))) , g_271[2]), g_382.f0)) , (*l_25))) , (*g_190)))) <= 0x090AL)) == 0xC64B101527C84B29LL))
    { 
        int32_t *l_876[1];
        int16_t l_880 = (-6L);
        int32_t l_886 = 0xC3D537E6L;
        struct S1 l_898 = {0x8BBA231488B801EELL,-2L,0x94L,7L,4294967288UL,0x9856D4F3L,2L};
        uint16_t *l_909 = (void*)0;
        uint8_t *l_922 = &g_789.f2;
        uint8_t l_925 = 0x1AL;
        int16_t l_972 = 0x7DB9L;
        const union U2 l_977 = {248UL};
        uint8_t l_1032 = 246UL;
        int i;
        for (i = 0; i < 1; i++)
            l_876[i] = &l_722;
lbl_931:
        ++l_888;
        if ((!(safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((*g_289) , (safe_mod_func_uint32_t_u_u(g_149.f0, (l_898 , g_149.f2)))) == (*g_525)) , (((*g_190) = (*g_190)) , (((*l_25) &= (0x261643B5539F0824LL | p_7)) > (*g_525)))), p_7)), p_7))))
        { 
            int8_t l_903 = 0x35L;
            int32_t *l_923[4][7] = {{&g_271[1],&l_879,&g_271[1],&l_898.f5,&l_898.f5,&g_271[1],&l_879},{&g_54[2],&l_877,&l_882,&l_882,&l_877,&g_54[2],&l_877},{&g_271[1],&l_898.f5,&l_898.f5,&g_271[1],&l_879,&g_271[1],&l_898.f5},{&l_898.f5,&l_898.f5,&g_54[2],&l_882,&g_54[2],&l_898.f5,&l_898.f5}};
            int16_t l_948 = 0xEFFFL;
            int32_t **l_949 = &l_923[0][0];
            int32_t *l_950[6][7] = {{&l_733,&l_898.f5,&l_733,&l_733,&l_898.f5,&l_733,&l_733},{&l_722,&g_54[0],&g_271[3],&g_54[0],&l_722,&l_733,&l_722},{&l_898.f5,&l_733,&l_733,&l_898.f5,&l_733,&l_733,&l_898.f5},{&g_271[1],&g_54[0],&g_271[1],&l_731,&l_722,&l_731,&g_271[1]},{&l_898.f5,&l_898.f5,&l_883,&l_898.f5,&l_898.f5,&l_883,&l_898.f5},{&l_722,&l_731,&g_271[1],&g_54[0],&g_271[1],&l_731,&l_722}};
            uint8_t **l_956[7][2] = {{&g_146,&g_146},{&g_146,&g_146},{&g_146,&g_146},{&l_922,&l_922},{&l_922,&g_146},{&g_146,&g_146},{&g_146,&g_146}};
            uint16_t *l_971 = &g_28;
            uint16_t l_973 = 65535UL;
            struct S1 *l_980 = &l_820[4];
            int i, j;
            for (l_898.f1 = 1; (l_898.f1 >= 0); l_898.f1 -= 1)
            { 
                uint8_t l_928[1];
                int32_t l_947 = 1L;
                int i;
                for (i = 0; i < 1; i++)
                    l_928[i] = 250UL;
                for (l_732 = 0; (l_732 <= 1); l_732 += 1)
                { 
                    uint8_t *l_902 = &l_52.f0;
                    struct S1 ***l_904 = &l_794;
                    struct S1 ****l_905 = (void*)0;
                    int32_t l_924 = 1L;
                    l_903 = ((*g_146) <= ((*l_902) ^= ((!254UL) > ((safe_div_func_uint64_t_u_u(p_7, p_7)) == p_7))));
                    g_906 = l_904;
                    l_923[2][0] = func_39(l_909, (safe_lshift_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((((p_7 >= ((*g_788) , ((*g_146) && (*g_146)))) != (safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((p_7 , (safe_mod_func_int32_t_s_s((l_854[0][3] != l_922), p_7))) != 4UL), g_132)), 1)) & (*l_25)), (*g_146)))) , (*l_25)), 0xB5L)) , g_3) <= g_445[0][1][0]), 3)), l_909);
                    l_925--;
                    if (l_924)
                        break;
                }
                for (g_149.f0 = 1; (g_149.f0 >= 0); g_149.f0 -= 1)
                { 
                    --l_928[0];
                    if (l_15)
                        goto lbl_931;
                }
                for (l_52.f2 = 0; (l_52.f2 <= 1); l_52.f2 += 1)
                { 
                    int8_t *l_936[2][6][1] = {{{&g_607},{&g_661},{&g_607},{(void*)0},{&l_903},{(void*)0}},{{&g_607},{&g_661},{&g_607},{(void*)0},{&l_903},{(void*)0}}};
                    const struct S1 * const *l_945 = &g_289;
                    int32_t l_946 = 0x96098541L;
                    int i, j, k;
                    (*l_25) |= (&g_568 != (void*)0);
                    l_947 &= (safe_add_func_uint16_t_u_u((0xF6DA8186L <= (((((safe_rshift_func_int16_t_s_u((&g_607 != l_936[1][3][0]), ((safe_mod_func_uint32_t_u_u((p_7 < ((*g_67) |= (l_928[0] < ((((*l_25) = ((((*l_859) = ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u((p_7 != p_7), 1)) != 0x74CFA2E0L) , (void*)0) == l_945), (*g_146))), 4)) , g_10)) < 0L) < l_946)) == l_928[0]) & p_7)))), l_882)) || 1UL))) != 0x80B920E8L) >= p_7) , p_7) && p_7)), l_946));
                    l_948 ^= p_7;
                    if (l_898.f5)
                        goto lbl_931;
                }
            }
            l_950[5][4] = ((*l_949) = &l_884);
            for (l_878 = 0; (l_878 != (-16)); l_878 = safe_sub_func_uint32_t_u_u(l_878, 4))
            { 
                const int64_t l_960 = 0x54AC41251B1B05C6LL;
                uint16_t *l_964 = &g_28;
                if (p_7)
                    break;
                for (l_719 = 0; (l_719 <= 0); l_719 += 1)
                { 
                    uint8_t **l_955 = &l_922;
                    uint8_t ***l_954[5] = {&l_955,&l_955,&l_955,&l_955,&l_955};
                    int32_t l_959 = 1L;
                    uint16_t l_961 = 1UL;
                    uint16_t *l_962[7][6] = {{&l_961,&l_961,&l_638,&l_961,&l_961,&l_638},{&l_961,&l_961,&l_638,&l_961,&l_961,&l_638},{&l_961,&l_961,&l_638,&l_961,&l_961,&l_638},{&l_961,&l_961,&l_638,&l_961,&l_961,&l_638},{&l_961,&l_961,&l_638,&l_961,&l_961,&l_638},{&l_961,&l_961,&l_638,&l_961,&l_961,&l_638},{&l_961,&l_961,&l_638,&l_961,&l_961,&l_961}};
                    int32_t l_963 = 1L;
                    int i, j;
                    l_963 &= (0x93E5E4011BF4F86BLL > (((((*l_25) ^= ((+((((*l_853) = 0L) | ((l_956[1][0] = &g_146) != (void*)0)) >= (*g_525))) , ((g_382 , ((safe_lshift_func_uint16_t_u_s(((((l_959 ^= ((*g_67) = 4UL)) | l_960) , l_961) == 0xF26AD5BCL), 5)) <= 0xDC36445EL)) != l_960))) < p_7) , &g_190) == (void*)0));
                    l_923[(l_719 + 3)][(l_719 + 3)] = func_39(l_964, ((**g_907) , ((safe_mod_func_int32_t_s_s((&g_93 != ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((void*)0 == &l_898), (*l_25))), g_382.f1)) , (void*)0)), (*l_25))) ^ l_959)), l_971);
                }
                if (p_7)
                    break;
            }
            l_973--;
            if (((p_7 , (0x9B1CBA5AF3DB8F70LL <= (!(l_977 , (safe_mul_func_int16_t_s_s(((*g_190) = ((void*)0 == l_980)), p_7)))))) ^ ((*l_971) = (*g_448))))
            { 
                union U2 l_981[4][7] = {{{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL}},{{0xB3L},{0xB3L},{0xB3L},{0xB3L},{0xB3L},{0xB3L},{0xB3L}},{{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL}},{{0xB3L},{0xB3L},{0xB3L},{0xB3L},{0xB3L},{0xB3L},{0xB3L}}};
                int i, j;
                (*l_25) ^= (**l_949);
                return l_981[2][2];
            }
            else
            { 
                int64_t l_982 = 1L;
                int32_t l_983[3];
                uint32_t l_984 = 6UL;
                uint64_t l_988 = 0x1E2FC9AE61F9A817LL;
                int16_t l_997 = 0x8A0DL;
                int i;
                for (i = 0; i < 3; i++)
                    l_983[i] = 0xC0382082L;
                l_984++;
                --l_988;
                l_991 = &g_104[1];
                for (l_886 = 0; (l_886 == (-13)); l_886--)
                { 
                    union U2 l_994 = {1UL};
                    return l_994;
                }
                for (g_382.f0 = (-6); (g_382.f0 >= 1); g_382.f0 = safe_add_func_uint8_t_u_u(g_382.f0, 1))
                { 
                    uint8_t l_998 = 0xA5L;
                    (*l_795) = ((*l_980) = (*l_980));
                    l_998 = (l_997 = ((*l_25) = l_983[0]));
                }
            }
        }
        else
        { 
            int32_t *l_1019[6][3][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_149.f5,&g_54[0],&l_730,&g_149.f5}},{{(void*)0,(void*)0,&l_878,&g_54[0]},{(void*)0,(void*)0,&l_878,&l_878},{(void*)0,(void*)0,&l_730,(void*)0}},{{&g_149.f5,&g_271[0],(void*)0,&g_54[0]},{(void*)0,&g_54[0],(void*)0,(void*)0},{(void*)0,&g_54[0],&l_732,&g_54[0]}},{{&g_54[0],&g_271[0],&l_878,(void*)0},{(void*)0,(void*)0,(void*)0,&l_878},{&g_149.f5,(void*)0,&l_662,&g_54[0]}},{{&g_149.f5,(void*)0,(void*)0,&g_149.f5},{(void*)0,&g_54[0],&l_878,(void*)0},{&g_54[0],(void*)0,&l_732,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_149.f5,&g_54[0],&l_730,&g_149.f5}}};
            int i, j, k;
            if (((safe_mod_func_uint32_t_u_u((g_54[0] || (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((*g_525) <= 0xF1F359DB3E125BD1LL), (p_7 < g_661))) <= (safe_div_func_int16_t_s_s((!(p_7 != 0x8C7CC574L)), 0x8133L))), p_7))), g_789.f2)) && g_298.f3))
            { 
                uint8_t l_1009[5] = {0x4CL,0x4CL,0x4CL,0x4CL,0x4CL};
                int32_t l_1018 = 2L;
                int32_t **l_1020 = &g_101[4][1][2];
                int i;
                if ((p_7 & (-1L)))
                { 
                    int32_t **l_1012 = &l_876[0];
                    if (l_898.f3)
                        goto lbl_1008;
                    l_1009[3]--;
                    (*l_1012) = (**g_746);
                    (*l_1012) = (*l_1012);
                    g_1013[0] = p_7;
                }
                else
                { 
                    const int16_t **l_1014 = (void*)0;
                    const int16_t *l_1016 = &g_1017;
                    const int16_t **l_1015 = &l_1016;
                    l_1018 = (g_67 != ((*l_1015) = (void*)0));
                }
                (*l_1020) = l_1019[5][2][0];
            }
            else
            { 
                int32_t ***l_1030 = &g_105[0][6][3];
                union U2 l_1031 = {3UL};
                for (l_638 = 0; (l_638 <= 0); l_638 += 1)
                { 
                    int i;
                    if (l_15)
                        goto lbl_931;
                    (*l_25) = ((g_1013[l_638] && (*g_67)) & (safe_mul_func_int16_t_s_s(((p_7 >= (g_568 , l_1023)) <= ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((g_149.f3 |= ((void*)0 == l_1030)), 0x5B4E43A828750141LL)), 0xDEL)), 5L)) ^ p_7)), g_1013[l_638])));
                    (**g_907) = (***g_906);
                    return l_1031;
                }
            }
        }
        --l_1032;
    }
    else
    { 
        return l_52;
    }
    l_1035 = l_1035;
    for (l_732 = 3; (l_732 <= (-14)); --l_732)
    { 
        return (*g_788);
    }
    return l_52;
}



static int16_t  func_30(struct S0  p_31, int32_t  p_32, int32_t * p_33, int32_t * p_34)
{ 
    const int32_t l_487 = 3L;
    struct S1 *l_495 = &g_149;
    int32_t l_498[2][3][5] = {{{6L,6L,6L,6L,6L},{0xF3955A72L,0xF3955A72L,0xF3955A72L,0xF3955A72L,0xF3955A72L},{6L,6L,6L,6L,6L}},{{0xF3955A72L,0xF3955A72L,0xF3955A72L,0xF3955A72L,0xF3955A72L},{6L,6L,6L,6L,6L},{0xF3955A72L,0xF3955A72L,0xF3955A72L,0xF3955A72L,0xF3955A72L}}};
    uint32_t l_520[5];
    uint8_t l_552[4][5] = {{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{0UL,0UL,0UL,0UL,0UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{0UL,0UL,0UL,0UL,0UL}};
    uint32_t l_596 = 4294967295UL;
    uint16_t *l_599 = &g_28;
    int32_t *l_602 = &g_149.f5;
    int8_t *l_605 = &g_445[1][0][0];
    int8_t *l_606 = &g_607;
    uint8_t *l_614 = &l_552[1][4];
    uint64_t l_621 = 0x38DA857F18EBCE5ELL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_520[i] = 0x2DEF34DEL;
    for (g_379 = 0; (g_379 < 29); g_379++)
    { 
        uint64_t l_480[5][1];
        struct S1 l_533 = {0xE33C0242BD374DB7LL,0x82C3064F5519B99CLL,0xEEL,0x2186F8E8984056E9LL,4294967295UL,-5L,0x37FCL};
        struct S1 **l_567 = &l_495;
        uint8_t *l_580 = &g_149.f2;
        int16_t l_581 = 0xEBBEL;
        uint16_t *l_600 = &g_28;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_480[i][j] = 0x262A5B256BE8CB8BLL;
        }
        for (g_404 = 0; (g_404 == 9); g_404 = safe_add_func_int16_t_s_s(g_404, 7))
        { 
            uint32_t *l_476 = (void*)0;
            int8_t *l_479[7][2][7] = {{{&g_445[0][1][0],&g_445[0][0][0],(void*)0,&g_445[0][1][0],(void*)0,&g_445[0][1][0],&g_445[0][1][0]},{&g_445[0][0][0],&g_445[0][1][0],&g_445[3][0][0],&g_445[0][1][0],&g_445[0][1][0],&g_445[3][1][0],&g_445[3][1][0]}},{{&g_445[3][0][0],&g_445[0][1][0],(void*)0,&g_445[0][1][0],&g_445[3][0][0],&g_445[0][1][0],&g_445[0][1][0]},{&g_445[0][1][0],&g_445[0][1][0],&g_445[1][1][0],&g_445[0][0][0],&g_445[0][1][0],&g_445[0][0][0],&g_445[0][1][0]}},{{&g_445[0][1][0],&g_445[0][1][0],&g_445[0][1][0],&g_445[0][1][0],(void*)0,(void*)0,&g_445[0][0][0]},{&g_445[0][1][0],&g_445[0][1][0],&g_445[0][1][0],&g_445[0][1][0],&g_445[0][1][0],&g_445[0][1][0],&g_445[0][0][0]}},{{&g_445[0][1][0],&g_445[1][1][0],&g_445[0][0][0],&g_445[0][1][0],&g_445[0][0][0],&g_445[0][1][0],&g_445[0][1][0]},{(void*)0,&g_445[0][1][0],&g_445[0][1][0],&g_445[1][1][0],&g_445[1][1][0],&g_445[0][1][0],&g_445[0][1][0]}},{{&g_445[0][1][0],&g_445[3][1][0],(void*)0,(void*)0,&g_445[1][1][0],&g_445[0][1][0],&g_445[0][1][0]},{&g_445[0][1][0],&g_445[0][1][0],&g_445[3][1][0],&g_445[3][0][0],&g_445[0][0][0],&g_445[0][0][0],(void*)0}},{{&g_445[0][1][0],&g_445[0][1][0],(void*)0,(void*)0,&g_445[0][1][0],&g_445[0][1][0],&g_445[0][1][0]},{&g_445[3][1][0],(void*)0,(void*)0,&g_445[1][1][0],&g_445[0][1][0],&g_445[0][1][0],&g_445[0][1][0]}},{{&g_445[0][1][0],&g_445[0][0][0],&g_445[3][1][0],&g_445[0][1][0],&g_445[0][0][0],&g_445[0][1][0],&g_445[0][0][0]},{&g_445[0][1][0],(void*)0,(void*)0,&g_445[0][1][0],&g_445[0][1][0],&g_445[1][1][0],&g_445[0][0][0]}}};
            int32_t l_481 = 0L;
            int32_t *l_482 = &g_149.f5;
            struct S1 *l_497 = &g_149;
            struct S1 **l_496 = &l_497;
            uint8_t **l_499 = &g_146;
            union U2 *l_512[5] = {&g_298,&g_298,&g_298,&g_298,&g_298};
            uint16_t ** const l_518 = (void*)0;
            int32_t l_551[4];
            int32_t **l_601[1][6][7] = {{{&g_101[5][1][2],&g_101[3][1][1],&g_101[5][1][2],&l_482,&g_101[5][1][2],&g_101[3][1][1],&g_101[5][1][2]},{(void*)0,&g_101[0][1][1],&g_101[0][1][1],(void*)0,&l_482,&g_101[5][1][2],&g_101[5][1][2]},{&l_482,&g_101[3][1][1],&g_101[5][1][2],&g_101[3][1][1],&l_482,&g_101[3][1][1],&g_101[5][1][2]},{&l_482,(void*)0,&g_101[0][1][1],&g_101[0][1][1],(void*)0,&l_482,&g_101[5][1][2]},{&g_101[5][1][2],&l_482,&g_101[5][1][2],&g_101[3][1][1],&g_101[5][1][2],&l_482,&g_101[5][1][2]},{&l_482,&g_101[0][1][1],&g_101[5][1][2],(void*)0,(void*)0,&g_101[5][1][2],&g_101[0][1][1]}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_551[i] = 4L;
            (*l_482) = ((safe_mod_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s((((void*)0 == l_476) == (p_31.f1 || (g_228.f0 <= (((*p_34) ^= ((p_31.f1 <= 0x0AL) & ((l_480[0][0] = (-6L)) & 0UL))) && 0UL)))), l_481)), g_28)) < l_481), p_32)) <= g_382.f0);
            if ((safe_rshift_func_uint16_t_u_u(((*g_448) ^= 0x8EEFL), (((l_498[0][1][4] = (&g_356[3][5][0] == ((safe_add_func_uint8_t_u_u(l_487, (0xF8CCL | ((safe_div_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(l_487, (((safe_unary_minus_func_int16_t_s((((l_495 != ((*l_496) = &g_149)) < l_487) >= p_31.f0))) != p_31.f1) , 0x885633D2C4245C47LL))), 0xB6D2312B999E2896LL)) != l_487)))) , &g_356[3][5][0]))) < 0xE9L) == p_31.f1))))
            { 
                uint8_t **l_500 = &g_146;
                union U2 * const l_513 = &g_298;
                int32_t l_519 = 0L;
                struct S1 l_530 = {0x8B41E0CF93D0F770LL,-4L,0x71L,0L,1UL,-1L,-7L};
                l_500 = l_499;
                if ((*p_33))
                    continue;
                for (g_298.f2 = 0; (g_298.f2 > 50); ++g_298.f2)
                { 
                    uint64_t l_511 = 1UL;
                    int64_t *l_521 = &g_149.f3;
                    int64_t *l_522 = &g_149.f1;
                    (*p_33) = ((l_519 = (((*l_522) ^= ((*l_521) |= (safe_add_func_int64_t_s_s((((1L ^ (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(l_511, (((l_512[4] != l_513) != (safe_sub_func_int32_t_s_s((p_32 & (p_31.f1 > ((void*)0 == l_518))), g_271[0]))) ^ l_519))) , p_31.f0), l_520[2])), 5)) > l_519) == l_498[0][1][4])) < g_356[3][5][0]) , 0xA1878EA7BEC90D8BLL), 0x41344BDE683E3491LL)))) ^ g_298.f0)) <= l_480[0][0]);
                    (*p_34) ^= ((247UL != (safe_mul_func_uint8_t_u_u(((void*)0 == p_34), (g_93 = ((&g_264 == (g_525 = &g_264)) < (l_480[0][0] | (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_31.f1, 5)), 4)))))))) || (*l_482));
                    if ((*p_34))
                        continue;
                    (**l_496) = l_530;
                }
                for (g_443 = 0; (g_443 <= 18); g_443++)
                { 
                    struct S1 l_534 = {0x090DA66D389AA2A9LL,0L,0x1AL,0xD3A097CA5D8E1E6ELL,1UL,-1L,0x8A5FL};
                    l_534 = l_533;
                    if (l_530.f3)
                        break;
                }
            }
            else
            { 
                struct S1 l_535 = {0L,9L,0UL,0x10E639B5CB7AC97ELL,0x16481224L,0x6CE22E09L,0x669EL};
                int32_t l_595 = 0xF2087A84L;
                l_535 = ((**l_496) = l_533);
                if ((safe_sub_func_int32_t_s_s(((((((((void*)0 == g_448) != 7UL) >= l_520[2]) > (8UL <= ((p_31.f0 , ((((g_149.f2 = (((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(l_533.f3, 7)) & 0xCEL), 14)) != (*l_482)) ^ (*p_33))) >= 1UL) & 0xA088L) || p_31.f0)) & l_533.f6))) < (*g_525)) | 0x73E7FA98D74EBE61LL) , (*p_33)), 0L)))
                { 
                    int32_t *l_542 = (void*)0;
                    int32_t *l_543 = &g_149.f5;
                    int32_t *l_544 = &l_498[0][1][4];
                    int32_t *l_545 = &l_481;
                    int32_t *l_546 = &l_498[0][1][4];
                    int32_t *l_547 = &g_54[0];
                    int32_t *l_548 = (void*)0;
                    int32_t *l_549 = (void*)0;
                    int32_t *l_550[1][6][2] = {{{(void*)0,&l_481},{(void*)0,&g_271[0]},{&l_481,&g_271[0]},{(void*)0,&l_481},{(void*)0,(void*)0},{(void*)0,&l_481}}};
                    int i, j, k;
                    if (l_535.f3)
                        break;
                    l_552[1][2]++;
                    (*p_33) ^= (l_498[0][1][4] = (((~(((*g_190) = (l_535.f2 <= p_31.f1)) || ((p_31.f1 >= (&l_497 == &g_289)) | (((safe_rshift_func_uint16_t_u_s((0x4E11L == ((*g_190) &= (((*l_545) && 0x14F8B904B542BCD4LL) != 0L))), l_535.f0)) ^ g_379) <= 0x0C211522L)))) == l_535.f0) , 1L));
                    (*l_482) = ((((0xC5DCL >= (*l_544)) && (0x4098D3B58977D4DELL < (-6L))) , 9L) , (safe_mul_func_int8_t_s_s((l_535.f5 = ((+((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((&l_495 != l_567) | g_568), l_498[0][2][4])), (*g_190))) ^ p_32)) >= (*p_33))), p_31.f0)));
                    (*l_546) &= (0x3B3D5165L && (safe_add_func_uint16_t_u_u(0xE8A6L, (safe_rshift_func_uint8_t_u_s(((*g_190) ^ 1UL), (safe_sub_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((!((g_149.f6 == ((p_31.f0 & (l_580 != (void*)0)) == p_31.f0)) & 9L)) && l_581), g_298.f2)), (*l_545))) , (*p_34)) || 0x72CF9761L), 0xA962AFD454BA3135LL)))))));
                }
                else
                { 
                    uint64_t *l_586 = &l_480[3][0];
                    uint8_t *l_592[6][1][1] = {{{(void*)0}},{{(void*)0}},{{&g_93}},{{(void*)0}},{{(void*)0}},{{&g_93}}};
                    int32_t l_593[4] = {5L,5L,5L,5L};
                    int32_t *l_594[6][7] = {{&g_149.f5,(void*)0,&g_149.f5,(void*)0,&g_149.f5,(void*)0,&g_149.f5},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_149.f5,(void*)0,&g_149.f5,(void*)0,&g_149.f5,(void*)0,&g_149.f5},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_149.f5,(void*)0,&g_149.f5,(void*)0,&g_149.f5,(void*)0,&g_149.f5},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j, k;
                    l_498[0][1][2] ^= ((safe_mod_func_int8_t_s_s((safe_div_func_int64_t_s_s(((void*)0 != l_586), (safe_add_func_int64_t_s_s((-1L), 0xCB663AD350ADCAE9LL)))), (l_593[1] ^= ((*l_580) ^= (!(safe_mod_func_uint32_t_u_u((p_31.f1 ^ p_32), 0x888B904AL))))))) == (*l_482));
                    ++l_596;
                    return p_32;
                }
            }
            l_602 = func_39(l_599, ((*l_482) < g_271[1]), l_600);
        }
        return p_31.f0;
    }
    (*p_34) &= (((*l_606) = ((*l_605) = (safe_div_func_int32_t_s_s((-2L), (*l_602))))) > ((*l_602) >= ((safe_add_func_uint64_t_u_u((--(*g_525)), (safe_rshift_func_uint8_t_u_s((++(*l_614)), 7)))) , (safe_lshift_func_int8_t_s_u((1UL | (safe_mod_func_uint8_t_u_u(g_54[0], p_31.f1))), ((*l_602) == l_621))))));
    for (g_382.f0 = 0; (g_382.f0 != (-10)); g_382.f0 = safe_sub_func_uint32_t_u_u(g_382.f0, 5))
    { 
        int32_t *l_624[7][3][4] = {{{&g_271[0],(void*)0,(void*)0,&g_271[0]},{(void*)0,&g_271[0],(void*)0,(void*)0},{&g_271[0],&g_271[0],&g_271[2],&g_271[0]}},{{&g_271[0],(void*)0,(void*)0,(void*)0},{&g_271[2],(void*)0,&g_271[2],&g_271[2]},{(void*)0,(void*)0,&g_271[0],(void*)0}},{{(void*)0,&g_271[2],&g_271[2],(void*)0},{&g_271[2],(void*)0,&g_271[2],&g_271[2]},{(void*)0,(void*)0,&g_271[0],(void*)0}},{{(void*)0,&g_271[2],&g_271[2],(void*)0},{&g_271[2],(void*)0,&g_271[2],&g_271[2]},{(void*)0,(void*)0,&g_271[0],(void*)0}},{{(void*)0,&g_271[2],&g_271[2],(void*)0},{&g_271[2],(void*)0,&g_271[2],&g_271[2]},{(void*)0,(void*)0,&g_271[0],(void*)0}},{{(void*)0,&g_271[2],&g_271[2],(void*)0},{&g_271[2],(void*)0,&g_271[2],&g_271[2]},{(void*)0,(void*)0,&g_271[0],(void*)0}},{{(void*)0,&g_271[2],&g_271[2],(void*)0},{&g_271[2],(void*)0,&g_271[2],&g_271[2]},{(void*)0,(void*)0,&g_271[0],(void*)0}}};
        uint64_t l_625 = 1UL;
        int i, j, k;
        ++l_625;
    }
    return (*l_602);
}



static int32_t * func_39(uint16_t * p_40, int16_t  p_41, uint16_t * p_42)
{ 
    int32_t *l_449 = (void*)0;
    int32_t *l_450[6] = {&g_149.f5,&g_10,&g_10,&g_149.f5,&g_10,&g_10};
    uint8_t l_451 = 255UL;
    int32_t *l_455[5][6][3] = {{{&g_54[3],&g_54[0],(void*)0},{&g_10,&g_271[1],&g_271[1]},{&g_54[1],&g_271[0],(void*)0},{(void*)0,(void*)0,&g_271[0]},{(void*)0,&g_54[3],&g_54[0]},{&g_54[1],&g_271[1],&g_149.f5}},{{&g_10,&g_54[3],&g_54[0]},{&g_54[3],(void*)0,&g_54[0]},{&g_3,&g_271[0],&g_149.f5},{&g_271[2],&g_271[1],&g_54[0]},{&g_3,&g_54[0],&g_271[0]},{&g_54[3],&g_54[0],(void*)0}},{{&g_10,&g_271[1],&g_271[1]},{&g_54[1],&g_271[0],(void*)0},{(void*)0,(void*)0,&g_271[0]},{(void*)0,&g_54[3],&g_54[0]},{&g_54[1],&g_271[1],&g_149.f5},{&g_10,&g_54[3],&g_54[0]}},{{&g_54[3],(void*)0,&g_54[0]},{&g_3,&g_271[0],&g_149.f5},{&g_271[2],&g_271[1],&g_54[0]},{&g_3,&g_54[0],&g_271[0]},{&g_54[3],&g_54[0],(void*)0},{&g_10,&g_271[1],&g_271[1]}},{{&g_54[1],&g_271[0],(void*)0},{(void*)0,(void*)0,&g_271[0]},{(void*)0,&g_54[3],&g_54[0]},{&g_54[1],&g_271[1],&g_149.f5},{&g_10,&g_54[3],&g_54[0]},{&g_54[3],(void*)0,&g_54[0]}}};
    int32_t **l_456[7][5][7] = {{{&g_101[0][1][1],&l_455[3][3][1],&l_450[5],&l_455[3][1][2],&g_101[4][1][2],&l_455[3][0][0],(void*)0},{&l_455[3][5][2],&l_455[3][3][1],&l_455[2][1][0],&g_101[1][1][2],(void*)0,(void*)0,(void*)0},{&l_449,&l_450[0],&l_450[5],&l_455[2][4][2],&g_101[5][1][2],&g_101[1][0][1],&l_455[2][1][0]},{&l_455[3][0][0],&l_450[2],&g_101[5][1][2],(void*)0,(void*)0,&g_101[5][1][1],&g_101[5][1][2]},{&l_449,(void*)0,&l_449,&l_455[3][0][0],(void*)0,&l_455[3][0][0],&l_449}},{{&l_455[3][0][0],&l_455[3][0][0],(void*)0,&l_450[3],&l_455[4][1][0],&l_450[0],&l_450[5]},{&l_450[5],(void*)0,&l_455[3][3][1],(void*)0,&l_455[3][4][0],(void*)0,(void*)0},{&g_101[2][0][0],&g_101[5][1][2],&g_101[5][1][2],&l_449,&l_455[4][1][0],&g_101[5][1][2],&g_101[4][1][1]},{&l_449,&l_450[5],&l_449,&g_101[5][1][2],(void*)0,&g_101[1][0][1],&g_101[5][1][2]},{&l_455[3][0][0],&l_455[3][4][0],&g_101[5][1][2],&l_455[1][2][0],&g_101[3][1][2],&g_101[4][1][2],&l_455[3][5][2]}},{{&l_450[0],&l_450[5],&l_449,&l_449,&l_450[3],(void*)0,(void*)0},{&l_455[3][3][1],(void*)0,&l_455[1][2][0],&l_450[0],&l_449,&l_450[2],&g_101[1][1][2]},{(void*)0,&l_455[3][3][1],(void*)0,(void*)0,(void*)0,&l_450[5],&l_449},{(void*)0,&l_455[4][1][0],&g_101[1][1][0],(void*)0,(void*)0,&g_101[5][1][2],&g_101[1][0][1]},{&l_455[3][3][1],&g_101[5][1][2],&g_101[5][0][1],&g_101[5][1][2],&l_450[0],&l_455[1][2][0],(void*)0}},{{&l_450[0],&g_101[5][1][2],(void*)0,&g_101[1][1][0],&g_101[5][1][2],&g_101[4][1][1],&l_450[5]},{&l_455[3][0][0],&g_101[4][1][2],&l_455[2][5][2],&l_450[5],&l_450[5],&l_455[2][5][2],&g_101[4][1][2]},{&l_449,&g_101[5][1][2],&l_450[5],&g_101[0][1][1],(void*)0,(void*)0,&g_101[5][1][2]},{&g_101[2][0][0],&l_450[5],&l_455[3][0][0],&g_101[5][1][2],&g_101[0][1][2],(void*)0,&g_101[3][0][1]},{&l_450[5],(void*)0,&g_101[5][1][2],&g_101[0][1][1],(void*)0,&l_455[3][0][0],(void*)0}},{{&l_455[3][0][0],&g_101[3][0][1],&l_450[5],&l_450[5],&g_101[5][1][2],(void*)0,(void*)0},{&l_449,&l_450[3],&g_101[5][1][2],&g_101[1][1][0],&g_101[3][0][1],&g_101[5][1][2],&l_449},{&g_101[5][1][2],(void*)0,&l_450[0],&g_101[5][1][2],&g_101[5][1][2],&g_101[5][1][2],&l_455[3][0][0]},{&g_101[4][1][2],&g_101[1][1][2],&l_455[3][0][0],(void*)0,&l_450[5],&l_455[0][0][1],&g_101[5][1][2]},{&g_101[5][1][1],&g_101[5][1][2],&l_450[5],(void*)0,(void*)0,&g_101[5][1][2],&g_101[5][1][2]}},{{(void*)0,&g_101[5][1][2],&g_101[5][1][2],&l_450[0],&g_101[5][1][2],(void*)0,&l_455[3][0][0]},{(void*)0,(void*)0,&g_101[5][1][2],&l_449,&l_450[5],&l_455[3][1][2],&l_449},{&g_101[1][1][2],(void*)0,(void*)0,&l_455[1][2][0],(void*)0,(void*)0,(void*)0},{(void*)0,&g_101[5][1][2],&l_455[2][4][2],&g_101[5][1][2],&l_455[2][4][2],&g_101[5][1][2],(void*)0},{&g_101[5][1][2],&l_450[5],&l_450[2],&l_449,&l_455[3][0][0],&l_455[3][0][0],&g_101[3][0][1]}},{{&g_101[5][1][2],&l_449,&g_101[5][1][2],(void*)0,&l_449,&l_449,&g_101[5][1][2]},{&g_101[1][1][2],&l_450[0],&l_450[5],&l_449,&l_449,&l_450[5],(void*)0},{(void*)0,(void*)0,&g_101[5][1][2],&l_449,&l_450[0],&l_450[5],&g_101[4][1][1]},{&g_101[0][1][1],&g_101[1][1][0],&l_449,(void*)0,&l_450[3],(void*)0,&l_455[3][0][0]},{&g_101[1][0][1],&g_101[2][0][0],&g_101[5][1][2],&l_455[3][1][2],&g_101[5][1][2],&l_455[3][4][0],&g_101[5][1][2]}}};
    int32_t *l_457 = &g_54[0];
    int32_t *** const * const l_458[5] = {&g_104[5],&g_104[5],&g_104[5],&g_104[5],&g_104[5]};
    int8_t l_459 = 0x67L;
    int16_t l_460[2];
    uint32_t l_461 = 4294967287UL;
    int32_t *l_464 = &g_3;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_460[i] = (-3L);
    ++l_451;
    l_459 = (!(p_41 != (p_41 == ((l_450[5] == (l_457 = l_455[3][0][0])) ^ (l_458[4] != &g_104[2])))));
    --l_461;
    return l_464;
}



static uint16_t * func_46(int32_t  p_47, int16_t  p_48, int32_t * p_49, union U2  p_50)
{ 
    uint16_t * const l_61[1] = {&g_28};
    struct S0 l_124 = {2L,0xE09C6F5EL};
    int32_t l_135[5][5][2] = {{{(-1L),0xC59A757EL},{5L,(-1L)},{0x0D512875L,0x3B916563L},{0x0D512875L,(-1L)},{5L,0xC59A757EL}},{{(-1L),0x631F0060L},{0L,(-6L)},{0xC59A757EL,0x563165A2L},{0x563165A2L,0x563165A2L},{0xC59A757EL,(-6L)}},{{0L,0x631F0060L},{(-1L),0xC59A757EL},{5L,(-1L)},{0x0D512875L,0x3B916563L},{0x0D512875L,(-1L)}},{{5L,0xC59A757EL},{(-1L),0x631F0060L},{0L,(-6L)},{0xC59A757EL,0x563165A2L},{0x563165A2L,0x563165A2L}},{{0xC59A757EL,(-6L)},{0L,0x631F0060L},{(-1L),0xC59A757EL},{5L,(-1L)},{0x0D512875L,0x3B916563L}}};
    uint8_t *l_144 = (void*)0;
    struct S1 l_150 = {-2L,0x2926711C342DAB2CLL,0xD0L,0x75CF62B27B7FBD40LL,3UL,-10L,0x70B8L};
    uint32_t l_165[2][5][5] = {{{4294967295UL,4UL,4294967293UL,4UL,4294967295UL},{0xC723BD2CL,4294967295UL,0x1C7F1A52L,4294967295UL,0xC723BD2CL},{4294967295UL,4UL,4294967293UL,4UL,4294967295UL},{0xC723BD2CL,4294967295UL,0x1C7F1A52L,4294967295UL,0xC723BD2CL},{4294967295UL,4UL,4294967293UL,4UL,4294967295UL}},{{0xC723BD2CL,4294967295UL,0x1C7F1A52L,4294967295UL,0xC723BD2CL},{4294967295UL,4UL,4294967293UL,4UL,4294967295UL},{0xC723BD2CL,4294967295UL,0x1C7F1A52L,4294967295UL,0xC723BD2CL},{4294967295UL,4UL,4294967293UL,4UL,4294967295UL},{0xC723BD2CL,4294967295UL,0x1C7F1A52L,4294967295UL,0xC723BD2CL}}};
    int32_t **l_178 = &g_101[5][0][1];
    uint16_t *l_183 = &g_28;
    int16_t *l_192[7] = {&l_124.f0,&l_124.f0,&l_124.f0,&l_124.f0,&l_124.f0,&l_124.f0,&l_124.f0};
    int16_t **l_191 = &l_192[2];
    uint32_t l_211 = 0xF2B1BE90L;
    uint8_t l_218 = 4UL;
    struct S1 *l_231 = &g_149;
    uint64_t l_323[6] = {0UL,0xF34E97EDA3FD9641LL,0UL,0UL,0xF34E97EDA3FD9641LL,0UL};
    uint16_t l_364 = 65534UL;
    struct S0 *l_381 = &g_382;
    uint32_t l_421[1];
    uint16_t *l_446 = &l_364;
    uint16_t *l_447 = &l_364;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_421[i] = 0xD667C65CL;
    if (p_50.f0)
    { 
        int32_t *l_53 = &g_54[0];
        (*l_53) = 6L;
    }
    else
    { 
        uint8_t l_153 = 0UL;
        uint16_t **l_160[3];
        int32_t **l_179 = &g_101[0][0][1];
        int16_t *l_180 = &g_149.f6;
        struct S0 l_181 = {-4L,0xBC5810A8L};
        int32_t *l_182[1][6];
        int i, j;
        for (i = 0; i < 3; i++)
            l_160[i] = &g_67;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_182[i][j] = &g_54[1];
        }
        for (p_50.f4 = (-22); (p_50.f4 != 6); p_50.f4 = safe_add_func_int8_t_s_s(p_50.f4, 2))
        { 
            int64_t *l_131 = &g_132;
            int32_t l_133 = 0L;
            int16_t *l_134[6][5][3] = {{{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,(void*)0},{&l_124.f0,&l_124.f0,(void*)0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0}},{{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,(void*)0,&l_124.f0}},{{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,(void*)0},{&l_124.f0,&l_124.f0,(void*)0}},{{(void*)0,&l_124.f0,(void*)0},{(void*)0,&l_124.f0,(void*)0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,(void*)0,&l_124.f0}},{{&l_124.f0,(void*)0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0}},{{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0},{&l_124.f0,&l_124.f0,&l_124.f0}}};
            int64_t l_148 = 0x666DC25B180E9687LL;
            int32_t l_163 = 0xDB7C0C45L;
            uint16_t *l_169 = (void*)0;
            int i, j, k;
            if ((l_135[0][3][0] = ((safe_add_func_uint16_t_u_u(func_59(l_61[0]), (safe_add_func_uint32_t_u_u((0x0E13958EBF8EC998LL ^ (((l_124 , (p_48 = ((p_50.f0 > l_124.f0) | ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((~(safe_unary_minus_func_int64_t_s(((*l_131) = p_48)))) , 8UL) != 4294967290UL), g_10)), l_133)) && 1UL)))) > 0UL) , g_120[0])), p_50.f0)))) < (-1L))))
            { 
                struct S1 l_138[7] = {{0xD7285B31AE2F7C88LL,0xFDEE5F14FE5D68E8LL,0xC7L,0x1D3E55B493591366LL,4294967295UL,0xC8139463L,0x2912L},{0xD7285B31AE2F7C88LL,0xFDEE5F14FE5D68E8LL,0xC7L,0x1D3E55B493591366LL,4294967295UL,0xC8139463L,0x2912L},{0xD7285B31AE2F7C88LL,0xFDEE5F14FE5D68E8LL,0xC7L,0x1D3E55B493591366LL,4294967295UL,0xC8139463L,0x2912L},{0xD7285B31AE2F7C88LL,0xFDEE5F14FE5D68E8LL,0xC7L,0x1D3E55B493591366LL,4294967295UL,0xC8139463L,0x2912L},{0xD7285B31AE2F7C88LL,0xFDEE5F14FE5D68E8LL,0xC7L,0x1D3E55B493591366LL,4294967295UL,0xC8139463L,0x2912L},{0xD7285B31AE2F7C88LL,0xFDEE5F14FE5D68E8LL,0xC7L,0x1D3E55B493591366LL,4294967295UL,0xC8139463L,0x2912L},{0xD7285B31AE2F7C88LL,0xFDEE5F14FE5D68E8LL,0xC7L,0x1D3E55B493591366LL,4294967295UL,0xC8139463L,0x2912L}};
                uint8_t *l_142 = &l_138[2].f2;
                int i;
                for (l_133 = 9; (l_133 < (-23)); l_133 = safe_sub_func_uint64_t_u_u(l_133, 4))
                { 
                    struct S1 *l_139 = &l_138[2];
                    uint8_t **l_143 = &l_142;
                    uint8_t **l_145 = &l_144;
                    int32_t *l_147[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_147[i][j] = &l_135[3][0][0];
                    }
                    l_148 = (p_50.f0 || (((*l_139) = l_138[2]) , (safe_rshift_func_uint16_t_u_s((((*l_143) = l_142) == (g_146 = ((*l_145) = l_144))), g_18[0][0]))));
                }
            }
            else
            { 
                struct S1 l_151[4] = {{2L,0xFE13DD6524C08352LL,0x72L,0xB52A324362DD0B5ALL,1UL,0x70BDA24AL,9L},{2L,0xFE13DD6524C08352LL,0x72L,0xB52A324362DD0B5ALL,1UL,0x70BDA24AL,9L},{2L,0xFE13DD6524C08352LL,0x72L,0xB52A324362DD0B5ALL,1UL,0x70BDA24AL,9L},{2L,0xFE13DD6524C08352LL,0x72L,0xB52A324362DD0B5ALL,1UL,0x70BDA24AL,9L}};
                struct S1 *l_152 = &l_151[0];
                int32_t *l_168 = &l_163;
                int i;
                l_150 = g_149;
                (*l_152) = l_151[0];
                if ((l_135[0][3][0] |= (l_153 <= ((0x86L >= (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_150.f4, 8)), (g_3 | (((((((void*)0 != l_160[2]) , ((void*)0 != &g_132)) >= 65535UL) > p_50.f0) & 0L) || p_50.f4)))), g_120[0]))) ^ 0xB6E5B2E2L))))
                { 
                    uint16_t *l_161 = &g_28;
                    return l_161;
                }
                else
                { 
                    int32_t *l_162 = &g_54[0];
                    int32_t *l_164[3][3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_164[i][j] = &l_163;
                    }
                    (*l_162) = 0xE9E258E6L;
                    l_165[1][0][2]++;
                    if (l_165[1][0][2])
                        break;
                    l_168 = (void*)0;
                    return l_169;
                }
            }
        }
        l_150.f5 = ((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((l_150.f3 == ((((l_153 <= ((l_124.f0 <= p_50.f4) > ((p_48 = ((safe_lshift_func_int8_t_s_s((((((*l_180) = ((l_179 = l_178) == (void*)0)) ^ ((0x46L || 0UL) >= g_28)) || p_50.f3) & 18446744073709551615UL), p_50.f2)) < p_50.f0)) || 65535UL))) , l_181) , p_50.f0) , g_54[1])) || g_18[0][1]) , g_18[0][0]), 0x1BC8L)), 1L)) | l_181.f1);
        return l_183;
    }
    if ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((*g_146) ^= ((safe_rshift_func_uint16_t_u_s(((l_61[0] == (void*)0) & ((g_190 = l_183) == ((*l_191) = g_67))), 11)) && ((((safe_add_func_int32_t_s_s(p_50.f0, g_28)) , l_124) , g_67) == (void*)0))), g_149.f2)), g_54[0])))
    { 
        int32_t *l_195 = &g_149.f5;
        int32_t *l_196 = &g_54[3];
        int32_t *l_197 = &g_54[0];
        int32_t *l_198 = &g_54[0];
        int32_t *l_199 = &l_135[4][4][0];
        int32_t *l_200 = &g_149.f5;
        int32_t *l_201 = &g_54[3];
        int32_t *l_202 = &g_54[1];
        int32_t l_203 = 0xE669EC0AL;
        int32_t *l_204 = &l_203;
        int32_t *l_205 = &g_54[2];
        int32_t *l_206 = &g_54[0];
        int32_t *l_207 = &l_203;
        int32_t *l_208 = &l_135[2][2][1];
        int32_t *l_209 = &l_135[2][2][1];
        int32_t *l_210 = &g_54[0];
        int32_t *l_214 = &l_150.f5;
        int32_t *l_215 = &l_135[0][3][0];
        int32_t *l_216[4];
        int32_t l_217 = (-4L);
        int i;
        for (i = 0; i < 4; i++)
            l_216[i] = &l_203;
        l_211--;
        l_218--;
    }
    else
    { 
        uint32_t l_227 = 4294967295UL;
        struct S1 *l_229 = (void*)0;
        int32_t l_235 = 0x65B3BB28L;
        int32_t l_265 = (-1L);
        union U2 l_293[3] = {{1UL},{1UL},{1UL}};
        uint16_t *l_294[4];
        int i;
        for (i = 0; i < 4; i++)
            l_294[i] = &g_28;
        for (l_211 = (-10); (l_211 == 33); l_211++)
        { 
            const uint16_t l_225[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            struct S1 **l_230[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_232[6] = {&g_54[0],&l_150.f5,&l_150.f5,&g_54[0],&l_150.f5,&l_150.f5};
            int64_t **l_290 = (void*)0;
            int i;
            for (l_150.f0 = 0; (l_150.f0 >= 0); l_150.f0 -= 1)
            { 
                for (l_150.f1 = 0; (l_150.f1 >= 0); l_150.f1 -= 1)
                { 
                    int32_t *l_226 = &l_135[0][3][0];
                    int i, j;
                    if (g_18[l_150.f0][(l_150.f1 + 1)])
                        break;
                    (*l_226) = (safe_div_func_int32_t_s_s((g_54[l_150.f1] = g_18[l_150.f0][(l_150.f1 + 1)]), l_225[1]));
                    l_227 ^= ((void*)0 != &p_49);
                }
            }
            l_135[0][3][0] |= ((g_132 , (g_228 , l_229)) != (l_231 = &g_149));
            if ((1UL & ((*g_146) >= ((safe_mod_func_uint8_t_u_u(((p_48 , (p_48 , (l_235 |= p_50.f2))) , (safe_mod_func_int8_t_s_s((((((*l_183) = (safe_div_func_uint64_t_u_u(18446744073709551615UL, l_227))) || (*g_190)) == 0x64A7FD83CDD95E0ELL) <= 0x567EC094L), 1UL))), 255UL)) || p_47))))
            { 
                int64_t *l_260 = &l_150.f0;
                struct S1 *l_261 = &g_149;
                int32_t l_262 = 0xD7BCEBDFL;
                uint64_t *l_263 = &g_264;
                l_135[0][3][0] = (safe_mul_func_int16_t_s_s((p_50.f0 , (safe_mul_func_uint16_t_u_u((l_265 |= ((l_235 = ((*l_263) = (safe_mul_func_uint8_t_u_u((((~0x39L) | ((*l_260) = ((safe_div_func_uint64_t_u_u((1UL && ((safe_lshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u((+(safe_sub_func_uint32_t_u_u((g_18[0][1] , (g_149.f4 = (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_260 != l_260) <= (((*g_190) , l_261) == l_261)), (*g_146))), p_50.f2)))), p_47))), p_47)) == 0xD4L), 2)) , l_150.f2)), l_262)) , (-3L)))) | l_235), l_227)))) & p_48)), 1UL))), 0L));
                if (l_265)
                    break;
            }
            else
            { 
                int64_t l_268 = 5L;
                int32_t l_272[7][3][7] = {{{0x613FC018L,(-7L),(-1L),0xDDA83CD1L,(-1L),0x79D718FDL,0x0F085550L},{0x7A55D1B2L,0xE7200320L,0L,0xDDA83CD1L,0x69524366L,(-5L),0xCDB836ACL},{0x5A96B93CL,0x5F200AAEL,0xC041A955L,0L,1L,0x69524366L,1L}},{{(-5L),0x0DA48ED9L,0x0DA48ED9L,(-5L),0x6F5BC020L,0L,0xDDA83CD1L},{0L,8L,0x0F085550L,(-1L),4L,(-8L),8L},{0x613FC018L,0x7A405C94L,0x95E050D9L,8L,(-1L),0xEEFE5F60L,0xDDA83CD1L}},{{0L,0xCDB836ACL,(-4L),0x7A405C94L,0x69524366L,0x74D66F8EL,1L},{0x0F085550L,6L,0xDBF15BDAL,0L,0xCADD65BEL,8L,0xCDB836ACL},{0L,0x0DA48ED9L,0x5A96B93CL,(-4L),6L,2L,0x0F085550L}},{{(-8L),0x59F6053CL,0x5A96B93CL,5L,8L,(-8L),(-1L)},{0x79D718FDL,0x5A96B93CL,0xDBF15BDAL,0x04F5D172L,8L,8L,0x04F5D172L},{(-4L),0L,(-4L),0xDDA83CD1L,0x04F5D172L,0L,1L}},{{0x7A405C94L,0xE7200320L,0x95E050D9L,0xEF0DABAFL,0x8CC783C7L,0x5A96B93CL,0xCDB836ACL},{(-5L),8L,0x0F085550L,(-10L),1L,0L,0x0DA48ED9L},{0x2A2D980FL,(-1L),0x0DA48ED9L,5L,4L,8L,0xEEFE5F60L}},{{0L,0xB65879E4L,0xC041A955L,4L,0x613FC018L,(-8L),0xB65879E4L},{0L,(-10L),0xC041A955L,(-5L),2L,0xDBF15BDAL,0L},{0L,(-10L),0x5F200AAEL,0L,(-8L),(-5L),0xEEFE5F60L}},{{(-1L),0L,(-1L),5L,8L,5L,(-1L)},{0xDDA83CD1L,0xDDA83CD1L,0L,0x5F200AAEL,0L,0x7A405C94L,4L},{4L,(-5L),1L,0L,0x5A96B93CL,4L,0L}}};
                int i, j, k;
                l_272[2][1][5] = (0x3851L == (safe_sub_func_uint8_t_u_u(((void*)0 == &l_218), (0x8EL != ((((p_47 & l_268) <= ((safe_add_func_uint32_t_u_u(p_47, l_235)) && g_271[2])) >= p_50.f0) || p_48)))));
                for (l_268 = 0; (l_268 == (-12)); l_268--)
                { 
                    struct S1 l_275[7] = {{-1L,0x9E22738764672D5CLL,251UL,-1L,0x683C729BL,0xADCFEEE1L,-1L},{1L,0L,0UL,0x0D9FE412EDE8C016LL,0xA6EB4783L,0L,9L},{1L,0L,0UL,0x0D9FE412EDE8C016LL,0xA6EB4783L,0L,9L},{-1L,0x9E22738764672D5CLL,251UL,-1L,0x683C729BL,0xADCFEEE1L,-1L},{1L,0L,0UL,0x0D9FE412EDE8C016LL,0xA6EB4783L,0L,9L},{1L,0L,0UL,0x0D9FE412EDE8C016LL,0xA6EB4783L,0L,9L},{-1L,0x9E22738764672D5CLL,251UL,-1L,0x683C729BL,0xADCFEEE1L,-1L}};
                    int64_t *l_292 = (void*)0;
                    int64_t **l_291 = &l_292;
                    int i;
                    if (p_50.f2)
                        break;
                    (*l_231) = l_275[1];
                    (*l_178) = ((g_10 <= (safe_lshift_func_uint8_t_u_u(((*g_146)++), ((((*g_190) ^= (safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((p_50.f0 , 0xFB36EDBC130D5CC4LL), p_47)), 0xCC66A49BL))) | (safe_add_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_s(((p_47 < (g_288[2][2][0] == (void*)0)) | 0x7CL), p_50.f0)) <= p_47) , (void*)0) == (void*)0) < g_3), g_228.f1))) <= g_54[0])))) , p_49);
                    l_291 = l_290;
                    (*l_231) = ((l_293[2] , p_50.f0) , l_275[1]);
                }
            }
            return l_294[0];
        }
    }
lbl_343:
    for (l_124.f0 = 0; (l_124.f0 < (-20)); l_124.f0 = safe_sub_func_int64_t_s_s(l_124.f0, 9))
    { 
        union U2 *l_297 = &g_298;
        int32_t l_301 = 9L;
        struct S1 l_306[5] = {{1L,4L,0x61L,9L,0xD4CEE043L,0xED2E4A07L,0x2701L},{1L,4L,0x61L,9L,0xD4CEE043L,0xED2E4A07L,0x2701L},{1L,4L,0x61L,9L,0xD4CEE043L,0xED2E4A07L,0x2701L},{1L,4L,0x61L,9L,0xD4CEE043L,0xED2E4A07L,0x2701L},{1L,4L,0x61L,9L,0xD4CEE043L,0xED2E4A07L,0x2701L}};
        uint16_t l_315 = 0x6BA4L;
        int i;
        l_297 = (void*)0;
        for (l_150.f4 = 0; (l_150.f4 > 21); ++l_150.f4)
        { 
            int8_t l_302 = 0x20L;
            int32_t l_307 = (-7L);
            int32_t l_322 = (-6L);
            uint16_t l_340 = 65526UL;
            l_302 &= l_301;
            l_307 = ((safe_add_func_uint64_t_u_u(p_50.f2, ((g_264 | p_50.f2) == (~(0L | (((l_306[1] , (p_47 || (*g_190))) && (*g_146)) >= l_307)))))) == (-1L));
            for (g_264 = 0; (g_264 <= 3); g_264 += 1)
            { 
                int32_t l_308 = 0x790D6BECL;
                int i, j, k;
                (*l_178) = p_49;
                l_308 ^= g_120[g_264];
                for (g_149.f5 = 0; (g_149.f5 < 21); g_149.f5++)
                { 
                    return l_183;
                }
                for (g_298.f4 = 0; (g_298.f4 <= 12); g_298.f4 = safe_add_func_uint32_t_u_u(g_298.f4, 9))
                { 
                    int32_t *l_313 = (void*)0;
                    int32_t *l_314[7];
                    uint16_t *l_318 = &g_28;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_314[i] = &l_135[0][3][0];
                    l_315--;
                    return l_318;
                }
            }
            for (g_228.f0 = 24; (g_228.f0 < 15); g_228.f0 = safe_sub_func_uint64_t_u_u(g_228.f0, 5))
            { 
                int32_t *l_321[6] = {&g_54[0],&g_54[0],&g_54[0],&g_54[0],&g_54[0],&g_54[0]};
                uint32_t *l_337 = &l_165[0][3][3];
                int i;
                --l_323[1];
                l_340 = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(1UL, (safe_unary_minus_func_int8_t_s(l_302)))), (safe_add_func_uint64_t_u_u((p_50 , (safe_add_func_int32_t_s_s((p_50.f0 , ((((safe_mod_func_uint32_t_u_u(p_50.f2, ((--(*l_337)) && ((void*)0 != &p_48)))) , l_301) & l_302) | l_306[1].f4)), 0L))), g_149.f4))));
            }
        }
    }
lbl_359:
    l_135[0][3][0] &= (l_150.f5 = l_150.f1);
    for (l_150.f6 = 1; (l_150.f6 >= 0); l_150.f6 -= 1)
    { 
        uint16_t l_341[7][3][6] = {{{65532UL,65535UL,0xD505L,0xA9CDL,0x820BL,0xCD84L},{65535UL,0x03F6L,0xE45BL,0x03F6L,65535UL,1UL},{0xE45BL,0xD712L,0x7F93L,0x1E31L,65532UL,65535UL}},{{0x03F6L,0x51A5L,65535UL,0xD712L,0xF78FL,65535UL},{1UL,1UL,0x7F93L,65533UL,0x6635L,1UL},{0xF78FL,0x7F93L,0xE45BL,0xB50DL,65535UL,0xCD84L}},{{0xD712L,7UL,0xD505L,0xD505L,7UL,0xD712L},{65532UL,65535UL,7UL,1UL,65532UL,0xA9CDL},{0xCD84L,65533UL,0UL,0xF78FL,0x03F6L,0x6635L}},{{0xCD84L,65530UL,0xF78FL,1UL,0xB50DL,65527UL},{65532UL,65532UL,65535UL,0xD505L,0xA9CDL,0x820BL},{0xD712L,0x7A64L,65535UL,0xB50DL,65535UL,0x7A64L}},{{0xF78FL,0xCD84L,1UL,65533UL,0xD712L,65531UL},{1UL,0xEF92L,0xA9CDL,0xD712L,65527UL,0xE45BL},{0x03F6L,0xEF92L,0x7A64L,0x1E31L,0xD712L,65532UL}},{{0xE45BL,0xCD84L,1UL,0x03F6L,65535UL,1UL},{65535UL,0x7A64L,0xB50DL,0xA9CDL,0xA9CDL,0xB50DL},{65532UL,65532UL,0x1E31L,0xCD84L,0xB50DL,65530UL}},{{65533UL,65530UL,0x51A5L,0x820BL,0x03F6L,0x1E31L},{0x1E31L,65533UL,0x51A5L,65535UL,65532UL,65530UL},{0x7F93L,65535UL,0x1E31L,0UL,7UL,0xB50DL}}};
        int32_t l_357[5][1] = {{(-1L)},{0L},{(-1L)},{0L},{(-1L)}};
        const struct S0 l_389 = {0L,1L};
        uint32_t l_406 = 0UL;
        const int32_t *l_441 = &l_150.f5;
        const int32_t **l_440[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_440[i] = &l_441;
        for (g_298.f3 = 0; (g_298.f3 <= 1); g_298.f3 += 1)
        { 
            int16_t l_342 = 0L;
            int16_t ** const l_349 = &g_190;
            int32_t ***l_355[1];
            struct S1 l_358[2][6][7] = {{{{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L},{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{-1L,0x4CADEC8C4C7AEAD1LL,0x69L,0xF64F763DADC4BB3CLL,4294967286UL,0L,0x59C2L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L}},{{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{-9L,0xBC90DC91D79C7BE1LL,252UL,1L,0x985EA18BL,0x67EB7EE7L,0xF0E6L},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL}},{{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{-1L,0x4CADEC8C4C7AEAD1LL,0x69L,0xF64F763DADC4BB3CLL,4294967286UL,0L,0x59C2L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L},{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L}},{{0L,-10L,0x59L,0x089DC33B451D2EC5LL,0xA7278C81L,-5L,-1L},{-7L,0L,5UL,0x9B70BCAD3E57F909LL,0UL,-1L,0L},{0L,-10L,0x59L,0x089DC33B451D2EC5LL,0xA7278C81L,-5L,-1L},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{0L,-10L,0x59L,0x089DC33B451D2EC5LL,0xA7278C81L,-5L,-1L},{-7L,0L,5UL,0x9B70BCAD3E57F909LL,0UL,-1L,0L}},{{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{0xBD6F8472449F7745LL,0x7256CA13670C37A9LL,4UL,0x3CEB34B71B3761B6LL,0x9BC15D0EL,0x0B7EF76FL,1L},{-1L,0x4CADEC8C4C7AEAD1LL,0x69L,0xF64F763DADC4BB3CLL,4294967286UL,0L,0x59C2L},{-1L,0x4CADEC8C4C7AEAD1LL,0x69L,0xF64F763DADC4BB3CLL,4294967286UL,0L,0x59C2L},{0xBD6F8472449F7745LL,0x7256CA13670C37A9LL,4UL,0x3CEB34B71B3761B6LL,0x9BC15D0EL,0x0B7EF76FL,1L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{0xBD6F8472449F7745LL,0x7256CA13670C37A9LL,4UL,0x3CEB34B71B3761B6LL,0x9BC15D0EL,0x0B7EF76FL,1L}},{{0L,-10L,0x59L,0x089DC33B451D2EC5LL,0xA7278C81L,-5L,-1L},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{0L,-10L,0x59L,0x089DC33B451D2EC5LL,0xA7278C81L,-5L,-1L},{-7L,0L,5UL,0x9B70BCAD3E57F909LL,0UL,-1L,0L},{0L,-10L,0x59L,0x089DC33B451D2EC5LL,0xA7278C81L,-5L,-1L},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL}}},{{{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L},{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{-1L,0x4CADEC8C4C7AEAD1LL,0x69L,0xF64F763DADC4BB3CLL,4294967286UL,0L,0x59C2L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L},{2L,0x9810C4CA821C16AALL,1UL,0xB7FB04761E1F90E6LL,1UL,0L,0L}},{{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{-9L,0xBC90DC91D79C7BE1LL,252UL,1L,0x985EA18BL,0x67EB7EE7L,0xF0E6L},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL}},{{-2L,-1L,255UL,1L,0xA3296AF7L,0x3D0AA9BFL,0L},{0xBD6F8472449F7745LL,0x7256CA13670C37A9LL,4UL,0x3CEB34B71B3761B6LL,0x9BC15D0EL,0x0B7EF76FL,1L},{-2L,-1L,255UL,1L,0xA3296AF7L,0x3D0AA9BFL,0L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{-2L,-1L,255UL,1L,0xA3296AF7L,0x3D0AA9BFL,0L},{0xBD6F8472449F7745LL,0x7256CA13670C37A9LL,4UL,0x3CEB34B71B3761B6LL,0x9BC15D0EL,0x0B7EF76FL,1L}},{{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{-7L,0L,5UL,0x9B70BCAD3E57F909LL,0UL,-1L,0L},{-9L,0xBC90DC91D79C7BE1LL,252UL,1L,0x985EA18BL,0x67EB7EE7L,0xF0E6L},{-9L,0xBC90DC91D79C7BE1LL,252UL,1L,0x985EA18BL,0x67EB7EE7L,0xF0E6L},{-7L,0L,5UL,0x9B70BCAD3E57F909LL,0UL,-1L,0L},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{-7L,0L,5UL,0x9B70BCAD3E57F909LL,0UL,-1L,0L}},{{-2L,-1L,255UL,1L,0xA3296AF7L,0x3D0AA9BFL,0L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L},{-2L,-1L,255UL,1L,0xA3296AF7L,0x3D0AA9BFL,0L},{0xBD6F8472449F7745LL,0x7256CA13670C37A9LL,4UL,0x3CEB34B71B3761B6LL,0x9BC15D0EL,0x0B7EF76FL,1L},{-2L,-1L,255UL,1L,0xA3296AF7L,0x3D0AA9BFL,0L},{0xDF8A9C199DD6F6C8LL,-1L,0x07L,0x1CA55128AA242665LL,1UL,2L,1L}},{{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{-9L,0xBC90DC91D79C7BE1LL,252UL,1L,0x985EA18BL,0x67EB7EE7L,0xF0E6L},{0x7AB17395EC055DD7LL,0x725A2E185E6C309ALL,0xFEL,2L,0UL,0x7A685396L,0x799FL},{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL},{0xE0B96589D009ECB4LL,2L,0x56L,4L,0x149D5CB8L,-1L,0x1DEAL}}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_355[i] = &g_105[2][1][2];
            if (l_341[2][0][5])
                break;
            for (p_48 = 0; (p_48 <= 1); p_48 += 1)
            { 
                int i, j, k;
                if (l_342)
                    break;
                if (g_228.f0)
                    goto lbl_343;
                for (g_264 = 0; (g_264 <= 1); g_264 += 1)
                { 
                    uint8_t * const l_354 = &l_150.f2;
                    int i, j, k;
                    l_357[1][0] = ((safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((+0x630A92F4L) < p_50.f0), ((void*)0 != l_349))) || (((safe_mod_func_int16_t_s_s(((((safe_add_func_int8_t_s_s((((void*)0 == l_354) & ((l_355[0] != &l_178) | p_50.f2)), 0xAAL)) && p_47) == p_50.f0) ^ p_50.f2), (*g_190))) , &g_132) == (void*)0)), g_356[3][5][0])) > p_50.f2);
                    (*l_231) = l_358[0][4][6];
                    g_101[(p_48 + 4)][g_264][p_48] = (void*)0;
                    if (l_150.f3)
                        goto lbl_359;
                    l_135[1][4][1] = 0x404AFA56L;
                }
            }
        }
        for (l_150.f2 = 0; (l_150.f2 != 11); ++l_150.f2)
        { 
            int32_t *l_362[6][5][2] = {{{&l_357[0][0],&l_357[0][0]},{&l_135[0][3][0],&l_357[0][0]},{&l_357[0][0],&l_135[0][3][0]},{&l_357[0][0],&l_357[0][0]},{&l_135[0][3][0],&l_357[0][0]}},{{&l_357[0][0],&l_135[0][3][0]},{&l_357[0][0],&l_357[0][0]},{&l_135[0][3][0],&l_357[0][0]},{&l_357[0][0],&l_135[0][3][0]},{&l_357[0][0],&l_357[0][0]}},{{&l_135[0][3][0],&l_357[0][0]},{&l_357[0][0],&l_135[0][3][0]},{&l_357[0][0],&l_357[0][0]},{&l_135[0][3][0],&l_357[0][0]},{&l_357[0][0],&l_135[0][3][0]}},{{&l_357[0][0],&l_357[0][0]},{&l_135[0][3][0],&l_357[0][0]},{&l_357[0][0],&l_135[0][3][0]},{&l_357[0][0],&l_357[0][0]},{&l_135[0][3][0],&l_357[0][0]}},{{&l_357[0][0],&l_135[0][3][0]},{&l_357[0][0],&l_357[0][0]},{&l_135[0][3][0],&l_357[0][0]},{&l_357[0][0],&l_135[0][3][0]},{&l_357[0][0],&l_357[0][0]}},{{&l_135[0][3][0],&l_357[0][0]},{&l_357[0][0],&l_135[0][3][0]},{&l_357[0][0],&l_357[0][0]},{&l_135[0][3][0],&l_357[0][0]},{&l_357[0][0],&l_135[0][3][0]}}};
            int16_t l_363 = 0x1D38L;
            union U2 l_370[3] = {{4UL},{4UL},{4UL}};
            struct S1 l_383 = {0x352D91BA6AE79508LL,0x7A48084D41BEAE02LL,0x96L,0x14C3020426F2A685LL,0xBE9D8C44L,2L,4L};
            uint16_t *l_385 = &g_28;
            int32_t l_397 = (-5L);
            int i, j, k;
            l_364++;
            l_135[3][0][0] = 4L;
            for (g_298.f0 = 25; (g_298.f0 != 53); g_298.f0 = safe_add_func_uint32_t_u_u(g_298.f0, 4))
            { 
                struct S1 l_369 = {0xB00364C4400A923DLL,0x2ECB3F208D0039ACLL,1UL,0x15E9B7F6DFAD8B04LL,0xFA7D6ECCL,7L,0x0A5BL};
                int64_t *l_371 = &g_18[0][1];
                int32_t *** const l_375 = &l_178;
                int32_t ***l_376[4][4][2] = {{{&g_105[0][4][3],&g_105[0][4][3]},{&g_105[0][6][3],&g_105[0][4][3]},{&g_105[0][4][3],&g_105[0][6][3]},{&g_105[0][4][3],&g_105[0][4][3]}},{{&g_105[0][6][3],&g_105[0][4][3]},{&g_105[0][4][3],&g_105[0][6][3]},{&g_105[0][4][3],&g_105[0][4][3]},{&g_105[0][6][3],&g_105[0][4][3]}},{{&g_105[0][4][3],&g_105[0][6][3]},{&g_105[0][4][3],&g_105[0][4][3]},{&g_105[0][6][3],&g_105[0][4][3]},{&g_105[0][4][3],&g_105[0][6][3]}},{{&g_105[0][4][3],&g_105[0][4][3]},{&g_105[0][6][3],&g_105[0][4][3]},{&g_105[0][4][3],&g_105[0][6][3]},{&g_105[0][4][3],&g_105[0][4][3]}}};
                int32_t ****l_377 = &g_104[1];
                uint32_t *l_378[1][7][1] = {{{&g_379},{&g_379},{&g_379},{&g_379},{&g_379},{&g_379},{&g_379}}};
                struct S0 *l_380 = &l_124;
                struct S1 *l_384 = &l_383;
                int i, j, k;
                l_357[1][0] ^= ((5UL & ((l_369 , (l_370[0] , 0x06963CDB0C693CA6LL)) ^ ((*l_371) = p_50.f2))) || p_48);
                l_381 = ((g_379 = (((l_341[5][2][2] && 0x53L) , ((((((l_357[4][0] &= (~((((*g_190) ^= (safe_mod_func_uint64_t_u_u(((l_375 != ((*l_377) = (l_376[0][0][0] = &l_178))) && (p_49 != &l_357[1][0])), p_50.f2))) ^ p_50.f2) , 1UL))) ^ 0x5D125F12L) , (void*)0) == (void*)0) , 0x1DL) != 0x3AL)) > 0x78D27C7EL)) , l_380);
                (*l_384) = ((*l_231) = l_383);
                return l_385;
            }
            for (l_383.f0 = 0; (l_383.f0 == (-2)); --l_383.f0)
            { 
                int64_t *l_394[7];
                int32_t l_395 = 0x502C4708L;
                uint16_t l_396[7][2] = {{0x01C5L,0x01C5L},{1UL,0x01C5L},{0x01C5L,1UL},{0x01C5L,0x01C5L},{1UL,0x01C5L},{0x01C5L,0x2D67L},{1UL,1UL}};
                int32_t l_398 = 0xDB613FB3L;
                int32_t l_403 = 0x36E9603CL;
                int32_t l_405[2];
                int64_t l_409[3];
                struct S1 *l_439 = &l_383;
                int32_t **l_442 = &l_362[5][0][1];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_394[i] = &g_149.f0;
                for (i = 0; i < 2; i++)
                    l_405[i] = 0xB46DF394L;
                for (i = 0; i < 3; i++)
                    l_409[i] = 0x1BD618D38C5D8B13LL;
                l_398 = ((~(l_357[1][0] &= (g_228.f0 = ((l_389 , ((((4294967295UL || p_50.f2) | p_50.f2) >= (safe_div_func_int8_t_s_s(0L, (((p_50.f2 || (((l_395 = (safe_mod_func_uint16_t_u_u(((*l_183) &= 0x8D07L), p_50.f2))) < p_50.f2) < l_396[2][1])) >= p_47) , l_397)))) || 1L)) < g_149.f3)))) || 0x02L);
                for (l_150.f3 = (-12); (l_150.f3 <= 20); l_150.f3++)
                { 
                    int32_t l_401 = 9L;
                    int32_t l_402[4];
                    uint32_t l_410 = 0xB988D9C8L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_402[i] = (-1L);
                    (*l_178) = p_49;
                    --l_406;
                    l_410++;
                }
                for (p_50.f4 = 0; (p_50.f4 <= 33); p_50.f4 = safe_add_func_uint8_t_u_u(p_50.f4, 3))
                { 
                    const int32_t *l_418 = &l_405[0];
                    const int32_t **l_417[2][5][3] = {{{(void*)0,&l_418,(void*)0},{&l_418,(void*)0,(void*)0},{(void*)0,&l_418,(void*)0},{&l_418,&l_418,(void*)0},{(void*)0,&l_418,(void*)0}},{{&l_418,(void*)0,(void*)0},{(void*)0,&l_418,(void*)0},{&l_418,&l_418,(void*)0},{(void*)0,&l_418,(void*)0},{&l_418,(void*)0,(void*)0}}};
                    const int32_t ***l_416 = &l_417[1][0][2];
                    const int32_t ****l_415 = &l_416;
                    int32_t l_419 = (-6L);
                    int32_t l_420[6][3][4] = {{{0x17816718L,0x092118AAL,0L,(-3L)},{0L,(-1L),(-1L),0xD57322F0L},{(-1L),0xB44D90D0L,0xD57322F0L,0L}},{{(-1L),(-10L),(-1L),(-1L)},{0L,0L,0L,0L},{0x17816718L,0L,1L,0x092118AAL}},{{(-1L),0x89825E43L,(-1L),1L},{1L,0x89825E43L,0L,0x092118AAL},{0x89825E43L,0L,0x89825E43L,0L}},{{(-10L),0L,(-1L),(-1L)},{(-3L),(-10L),0L,0L},{0x092118AAL,0xB44D90D0L,0L,0xD57322F0L}},{{(-3L),(-1L),(-1L),(-3L)},{(-10L),0x092118AAL,0x89825E43L,0xB81918E0L},{0x89825E43L,0xB81918E0L,0L,0xB44D90D0L}},{{1L,(-1L),(-1L),0xB44D90D0L},{(-1L),0xB81918E0L,1L,0xB81918E0L},{0x17816718L,0x092118AAL,0L,(-3L)}}};
                    uint32_t *l_428 = &g_149.f4;
                    int8_t *l_444[3][6] = {{&g_445[3][0][0],(void*)0,&g_445[3][0][0],&g_445[3][0][0],(void*)0,&g_445[3][0][0]},{&g_445[3][0][0],(void*)0,&g_445[3][0][0],&g_445[3][0][0],(void*)0,&g_445[3][0][0]},{&g_445[3][0][0],(void*)0,&g_445[3][0][0],&g_445[3][0][0],(void*)0,&g_445[3][0][0]}};
                    int i, j, k;
                    (*l_415) = (void*)0;
                    if (g_149.f5)
                        goto lbl_343;
                    ++l_421[0];
                    l_420[1][0][3] = (l_409[2] && (safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(0x56F2337077918246LL, (((l_428 = &l_165[1][0][2]) == (((safe_div_func_int16_t_s_s(p_50.f2, ((((safe_div_func_uint16_t_u_u(((((l_419 = ((safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((*g_190) ^= (p_48 &= (((void*)0 != l_439) >= (l_440[0] == l_442)))), 11)) == 0x50AFL), 0x3C64BA2EL)) & g_132), g_443)) , 0x92L)) > (-10L)) , g_382.f1) | (*l_441)), p_50.f2)) , g_271[3]) ^ g_149.f3) && (**l_442)))) < g_149.f1) , &g_356[3][4][0])) | p_50.f4))), g_149.f2)));
                    if (p_47)
                        break;
                }
                (**l_442) = p_50.f4;
            }
        }
    }
    return g_448;
}



static uint16_t  func_59(uint16_t * const  p_60)
{ 
    int64_t l_108 = 0L;
    uint8_t l_119 = 0x09L;
    int32_t l_121 = 0x204CE78BL;
    l_121 = ((safe_sub_func_uint64_t_u_u((func_64(g_66[5][0][0]) > l_108), ((safe_sub_func_uint64_t_u_u(((-1L) >= (((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(g_18[0][0], (l_108 != ((-1L) & l_108)))), 8)), 0)), g_93)) < l_108) == l_119) > l_108) != 0x9CBCL)), 1L)) >= l_108))) , g_120[0]);
    return l_121;
}



static uint16_t  func_64(uint16_t ** p_65)
{ 
    int16_t l_68 = 0x19E8L;
    int32_t *l_69 = &g_54[3];
    int8_t l_94 = 0x9CL;
    if (((*l_69) = l_68))
    { 
        int32_t l_82 = 0xC5DFBC4EL;
        int32_t l_95 = 0L;
        int32_t ***l_106 = &g_105[0][6][3];
        for (g_28 = 0; (g_28 >= 14); ++g_28)
        { 
            uint64_t l_87 = 0xD3611A59CB379706LL;
            uint8_t *l_92[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_96 = 0x59D86306L;
            int i;
            l_96 = (safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0x4CDDCCF3742C0441LL, 1L)), ((safe_div_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(0x4AL, (l_82 ^= g_54[0]))) | (((((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(2L, 4)) >= (l_87 != (safe_rshift_func_uint8_t_u_u((l_94 ^= (safe_div_func_int32_t_s_s((*l_69), g_10))), 3)))), l_87)) ^ l_95) , &g_67) != p_65) <= (*l_69))) == 0x5832L) || 0xE6L), (*l_69))) <= l_95))), l_95));
            if ((*l_69))
            { 
                int32_t **l_98 = &l_69;
                int32_t *l_100 = &g_10;
                int32_t **l_99[7] = {&l_100,(void*)0,&l_100,&l_100,(void*)0,&l_100,&l_100};
                int i;
                for (l_82 = 5; (l_82 >= 0); l_82 -= 1)
                { 
                    uint16_t l_97 = 65526UL;
                    return l_97;
                }
                if (l_87)
                    break;
                g_101[5][1][2] = ((*l_98) = &l_95);
                return l_82;
            }
            else
            { 
                uint16_t l_107 = 1UL;
                for (l_94 = 7; (l_94 > 28); ++l_94)
                { 
                    l_106 = g_104[1];
                    return l_107;
                }
            }
            return l_82;
        }
    }
    else
    { 
        return (*l_69);
    }
    return (*l_69);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_54[i], "g_54[i]", print_hash_value);

    }
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);

    }
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_149.f3, "g_149.f3", print_hash_value);
    transparent_crc(g_149.f4, "g_149.f4", print_hash_value);
    transparent_crc(g_149.f5, "g_149.f5", print_hash_value);
    transparent_crc(g_149.f6, "g_149.f6", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_228.f1, "g_228.f1", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_271[i], "g_271[i]", print_hash_value);

    }
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_298.f2, "g_298.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_356[i][j][k], "g_356[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_382.f0, "g_382.f0", print_hash_value);
    transparent_crc(g_382.f1, "g_382.f1", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_445[i][j][k], "g_445[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_789.f0, "g_789.f0", print_hash_value);
    transparent_crc(g_789.f2, "g_789.f2", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1013[i], "g_1013[i]", print_hash_value);

    }
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
